package pkgLayoutManagerDemo;

import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.border.BevelBorder;

//=============================================================================
/** This program demonstrates each of the Java Layout Managers.  For each
 *     demo a JFrame containing a JPanel is created and 5 JButtons are added
 *     to the JPanel.
 *  @author Dr. Rick Coleman
 *  Date: February 2009
 */
//=============================================================================

public class LayoutManagerDemo extends JFrame
{
	/** Main panel for the demonstration */
	private JPanel m_MainPanel;

	/** Show the BorderLayout demo button */
	private JButton m_BorderBtn;
	
	/** Show the FlowLayout demo button*/
	private JButton m_FlowBtn;
	
	/** Show the BoxLayout demo button*/
	private JButton m_BoxBtn;
	
	/** Show the GridLayout demo button*/
	private JButton m_GridBtn;
	
	/** Show the GridBagLayout demo button*/
	private JButton m_GridBagBtn;
	
	/** Exit button*/
	private JButton m_ExitBtn;
	
	
	/** Show the BorderLayout demo window */
	private BorderDemo m_BorderDemo;
	
	/** Show the FlowLayout demo window */
	private FlowDemo m_FlowDemo;
	
	/** Show the BoxLayout demo window */
	private BoxDemo m_BoxDemo;
	
	/** Show the GridLayout demo window */
	private GridDemo m_GridDemo;
	
	/** Show the GridBagLayout demo window */
	private GridBagDemo m_GridBagDemo;
	
	/** Label font used for most labels */
	public static final Font SysLabelFontB = new Font("SansSerif", Font.BOLD, 14);


	//------------------------------------------------------------
	/** Default constructor */
	//------------------------------------------------------------
	public LayoutManagerDemo()
	{
		this.setSize(320, 240);
		this.setLocation(425, 100);
		this.setBackground(Color.LIGHT_GRAY);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		this.setTitle("Java Layout Managers");
		this.setResizable(false);
		
		// Create the main panel
		m_MainPanel = new JPanel();
		m_MainPanel.setSize(320, 400);
		m_MainPanel.setLocation(0, 0);
		m_MainPanel.setLayout(null);
		m_MainPanel.setBackground(Color.LIGHT_GRAY);
		m_MainPanel.setBorder(BorderFactory.createBevelBorder(BevelBorder.RAISED));
		this.getContentPane().add(m_MainPanel);

		// Create a general use label
		JLabel tempLbl;
		tempLbl = new JLabel("Java Layout Manager Demonstration");
		tempLbl.setSize(300, 20);
		tempLbl.setFont(SysLabelFontB);
		tempLbl.setLocation(30, 5);
		m_MainPanel.add(tempLbl);
		
		int fudge = -3;
		
		// Create and add the Border demo button
		m_BorderBtn = new JButton("Border Layout Demo");
		m_BorderBtn.setSize(200, 20);
		m_BorderBtn.setBorder(BorderFactory.createBevelBorder(BevelBorder.RAISED));
		m_BorderBtn.setLocation(60, 40 + fudge);
		m_BorderBtn.addActionListener(
				new ActionListener()
				{
					public void actionPerformed(ActionEvent e)
					{
						// Show the Border demo
						m_BorderDemo.setVisible(true);
					}
				});
		m_MainPanel.add(m_BorderBtn);
		
		// Create and add the Flow demo button
		m_FlowBtn = new JButton("Flow Layout Demo");
		m_FlowBtn.setSize(200, 20);
		m_FlowBtn.setBorder(BorderFactory.createBevelBorder(BevelBorder.RAISED));
		m_FlowBtn.setLocation(60, 70 + fudge);
		m_FlowBtn.addActionListener(
				new ActionListener()
				{
					public void actionPerformed(ActionEvent e)
					{
						// Show the Flow demo
						m_FlowDemo.setVisible(true);
					}
				});
		m_MainPanel.add(m_FlowBtn);
		
		// Create and add the Box demo button
		m_BoxBtn = new JButton("Box Layout Demo");
		m_BoxBtn.setSize(200, 20);
		m_BoxBtn.setBorder(BorderFactory.createBevelBorder(BevelBorder.RAISED));
		m_BoxBtn.setLocation(60, 100 + fudge);
		m_BoxBtn.addActionListener(
				new ActionListener()
				{
					public void actionPerformed(ActionEvent e)
					{
						// Show the Box demo
						m_BoxDemo.setVisible(true);
					}
				});
		m_MainPanel.add(m_BoxBtn);
		
		// Create and add the Grid demo button
		m_GridBtn = new JButton("Grid Layout Demo");
		m_GridBtn.setSize(200, 20);
		m_GridBtn.setBorder(BorderFactory.createBevelBorder(BevelBorder.RAISED));
		m_GridBtn.setLocation(60, 130 + fudge);
		m_GridBtn.addActionListener(
				new ActionListener()
				{
					public void actionPerformed(ActionEvent e)
					{
						// Show the Grid demo
						m_GridDemo.setVisible(true);
					}
				});
		m_MainPanel.add(m_GridBtn);
		
		// Create and add the GridBag demo button
		m_GridBagBtn = new JButton("GridBag Layout Demo");
		m_GridBagBtn.setSize(200, 20);
		m_GridBagBtn.setBorder(BorderFactory.createBevelBorder(BevelBorder.RAISED));
		m_GridBagBtn.setLocation(60, 160 + fudge);
		m_GridBagBtn.addActionListener(
				new ActionListener()
				{
					public void actionPerformed(ActionEvent e)
					{
						// Show the GridBag demo
						m_GridBagDemo.setVisible(true);
					}
				});
		m_MainPanel.add(m_GridBagBtn);
		
		// Create and add the Exit button
		m_ExitBtn = new JButton("Exit");
		m_ExitBtn.setSize(50, 20);
		m_ExitBtn.setBorder(BorderFactory.createBevelBorder(BevelBorder.RAISED));
		m_ExitBtn.setLocation(135, 190 + fudge);
		m_ExitBtn.addActionListener(
				new ActionListener()
				{
					public void actionPerformed(ActionEvent e)
					{
						System.exit(0);
					}
				});
		m_MainPanel.add(m_ExitBtn);
		
		// Create all the demo frames
		m_BorderDemo = new BorderDemo();
		m_BorderDemo.setVisible(false);
		
		m_FlowDemo = new FlowDemo();
		m_FlowDemo.setVisible(false);
		
		m_BoxDemo = new BoxDemo();
		m_BoxDemo.setVisible(false);
		
		m_GridDemo = new GridDemo();
		m_GridDemo.setVisible(false);
		
		m_GridBagDemo = new GridBagDemo();
		m_GridBagDemo.setVisible(false);
		
		// Show the demo window
		this.setVisible(true);
	}
	
	
	public static void main(String[] args)
	{
		LayoutManagerDemo lmd = new LayoutManagerDemo();
	}
}
