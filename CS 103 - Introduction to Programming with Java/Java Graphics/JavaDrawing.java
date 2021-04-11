import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JFrame;
import javax.swing.JPanel;

//======================================================================
/** This simple drawing function provides a framework for experimenting
 *   with the drawing functions available in a Java graphics object.
 *  @author Dr. Rick Coleman
 */
//======================================================================
public class JavaDrawing extends JPanel
{
	/** The window holding this panel */
	private JFrame m_ParentFrame;
	
	//-------------------------------------------------
	/** Default constructor */
	//-------------------------------------------------
	JavaDrawing()
	{
		m_ParentFrame = new JFrame();
		m_ParentFrame.setSize(640, 480);   // Set frame size
		m_ParentFrame.setLocation(50, 50); // Set location on screen
		m_ParentFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		m_ParentFrame.setTitle("Java Drawing Demo");
		
		// Set the properties of this panel
		this.setLocation(0, 0); // Set at upper left corner of the JFrame
		// this.setSize(width, height); // Don't do this, let the JFrame set its size
		m_ParentFrame.getContentPane().add(this);  // Add this to the JFrame
		
		// All drawing in the panel is done in the overridden paint() function below
		m_ParentFrame.setVisible(true);
	} // end constructor
	
	//-------------------------------------------------
	/** Override the paint() function. */
	//-------------------------------------------------
	public void paint(Graphics g)
	{
		// Create a white background for the entire panel
		g.setColor(Color.WHITE);
		g.fillRect(0, 0, this.getWidth(), this.getHeight());
		
		// Draw 3 filled squares
		g.setColor(Color.RED);
		g.fillRect(10, 10, 50, 50);
		g.setColor(Color.GREEN);
		g.fillRect(75, 75, 50, 50);
		g.setColor(Color.BLUE);
		g.fillRect(140, 140, 50, 50);
		g.setColor(Color.BLACK);
		g.drawString("Filled Rectangles", 75, 220);
		
		// Draw 3 filled circles
		g.setColor(Color.RED);
		g.fillOval(150, 10, 50, 50);
		g.setColor(Color.GREEN);
		g.fillOval(215, 75, 50, 50);
		g.setColor(Color.BLUE);
		g.fillOval(280, 140, 50, 50);
		g.setColor(Color.BLACK);
		g.drawString("Filled Ovals", 215, 220);

		// Draw 3 rounded rectangles
		g.setColor(Color.RED);
		g.fillRoundRect(290, 10, 50, 50, 20, 20);
		g.setColor(Color.GREEN);
		g.fillRoundRect(355, 75, 50, 50, 20, 20);
		g.setColor(Color.BLUE);
		g.fillRoundRect(420, 140, 50, 50, 20, 20);
		g.setColor(Color.BLACK);
		g.drawString("Filled Rounded Rectangles", 355, 220);
		
		// Draw 3 filled arcs
		g.setColor(Color.RED);
		g.fillArc(430, 10, 50, 50, 0, 120);
		g.setColor(Color.GREEN);
		g.fillArc(495, 75, 50, 50, 120, 120);
		g.setColor(Color.BLUE);
		g.fillArc(560, 140, 50, 50, 240, 120);
		g.setColor(Color.BLACK);
		g.drawString("Filled Arcs", 525, 220);
	
		// Draw 3 squares
		g.setColor(Color.RED);
		g.drawRect(10, 230, 50, 50);
		g.setColor(Color.GREEN);
		g.drawRect(75, 295, 50, 50);
		g.setColor(Color.BLUE);
		g.drawRect(140, 355, 50, 50);
		g.setColor(Color.BLACK);
		g.drawString("Rectangles", 75, 435);
	
		// Draw 3 circles
		g.setColor(Color.RED);
		g.drawOval(150, 230, 50, 50);
		g.setColor(Color.GREEN);
		g.drawOval(215, 295, 50, 50);
		g.setColor(Color.BLUE);
		g.drawOval(280, 355, 50, 50);
		g.setColor(Color.BLACK);
		g.drawString("Ovals", 215, 435);

		// Draw 3 rounded rectangles
		g.setColor(Color.RED);
		g.drawRoundRect(290, 230, 50, 50, 20, 20);
		g.setColor(Color.GREEN);
		g.drawRoundRect(355, 295, 50, 50, 20, 20);
		g.setColor(Color.BLUE);
		g.drawRoundRect(420, 355, 50, 50, 20, 20);
		g.setColor(Color.BLACK);
		g.drawString("Rounded Rectangles", 355, 435);

		// Draw 3 arcs
		g.setColor(Color.RED);
		g.drawArc(430, 230, 50, 50, 0, 120);
		g.setColor(Color.GREEN);
		g.drawArc(495, 295, 50, 50, 120, 120);
		g.setColor(Color.BLUE);
		g.drawArc(560, 355, 50, 50, 240, 120);
		g.setColor(Color.BLACK);
		g.drawString("Arcs", 525, 435);
		//-----------------------------------------------------------------------
		/*
		 * Java handles all drawing in objects using a Graphics object as the
		 * interface.  For detailed information check the Java doc web page at
		 * http://java.sun.com/j2se/1.5.0/docs/api/
		 * 
		 * The most used drawing commands are summarized below and demonstrated
		 * in the code above. In all of the drawings (x, y) defines the upper
		 * left corner of the object's enclosing rectangle and (width, height)
		 * defines the width and height of the enclosing rectangle. All measures
		 * are in pixels.  Locations (x,y) are in pixels from the upper left
		 * corner of the object being drawn on (a JPanel in this example).
		 * 
		 * drawArc(int x, int y, int width, int height, int startAngle, int arcAngle);
		 *    Draw an arc within the enclosing rectangle from the startAngle 
		 *    (0 degrees = 3:00) extending clockwise for arcAngle degrees.
		 * drawLine(int x1, int y1, int x2, int y2);
		 *    Draw a line from point (x1, y1) to point (x2, y2).
		 * drawOval(int x, int y, int width, int height);
		 * 	  Draw an oval within the enclosing rectangle.
		 * drawRect(int x, int y, int width, int height);
		 *    Draw a rectangle within the enclosing rectangle.
		 * drawRoundRect(int x, int y, int width, int height, int arcWidth, int arcHeight);
		 *    Draw a rounded rectangle within the enclosing rectangle with the arc corners
		 *    bounded by enclosing rectangles of size arcWidth x arcHeight.
		 * fillArc(int x, int y, int width, int height, int startAngle, int arcAngle);
		 *    Same as drawArc but fills the area with the current color.
		 * fillOval(int x, int y, int width, int height);
		 *    Same as drawOval but fills the area with the current color.
		 * fillRect(int x, int y, int width, int height);
		 *    Same as drawRect but fills the area with the current color.
		 *    
		 * You can also draw images (loaded from .jpg or .gif files) in a 
		 *    graphics object, but that is beyond the scope of this simple
		 *    demonstration.  Check the Java doc page (see link above) for
		 *    information on the drawImage() functions.
		 */
		//-----------------------------------------------------------------------
	} // end paint()
	
	//-------------------------------------------------
	/** main */
	//-------------------------------------------------
	public static void main(String[] args)
	{
		JavaDrawing jd = new JavaDrawing();
	}
}