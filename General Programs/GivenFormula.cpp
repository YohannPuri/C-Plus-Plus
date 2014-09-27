/*

	 Copyright (c) 2012. Yohann Puri. All Rights reserved.

		This program asks the user to enter 4 values and the program calculates the formula 
		z = (Value 1 + Value 2)/(Value 3 - Value 4)

*/


#include <iostream.h>				// Adding header files
#include <conio.h>


void main()
{
clrscr();
 float p,q,r,s,z;				// Float variables for the 4 values and the result
 
 cout<<"\n\n\n\n\n\n\t Enter the value of P ";	// Asking the user to enter the 4 values
 	cin>>p;
 
 cout<<"\n\t Enter the value of Q ";
 	cin>>q;
 
 cout<<"\n\t Enter the value of R ";
 	cin>>r; 
 
 cout<<"\n\t Enter the value of S ";
 	cin>>s;
 
 z=(p+q)/(r-s);							// Calculating the values
 	cout<<"\n\t P+Q divided by R-S is equal to "<<z;	// Printing the result
 


// The following line stops the output screen from disappearing without a keystroke.
 getch();
}
