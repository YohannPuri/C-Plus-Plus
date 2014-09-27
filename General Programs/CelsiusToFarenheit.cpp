/*

	Copyright (c) 2012. Yohann Puri. All rights reserved.
	This program takes the temperature in celsius from the user and prints it in farenheit.

*/



#include <iostream.h>					// Adding header files
#include <conio.h>


void main()
{
clrscr();						// Clearing the screen
 float c,f;						// Float variables for temperature and result
 
 cout<<" \n\n\n\n\t Enter the temp. in Celsius ";
 	cin>>c;
 

 f=c*(9.0/5.0)+32;						// Calculating the temperature in farenheit
 	cout<<"\n\t The temperature in Farenheit is "<<f;	// Printing the result


// The following line stops the output screen from disappearing without a keystroke.
 getch();
}
