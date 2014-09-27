/*

	Copyright (c) 2012. Yohann Puri. All rights reserved.
	
	The following program prints a menu asking the user to choose a shape. Once chosen
	the program then asks the user for information about the shape so it can then 
	calculate and display the area.

*/

#include<iostream.h>						// Adding header files
#include<conio.h>
#include<stdio.h>

int area(int,int,int);						// Function declaration for 'area'
void main()
{
clrscr();									// Clearing the screen
 int choice;								// Variable to hold users choice
 float ar;									// Variable to hold value of area
 
 
 // The following line prints the menu of options.
 cout<<"1) Rectangle"<<endl<<"2) Circle"<<endl<<"3)Triangle"<<endl<<"choice ";
 
 
 cin>>choice;								// User is asked for his choice
 
 
 if(choice==1)								//if - else statement to check users choice
  	{
   	int len,br;							// Integers to hold rectangles length and breadth
   	cout<<"Enter length ";				// Asking user for length and breadth input
   	cin>>len;
   	cout<<"Enter breadth ";
   	cin>>br;
   	ar=area(len,br,choice);				// Using area function to calculate area
   	cout<<"Area is "<<ar;				
  	}
 
 else if(choice==2)
  	{
  	 float rad,pi=3.14;					// Floats to hold circles radius and pi
  	 cout<<"Enter radius ";				// Asking user to enter radius
  	 cin>>rad;
  	 ar=area(rad,pi,choice);				// Using area function to calculate area
  	 cout<<"Area is "<<ar;				
  	}
 
 else if(choice==3)
  	{
  	 int base,ht;							// ints to hold base and height of triangle
  	 cout<<"Enter base ";					// Asking user to enter base and height
  	 cin>>base;
  	 cout<<"Enter ht";
  	 cin>>ht;
   	ar=area(base,ht,choice);				// Using area function to calculate area
   	cout<<"Area is "<<ar;
 	 }
  // The following line is used to keep the output video from disappearing
  // before a key is pressed
 getch();
}


 int area(int dim1,int dim2,int choice)			//Function definition for 'area'
 {
  float ar;										// Float variable to hold result
  if(choice==1)	
    ar=dim1*dim2;								// Calculating l*b
  else if(choice==2)
   ar=dim2*dim1*dim1;							// Calculating pi*r*r
  else if(choice==3)
   ar=0.5*dim1*dim2;							// Calculating 0.5*base*height
  return(ar);									// returning the result
 }
