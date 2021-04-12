//=====================================================================
/** SimpleThreads - a very simple demonstration of Java Threads */
//=====================================================================

public class SimpleThreads 
{

    //-------------------------------------------------------------
    //Display a message, preceded by the name of the current thread
    //-------------------------------------------------------------
    static void threadMessage(String message) 
    {
        String threadName = Thread.currentThread().getName();
        System.out.format("%s: %s%n", threadName, message);
    }

    //-------------------------------------------------------------
    // Internal private class which implements the Runnable 
    //  interface to demonstrate threading.
    //-------------------------------------------------------------
   private static class MessageLoop implements Runnable 
   {
        public void run() 
        {
            String importantInfo[] = {  "Mares eat oats",
						    "Does eat oats",
						    "Little lambs eat ivy",
						    "A kid will eat ivy too. Whoop-de-doo!"
            				};
            try 
            {
                for (int i = 0; i < importantInfo.length; i++) 
                {
                    //Pause for 4 seconds
                    Thread.sleep(4000);
                    //Print a message
                    threadMessage(importantInfo[i]);
                }
            } 
            catch (InterruptedException e) 
            {
                threadMessage("I wasn't done!");
            }
            // If a thread is interrupted by a call to its interrupt() method
            //  while it is executing it throws an InterruptedException.
        }
    } // end inner class MessageLoop

    public static void main(String args[]) throws InterruptedException 
    {
        //Delay, in milliseconds before we interrupt MessageLoop
        //   thread (default is one hour).
        long patience = 1000 * 60 * 60;

        //If command line argument is present, it gives patience in seconds.
        if (args.length > 0) 
        {
            try 
            {
                patience = Long.parseLong(args[0]) * 1000;
            } 
            catch (NumberFormatException e) 
            {
                System.err.println("Argument must be an integer.");
                System.exit(1);
            }

        }

        // Tell the user we are starting
        threadMessage("Starting MessageLoop thread");
        long startTime = System.currentTimeMillis();
        // Create a new thread
        Thread t = new Thread(new MessageLoop());
        // ...and start it.
        t.start();

        threadMessage("Waiting for MessageLoop thread to finish");
        //loop until MessageLoop thread exits
        while (t.isAlive()) // while the thread is still running
        {
            threadMessage("Still waiting...");
            //Wait maximum of 1 second for MessageLoop thread to finish.
            t.join(1000);
            if (((System.currentTimeMillis() - startTime) > patience) &&
                    t.isAlive()) 
            {
                threadMessage("Tired of waiting!");
                t.interrupt();  // Interrupt the thread
                t.join();  // ... and wait for the interrupt to complete.
            }
        }
        threadMessage("Finally!");
    } // end main
} // end SimpleThreads class