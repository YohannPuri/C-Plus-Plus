/*

	Copyright (c) 2012. Yohann Puri. All rights reserved.
	
	This program takes two numbers and stores them in two variables and then swaps
	the values amongst the variables by using addition and subtraction.

*/


#include<iostream.h>				// Adding header files
#include<conio.h>
#include<stdio.h>

int swap(int&,int&);				// Function declaration

void main()
{
clrscr();					// Clearing the screen
 
 int num1,num2;					// Two integer variables to hold the two values
 cout<<"Enter number 1 ";
 cin>>num1;
 cout<<endl<<"Enter number 2 ";
 cin>>num2;
 cout<<"number 1 is "<<num1;
 cout<<endl<<"number 2 is "<<num2;
 swap(num1,num2);				// Function call
 
 cout<<endl<<"number 1 after swapping is "<<num1; 	//Printing the values so we could check
 cout<<endl<<"number 2 after swapping is "<<num2;
 getch();
}

 int swap(int &num1,int &num2)
 {
  num1=num1+num2;			// Storing the sum of the two numbers in num1
  num2=num1-num2;			// Essentially storing the first number in num2
  num1=num1-num2;			// Essentially storing the second number in num1

 }
