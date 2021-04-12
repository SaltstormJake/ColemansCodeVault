#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
#include <iostream>

#define MAX_THREADS 3
#define BUF_SIZE 255

using namespace std;

DWORD WINAPI MyThreadFunction(void *lpParam);
void ErrorHandler(char *functionName);

// Sample custom data structure for threads to use.
// This is passed by void pointer so it can be any data type
// that can be passed using a single void pointer (void *).
struct MyData 
{
    int val1;
    int val2;
};

int main()
{
    MyData *pDataArray[MAX_THREADS];
    DWORD   dwThreadIdArray[MAX_THREADS];  // DWORD is a long
    HANDLE  hThreadArray[MAX_THREADS]; 

    // Create MAX_THREADS worker threads.  3 for this demo
    for( int i=0; i<MAX_THREADS; i++ )
    {
        // Allocate memory for thread data.
		pDataArray[i] = new MyData();

        if( pDataArray[i] == NULL )
        {
           // If the array allocation fails, the system is out of memory
           // so there is no point in trying to print an error message.
           // Just terminate execution.
            ExitProcess(2);
        }

        // Generate unique data for each thread to work with.
        pDataArray[i]->val1 = i;
        pDataArray[i]->val2 = i+100;

        // Create the thread to begin execution on its own.
        hThreadArray[i] = CreateThread( 
							NULL,                   // default security attributes
							0,                      // use default stack size  
							MyThreadFunction,       // thread function name
							pDataArray[i],          // argument to thread function 
							0,                      // use default creation flags 
							&dwThreadIdArray[i]);   // returns the thread identifier 


        // Check the return value for success.
        // If CreateThread fails, terminate execution. 
        // This will automatically clean up threads and memory. 
        if (hThreadArray[i] == NULL) 
        {
           ErrorHandler("CreateThread"); // Display an error message box
           ExitProcess(3);  // Terminate the application with return code of 3
        }
    } // End of main thread creation loop.

    // Wait until all threads have terminated.
    WaitForMultipleObjects(MAX_THREADS, hThreadArray, TRUE, INFINITE);

    // Close all thread handles and free memory allocations.
    for(int i=0; i<MAX_THREADS; i++)
    {
        CloseHandle(hThreadArray[i]);
        if(pDataArray[i] != NULL)
        {
            HeapFree(GetProcessHeap(), 0, pDataArray[i]);
            pDataArray[i] = NULL;    // Ensure address is not reused.
        }
    }
    return 0;
}

//-----------------------------------------------------------------
// This is the function that each thread calls
//-----------------------------------------------------------------
DWORD WINAPI MyThreadFunction(void *lpParam ) 
{ 
    HANDLE hStdout;
    MyData *pDataArray;

    TCHAR msgBuf[BUF_SIZE];
    size_t cchStringSize;
    DWORD dwChars;

    // Make sure there is a console to receive output results. 
    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    if( hStdout == INVALID_HANDLE_VALUE )
        return 1;

    // Cast the parameter to the correct data type.
    // The pointer is known to be valid because 
	// it was checked for NULL before the thread was created.
    pDataArray = (MyData *)lpParam;

    // Print the parameter values using thread-safe functions.  Do this
	//  10 times so we can see how the threads are working simultaneously.
	//  Note: The order of the output from the three threads will be different
	//  each time it is run since there is no way to determine the time slices
	//  allocated to each thread by the operating system.
	for(int i=0; i<10; i++)
	{
		StringCchPrintf(msgBuf, BUF_SIZE, TEXT("Thread %d - loop iteration %d with val = %d\n"), 
			pDataArray->val1, i, pDataArray->val2); 
		StringCchLength(msgBuf, BUF_SIZE, &cchStringSize);
		WriteConsole(hStdout, msgBuf, (DWORD)cchStringSize, &dwChars, NULL);
	}
    return 0; 
} 

void ErrorHandler(char *functionName) 
{ 
   // Retrieve the system error message for the last-error code.
    LPVOID lpMsgBuf;
    LPVOID lpDisplayBuf;
    DWORD dw = GetLastError(); 

	// Format an output message.  For more information on the arguments
	// and uses of this function see the MSDN web page
	// http://msdn.microsoft.com/en-us/library/ms679351.aspx
    FormatMessage(
        FORMAT_MESSAGE_ALLOCATE_BUFFER | 
        FORMAT_MESSAGE_FROM_SYSTEM |
        FORMAT_MESSAGE_IGNORE_INSERTS,
        NULL,
        dw,
        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
        (LPTSTR) &lpMsgBuf,
        0, NULL );

    // Display the error message.
    lpDisplayBuf = (LPVOID)LocalAlloc(LMEM_ZEROINIT, 
        (lstrlen((LPCTSTR) lpMsgBuf) + lstrlen((LPCTSTR) functionName) + 40) * sizeof(TCHAR)); 
    StringCchPrintf((LPTSTR)lpDisplayBuf, 
        LocalSize(lpDisplayBuf) / sizeof(TCHAR),
        TEXT("%s failed with error %d: %s"), 
        functionName, dw, lpMsgBuf); 
    MessageBox(NULL, (LPCTSTR) lpDisplayBuf, TEXT("Error"), MB_OK); 

	// Free error-handling buffer allocations.
    LocalFree(lpMsgBuf);
    LocalFree(lpDisplayBuf);
}
