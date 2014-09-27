/*

	Copyright (c) 2012. Yohann Puri. All rights reserved.
	
	
	This program prints the fibonacci sequence unto a number specified by the user
	It does this by adding i+j to find the next term in the sequence and then making 
	that the new j and making the old value of j the new i. In the process the old 		value of i is discarded.
	As soon as the number entered by the user is exceeded the loop stops and the
	program stops printing the sequence.

*/



#include<iostream.h>		// Adding header files
#include<conio.h>
#include<stdio.h>

void fib(int);			// Function declaration

void main()
{
clrscr();			// Clearing the screen	
 int num;			// Integer variable to store last number of sequence
 cout<<"Enter last  number ";	// Asking the user for the last number in the sequence
 cin>>num;
 fib(num);			// Calling the function

// The following line stops the output screen from disappearing without a keystroke
 getch();
}

 void fib(int num)		// Function definition
 {
 cout<<"The series is "<<endl;	
  
for(int i=-1,j=1,sum;i<num;)	// For loop to keep printing values until the last number
 				// is reached or exceeded
   {
    sum=i+j;
    i=j;
    j=sum;
    cout<<sum<<'\t';
   }
 
}

