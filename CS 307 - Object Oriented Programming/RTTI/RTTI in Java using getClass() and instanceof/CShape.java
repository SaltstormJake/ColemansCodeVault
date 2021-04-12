//======================================================================
// CShape.java
// Purpose: Class file defining a base class for this RTTI demonstration.
// Author: Dr. Rick Coleman
//======================================================================

public class CShape
{
	/** Shape type */
	protected int m_iType;
	
	/** Class name */
	protected String m_sTypeName;
	
	public static final int SHAPE 		= 0;
	public static final int RECTANGLE 	= 1;
	public static final int OVAL 		= 2;
	public static final int LINE 		= 3;
	public static final int POLYGON 	= 4;
	
	//----------------------------------------------
	/** Default constructor */
	//----------------------------------------------
	public CShape()
	{
		m_iType = SHAPE;
		m_sTypeName = "CShape";
	}
	
	//----------------------------------------------
	/** Get the type */
	//----------------------------------------------
	public int getType()
	{
		return m_iType;
	}
	
	//----------------------------------------------
	/** Get the class name */
	//----------------------------------------------
	public String getTypeName()
	{
		return m_sTypeName;
	}
}