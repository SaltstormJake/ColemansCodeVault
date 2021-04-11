//package pkgOffScreenImageDemo;
/*
Create a new folder in the OffScreenImageDemo and call it Images.
Copy into this folder any JPG image. It is recommended that the size of the image be approximately 250 x 400 pixels.
Look for the place in the code below where the image Duke.jpg is being loaded and substitute the name of your image.
Save - Compile - Run. Study the comments and study the grahics object at the Java API website (link is found on the previous page).
*/
import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.Image;
import java.awt.Toolkit;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.image.BufferedImage;
import java.io.File;
import java.util.Calendar;

import javax.imageio.ImageIO;
import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.border.BevelBorder;

//================================================================
/** This application demonstrates how to create an off screen
 *  image, draw on the image, then save it as a .jpg file.
 *  @author Dr. Rick Coleman
 *  date: February 2009
 */
//================================================================
public class OffScreenImageDemo extends JFrame
{
    /** Main panel with the widgets */
    private JPanel m_MainPanel;
	
    /** The buffered image we draw into */
    private BufferedImage m_OffScreenImg;
	
    /** Label */
    private JLabel m_DoneLabel;
	
    /** Exit button */
    private JButton m_ExitButton;
	
    /** Reference to the image to draw offscreen */
    private Image m_Image;

    /** Defined width for the image */
    public static final int IMG_WIDTH = 1600;
	
    /** Defined height for the image */
    public static final int IMG_HEIGHT = 900;
	
    /** A really big font for a large image */ 
    public static final Font SysFont20B = new Font("SansSerif", Font.BOLD, 20);

    //----------------------------------------------------
    /** Default constructor */
    //----------------------------------------------------
    public OffScreenImageDemo()
    {
	// A small dialog box will appear on screen when the off-screen drawing
	// is complete and the JPG image has been created in the project folder. 
	this.setSize(320, 240);
	this.setLocation(100, 100);
	this.setTitle("Creating JPG files from Offscreen images");
	this.setDefaultCloseOperation(EXIT_ON_CLOSE);
	
	m_MainPanel = new JPanel();
	m_MainPanel.setLayout(null);
	m_MainPanel.setBackground(Color.LIGHT_GRAY);
	this.getContentPane().add(m_MainPanel);
	m_DoneLabel = new JLabel("Image file is done.");
	m_DoneLabel.setSize(300, 30);
	m_DoneLabel.setLocation(70, 50);
	m_DoneLabel.setFont(this.SysFont20B);
	m_MainPanel.add(m_DoneLabel);
	
	// Create the exit button
	m_ExitButton = new JButton("Exit");
	m_ExitButton.setSize(75, 20);
	m_ExitButton.setLocation(115, 150);
	m_ExitButton.setBorder(BorderFactory.createBevelBorder(BevelBorder.RAISED));
	m_ExitButton.addActionListener(
        	new ActionListener()
		{
                	public void actionPerformed(ActionEvent e)
                        	{
					// Exit the application with status=0 (normal exit)
					System.exit(0);
				}
			});
	m_MainPanel.add(m_ExitButton);

	// Load an image to draw on the offscreen image
	Toolkit tk = Toolkit.getDefaultToolkit();
	m_Image = tk.createImage("./Images/Duke.jpg"); // SUBSTITUTE THE NAME OF YOUR IMAGE HERE
	while(m_Image.getWidth(this) < 0); // Wait for all of the image to load
	// Create the buffered image
	m_OffScreenImg = new BufferedImage(IMG_WIDTH, IMG_HEIGHT, BufferedImage.TYPE_INT_RGB);
	
	// Draw some stuff in the buffered image
	drawSomeStuff();
	// Save the image as a JPG file
	saveJPGImage();
	
	this.setVisible(true);
    }
	
