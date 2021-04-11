package pkgLayoutManagerDemo;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.BevelBorder;

//=============================================================================
/** This class demonstrates the Java GridBag Layout Manager.
 *  @author Dr. Rick Coleman
 *  Date: February 2009
 */
//=============================================================================

public class GridBagDemo extends JFrame
{
	/** Main panel for the demonstration */
	private JPanel m_MainPanel;
	
	/** Button 1 */
	private JButton m_Button1;
	
	/** Button 2 */
	private JButton m_Button2;

	/** Button 3 */
	private JButton m_Button3;

	/** Button 4 */
	private JButton m_Button4;

	/** Button 5 */
	private JButton m_Button5;

	//----------------------------------------------------------
	/** Default constructor */
	//----------------------------------------------------------
	public GridBagDemo()
	{
		this.setSize(320, 240);
		this.setLocation(425, 550);
		this.setBackground(Color.LIGHT_GRAY);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		this.setTitle("GridBag Layout Manager");
		this.setResizable(true);
		
		// Create the main panel
		m_MainPanel = new JPanel();
		m_MainPanel.setSize(320, 220);
		m_MainPanel.setLocation(0, 0);
		GridBagLayout gbl = new GridBagLayout(); // Create the manager
		m_MainPanel.setLayout(gbl);
		m_MainPanel.setBackground(Color.LIGHT_GRAY);
		m_MainPanel.setBorder(BorderFactory.createBevelBorder(BevelBorder.RAISED));
		this.getContentPane().add(m_MainPanel);

		// Create a GridBagConstraints to set everything
		GridBagConstraints gbc = new GridBagConstraints();
		gbc.fill = GridBagConstraints.BOTH;
		
		// Create and add the button 1
		m_Button1 = new JButton("Button 1");
		m_Button1.setBorder(BorderFactory.createBevelBorder(BevelBorder.RAISED));
		m_Button1.addActionListener(
				new ActionListener()
				{
					public void actionPerformed(ActionEvent e)
					{
					}
				});
		// Set the constraints
		gbc.weightx = 1.0;
		gbc.weighty = 1.0;
		gbc.gridx = 0; 
		gbc.gridy = 0;
		gbc.gridwidth = 1;
		gbc.gridheight = 1;
		gbl.setConstraints(m_Button1, gbc);
		m_MainPanel.add(m_Button1);

		// Create and add the button 2
		m_Button2 = new JButton("Button 2");
		m_Button2.setBorder(BorderFactory.createBevelBorder(BevelBorder.RAISED));
		m_Button2.addActionListener(
				new ActionListener()
				{
					public void actionPerformed(ActionEvent e)
					{
					}
				});
		// Set the constraints
		gbc.weightx = 0.0; // Reset to default
		gbc.gridx = GridBagConstraints.RELATIVE; // Reset to default
		gbc.gridy = GridBagConstraints.RELATIVE; // Reset to default
		gbc.gridwidth = GridBagConstraints.REMAINDER;
		gbl.setConstraints(m_Button2, gbc);
		m_MainPanel.add(m_Button2);

		// Create and add the button 3
		m_Button3 = new JButton("Button 3");
		m_Button3.setBorder(BorderFactory.createBevelBorder(BevelBorder.RAISED));
		m_Button3.addActionListener(
				new ActionListener()
				{
					public void actionPerformed(ActionEvent e)
					{
					}
				});
		// Set the constraints
		gbc.gridwidth = 1;                //reset to the default
		gbc.gridheight = 2;
		gbc.weighty = 1.0;
		gbl.setConstraints(m_Button3, gbc);
		m_MainPanel.add(m_Button3);

		// Create and add the button 4
		m_Button4 = new JButton("Button 4");
		m_Button4.setBorder(BorderFactory.createBevelBorder(BevelBorder.RAISED));
		m_Button4.addActionListener(
				new ActionListener()
				{
					public void actionPerformed(ActionEvent e)
					{
					}
				});
		// Set the constraints
		gbc.weighty = 0.0;                  //reset to the default
		gbc.gridwidth = GridBagConstraints.REMAINDER; //end row
		gbc.gridheight = 1;               //reset to the default
		gbl.setConstraints(m_Button4, gbc);
		m_MainPanel.add(m_Button4);

		// Create and add the button 5
		m_Button5 = new JButton("Button 5");
		m_Button5.setBorder(BorderFactory.createBevelBorder(BevelBorder.RAISED));
		m_Button5.addActionListener(
				new ActionListener()
				{
					public void actionPerformed(ActionEvent e)
					{
					}
				});
		// Set the constraints
		gbl.setConstraints(m_Button5, gbc);
		m_MainPanel.add(m_Button5);
	}
}
/* GridBagConstraints
 *  anchor
 *       Used when the component is smaller than its display area to determine 
 *       where (within the display area) to place the component. There are two 
 *       kinds of possible values: relative and absolute. Relative values are 
 *       interpreted relative to the container's ComponentOrientation property 
 *       while absolute values are not. Valid values are: 
 *           Absolute Values					Relative Values
 *       GridBagConstraints.NORTH 			GridBagConstraints.PAGE_START
 *       GridBagConstraints.SOUTH 			GridBagConstraints.PAGE_END
 *       GridBagConstraints.WEST 			GridBagConstraints.LINE_START
 *       GridBagConstraints.EAST 			GridBagConstraints.LINE_END
 *       GridBagConstraints.NORTHWEST 			GridBagConstraints.FIRST_LINE_START
 *       GridBagConstraints.NORTHEAST 			GridBagConstraints.FIRST_LINE_END
 *       GridBagConstraints.SOUTHWEST 			GridBagConstraints.LAST_LINE_START
 *       GridBagConstraints.SOUTHEAST 			GridBagConstraints.LAST_LINE_END
 *       GridBagConstraints.CENTER (the default) 
  *  fill
 *       Used when the component's display area is larger than the component's
 *       requested size to determine whether (and how) to resize the component. 
 *       Possible values are GridBagConstraints.NONE (the default), 
 *       GridBagConstraints.HORIZONTAL (make the component wide enough to fill 
 *       its display area horizontally, but don't change its height), 
 *       GridBagConstraints.VERTICAL (make the component tall enough to fill 
 *       its display area vertically, but don't change its width), and 
 *       GridBagConstraints.BOTH (make the component fill its display area 
 *       entirely). 
 *  gridwidth, gridheight
 *       Specifies the number of cells in a row (for gridwidth) or column 
 *       (for gridheight) in the component's display area. The default value 
 *       is 1. Use GridBagConstraints.REMAINDER to specify that the 
 *       component's display area will be from gridx to the last cell in the 
 *       row (for gridwidth) or from gridy to the last cell in the column 
 *       (for gridheight). Use GridBagConstraints.RELATIVE to specify that 
 *       the component's display area will be from gridx to the next to the 
 *       last cell in its row (for gridwidth or from gridy to the next to the 
 *       last cell in its column (for gridheight). 
 *  insets
 *       Specifies the component's external padding, the minimum amount of 
 *       space between the component and the edges of its display area. 
 *  ipadx, ipady
 *       Specifies the component's internal padding within the layout, how much 
 *       to add to the minimum size of the component. The width of the 
 *       component will be at least its minimum width plus ipadx pixels. 
 *       Similarly, the height of the component will be at least the minimum 
 *       height plus ipady pixels.
 * 	gridx, gridy
 *  	Specifies the cell containing the leading corner of the component's 
 *      display area, where the cell at the origin of the grid has address 
 *      gridx = 0, gridy = 0. Use GridBagConstraints.RELATIVE (the default 
 *      value) to specify that the component be placed immediately following 
 *      (along the x axis for gridx or the y axis for gridy) the component 
 *      that was added to the container just before this component was added. 
 *  weightx, weighty
 *      Used to determine how to distribute space, which is important for 
 *      specifying resizing behavior. Unless you specify a weight for at least 
 *      one component in a row (weightx) and column (weighty), all the components 
 *      clump together in the center of their container. This is because when the 
 *      weight is zero (the default), the GridBagLayout object puts any extra 
 *      space between its grid of cells and the edges of the container. 
 */