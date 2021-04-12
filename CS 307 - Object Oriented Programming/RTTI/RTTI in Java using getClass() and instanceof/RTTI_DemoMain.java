import java.util.Vector;

//======================================================================
// RTTI_DemoMain.java
// Purpose: This is a demonstration of Run Time Type Identification 
//		in Java using the instanceof operator.
// Author: Dr. Rick Coleman
//======================================================================
public class RTTI_DemoMain
{
	private Vector<CShape> sVec;
	
	//-----------------------------------------------
	/** Default constructor */
	//-----------------------------------------------
	public RTTI_DemoMain()
	{
		sVec = new Vector<CShape>();
		
		// Create some shapes and add to the vector
		sVec.add(new CRectangle());
		sVec.add(new COval());
		sVec.add(new CLine());
		sVec.add(new CPolygon());
		
		// See what we have
		for(int i=0; i<sVec.size(); i++)
		{
			CShape s = (CShape)sVec.elementAt(i);
			System.out.println("Type = " + s.getType() + ", Class = " + s.getTypeName() +
					" (from calling functions inherited from CShape)");
			System.out.println("Class = " + s.getClass() + 
					" (from calling the getClass() function)");
			if(s instanceof CRectangle)
			{
				System.out.println("\tinstanceof recognizes a CRectangle instance.");
			}
			else if(s instanceof COval)
			{
				System.out.println("\tinstanceof recognizes a COval instance.");
			}
			else if(s instanceof CLine)
			{
				System.out.println("\tinstanceof recognizes a CLine instance.");
			}
			else if(s instanceof CPolygon)
			{
				System.out.println("\tinstanceof recognizes a CPolygon instance.");
			}
			if(s instanceof CShape)
			{
				System.out.println("\tinstanceof also recognizes a CShape instance.");
			}
		}
	}
	
	public static void main(String[] args)
	{
		RTTI_DemoMain rDemo = new RTTI_DemoMain();
	}
}