    //----------------------------------------------------
    /** drawSomeStuff - Draw into the offscreen image */
    //----------------------------------------------------
    private void drawSomeStuff()
    {
	Graphics g = m_OffScreenImg.getGraphics();
	
	// Create a white background
	g.setColor(Color.WHITE);
	g.fillRect(0, 0, m_OffScreenImg.getWidth(), m_OffScreenImg.getHeight());
	
	// Draw 3 filled squares
	g.setColor(Color.RED);
	g.fillRect(25, 25, 100, 100);
	g.setColor(Color.GREEN);
	g.fillRect(125, 125, 100, 100);
	g.setColor(Color.BLUE);
	g.fillRect(225, 225, 100, 100);
	g.setColor(Color.BLACK);
	g.setFont(SysFont20B);
	g.drawString("Filled Rectangles", 125, 350);
	
	// Draw 3 filled circles
	g.setColor(Color.RED);
	g.fillOval(325, 25, 100, 100);
	g.setColor(Color.GREEN);
	g.fillOval(425, 125, 100, 100);
	g.setColor(Color.BLUE);
	g.fillOval(525, 225, 100, 100);
	g.setColor(Color.BLACK);
	g.drawString("Filled Ovals", 425, 350);
	// Draw 3 filled rounded rectangles
	g.setColor(Color.RED);
	g.fillRoundRect(625, 25, 100, 100, 20, 20);
	g.setColor(Color.GREEN);
	g.fillRoundRect(725, 125, 100, 100, 20, 20);
	g.setColor(Color.BLUE);
	g.fillRoundRect(825, 225, 100, 100, 20, 20);
	g.setColor(Color.BLACK);
	g.drawString("Filled Rounded Rectangles", 725, 350);
	
	// Draw 3 filled arcs
	g.setColor(Color.RED);
	g.fillArc(925, 25, 100, 100, 0, 120);
	g.setColor(Color.GREEN);
	g.fillArc(1025, 125, 100, 100, 120, 120);
	g.setColor(Color.BLUE);
	g.fillArc(1125, 225, 100, 100, 240, 120);
	g.setColor(Color.BLACK);
	g.drawString("Filled Arcs", 1025, 350);

	// Draw 3 squares
	g.setColor(Color.RED);
	g.drawRect(25, 425, 100, 100);
	g.setColor(Color.GREEN);
	g.drawRect(125, 525, 100, 100);
	g.setColor(Color.BLUE);
	g.drawRect(225, 625, 100, 100);
	g.setColor(Color.BLACK);
	g.setFont(SysFont20B);
	g.drawString("Rectangles", 125, 750);
	
	// Draw 3 circles
	g.setColor(Color.RED);
	g.drawOval(325, 425, 100, 100);
	g.setColor(Color.GREEN);
	g.drawOval(425, 525, 100, 100);
	g.setColor(Color.BLUE);
	g.drawOval(525, 625, 100, 100);
	g.setColor(Color.BLACK);
	g.drawString("Ovals", 425, 750);
	// Draw 3 rounded rectangles
	g.setColor(Color.RED);
	g.drawRoundRect(625, 425, 100, 100, 20, 20);
	g.setColor(Color.GREEN);
	g.drawRoundRect(725, 525, 100, 100, 20, 20);
	g.setColor(Color.BLUE);
	g.drawRoundRect(825, 625, 100, 100, 20, 20);
	g.setColor(Color.BLACK);
	g.drawString("Rounded Rectangles", 725, 750);
	
	// Draw 3 arcs
	g.setColor(Color.RED);
	g.drawArc(925, 425, 100, 100, 0, 120);
	g.setColor(Color.GREEN);
	g.drawArc(1025, 525, 100, 100, 120, 120);
	g.setColor(Color.BLUE);
	g.drawArc(1125, 625, 100, 100, 240, 120);
	g.setColor(Color.BLACK);
	g.drawString("Arcs", 1025, 750);

	// Draw the Image
	g.drawImage(m_Image, 1250, 200, null);
	g.drawString("Duke, the Java Mascot", 1255, 650);
    }
    //----------------------------------------------------
    /** saveJPGImage - Save the image as a JPG file */
    //----------------------------------------------------
    private void saveJPGImage()
    {
	File imgFile;
	// Create a unique name using the time
	// Note: Calendar months are numbered from 0 so add 1 to Calendar.MONTH
	Calendar cd = Calendar.getInstance();
	int hr = cd.get(Calendar.HOUR_OF_DAY);
	int min = cd.get(Calendar.MINUTE);
	int sec = cd.get(Calendar.SECOND);
	int day = cd.get(Calendar.DAY_OF_MONTH);
	int month = cd.get(Calendar.MONTH)+1; // Calendar months are numbered from 0 
	int year = cd.get(Calendar.YEAR);
	// Create an image file name
	String fileName = new String("Image_" 
            + ((hr<10)?("0"+String.valueOf(hr)):String.valueOf(hr)) 
            + ((min<10)?("0"+String.valueOf(min)):String.valueOf(min))
            + ((sec<10)?("0"+String.valueOf(sec)):String.valueOf(sec)) 
            + "_" + ((day<10)?("0"+String.valueOf(day)):String.valueOf(day))
            + ((month<10)?("0"+String.valueOf(month)):String.valueOf(month))
            + year + ".jpg");
	// Create an image file
	imgFile = new File(fileName);
	// Save the image in JPEG format
	try
    	{
            ImageIO.write(m_OffScreenImg, "jpg", imgFile);
	}
        catch(Exception e)
	{
            System.out.println("Failed to write image to disk.");
        }
    }
	
    //----------------------------------------------------
    /** main function */
    //----------------------------------------------------
    public static void main(String[] args)
    {
	OffScreenImageDemo demo = new OffScreenImageDemo();
    }
}