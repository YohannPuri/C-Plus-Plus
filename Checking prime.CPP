/*

		Copyright (c) 2012. Yohann Puri. All rights reserved.

		The following program checks if a number is prime or not by checking if 		the number entered when divided by any number between 2 and itself gives a 
		remainder of 0.If it does for any number then it is divisible by that 
		number and hence not prime. Otherwise if nothing returns a remainder of 0 
		then the number entered by the user is prime.

*/
#include<iostream.h>				// Adding header files
#include<conio.h>
#include<stdio.h>
void check(int);				// Function declaration for check


void main()
{
clrscr();											// Clearing the screen
 int num;											// Integer variable for user input
 cout<<"If 1 is returned the number is not a prime"<<endl
 <<"If 0 is returned number is a prime ";
 cout<<endl<<"Enter number ";
 cin>>num;
 check(num);					// Function call
  
  // The following line stops the output screen from disappearing without a button press
  getch();
}

 void check(int num)				// Function definition
  {
  int flag=0;
  for(int i=2;i<num;i++)
   {
    // Testing if the number is completely divisible by any integer between 2 and itself
    

	if (num%i==0)			// Making flag = 1 if the number is divisible		 flag++;
   }
   if(flag!=0)
    cout<<endl<<"The result is 1";	// Printing 1 if the number was divisible by
    					// by any number		
   else
    cout<<endl<<"The result is 0";	// If not divisible by anything then printing 0
  }


