/*

	Copyright (c) 2012. Yohann Puri. All rights reserved.
	
	This program calculates Simple interest by the formula
	Simple Interest = Principal * Rate * Time / 100

*/



#include<iostream.h>			// Adding required header files
#include<conio.h>
#include<stdio.h>

float simint(float,float,float);	// Function declaration

void main()
{
clrscr();				// Clearing the screen
 float pr,rate,time,si;
 cout<<"Enter principle ";		// Asking the user for values of Principal, Rate and Time
 cin>>pr;
 cout<<endl<<"Enter Rate of Interest ";
 cin>>rate;
 cout<<endl<<"Enter Time ";
 cin>>time;
 si=simint(pr,rate,time);		// Calling the function
 cout<<endl<<"The simple interest is "<<si;
 getch();
}

 float simint(float a,float b,float c)
 {
   float si
   si=(a*b*c)/100;			// Using the formula to calculate Simple interest
   return(si);				// Returning the value of Simple Interest
 }

