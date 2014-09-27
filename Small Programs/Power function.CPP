/*

	Copyright (c) 2012. Yohann Puri. All rights reserved.
	
	This program asks the user for a base and an exponent and then returns the result 
	base raised to the power of the exponent. It does this by repeated multiplication.

*/

#include<iostream.h>				// Adding header files
#include<conio.h>
#include<stdio.h>


int power(int,int);				// Function declaration

main()
{
clrscr();			// Clearing the screen
 int base,exp,res;		// Integers for the base result and exponent values
 cout<<"Enter base ";		// Asking the user to enter base and exponent
 cin>>base;
 cout<<"Enter exponent ";
 cin>>exp;
 res=power(base,exp);		// Function call and storing returned value in r
 cout<<"The result is "<<res;

// The following line is used to stop the output screen from disappearing unless a key is pressed

 getch();

}
 power(int base,int exp)			// Function definition
 {
  int res=1;
  for(int i=1;i<=exp;i++)			// For loop for repeated multiplication.
     res=res*base;
  return(res);					// Returning calculated value.
 }
