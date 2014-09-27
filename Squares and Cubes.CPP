/*

	Copyright (c) 2012. Yohann Puri. All rights reserved.
	This program takes a number from the user and prints its square and cube

*/


#include<iostream.h>		// Adding necessary header files
#include<conio.h>
#include<stdio.h>

void sqr(int);			// Function declaration for sqr
void cub(int);			// Function declaration for cub


void main()
{
clrscr();			// Clearing the screen
 int num;			// Integer variable to store value given by user
 
cout<<"Enter number ";
 cin>>num;
 
 sqr(num);
 cub(num);
 
// The following line prevents the output window from disappearing without a keystroke
 getch();
}

 void sqr(int num)
 {
  cout<<endl<<"sqr is "<<num*num;		// Squaring the number and printing
 }

 void cub(int num)
 {
  cout<<endl<<"cube is "<<num*num*num;		// Cubing the number and printing
 }