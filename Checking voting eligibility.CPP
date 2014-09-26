/*

This program checks if the age entered by the user is greater than or equal to 18 and if
the citizenship entered = 'i'. If so it outputs that you are eligible to vote.

*/

#include<iostream.h>						// Adding header files
#include<conio.h>
#include<stdio.h>

void checkvote(int,char);					// Function declaration


void main()
{
clrscr();									// Clearing the screen
 int age;									// integer variable to store age
 char cship;								// character variable to store citizenship
 cout<<"Enter age ";
 cin>>age;
 cout<<"Enter citizenship ";
 cin>>cship;
 checkvote(age,cship);						// Calling the function
}
 void checkvote(int age, char cship)		// Function definition
 {
  if(age>=18 && cship=='i')					// Using is statement and the && operator 
  											// to check if conditions are met
   cout<<endl<<"You can VOTE";				// Result is printed
  else
   cout<<endl<<"YOU cant VOTE";
   
// The following line does not allow the output screen to disappear without a key press
  getch();
 }
