/*

	 Copyright (c) 2012. Yohann Puri. All Rights reserved.

		This program asks the user to input grades obtained in 5 subjects and calculates the average

*/



#include <iostream.h>					// Adding header files
#include <conio.h>		
main()
{
clrscr();						// Clearing the screen
 int eng, mat, phy, chem, cs;				// Integer varaiables to store the grades
 

 cout<<"\n\n\n\n\t Enter English marks - ";		// Asking the user to enter grades and storing them in 5 different variables
 	cin>>eng;

 cout<<"\n\t Enter Maths marks   - ";
 	cin>>mat;

 cout<<"\n\t Enter Physics marks - ";
 	cin>>phy;

 cout<<"\n\t Enter Chemistry marks - ";
 	cin>>chem; 

 cout<<" \n\t Enter Computer Science marks - ";
 	cin>>cs;
 
 int per;
 ave=(chem+phy+mat+cs+eng)/5;				// Integer variable to store the average
 cout<<"\n\t The average is "<<ave;			// Printing the average


// The following line stops the output screen from disappearing without a keystroke.
 getch();
}
