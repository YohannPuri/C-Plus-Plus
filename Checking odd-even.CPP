/*

		Copyright (c) 2012. Yohann Puri. All rights reserved.		

		The following program checks if a number is odd or even by using the 			modulus function. We build a function named 'oddoeven' to do this task.
*/


#include<iostream.h>			// Adding header files
#include<conio.h>
#include<stdio.h>
void oddoeven(int);			// Function declaration
void main()
{
clrscr();				// Clear Screen
 int num;				// Integer variable to get number from user
 cout<<"Enter number ";
 cin>>num;

 oddoeven(num);				// Calling the function
}



 void oddoeven(int num)			// Function definition
 {
  if(num%2==0)				// Using mod to check if remainder = 0
   cout<<endl<<"It is Even";
  else
   cout<<endl<<"It is odd";
  

	getch();									
  // ^^ Used to prevent output screen from disappearing unless a character is pressed.
 

 }
