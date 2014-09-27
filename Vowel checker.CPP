/*

	Copyright (c) 2012. Yohann Puri. All rights reserved.
	This program checks if a character entered is a vowel or not by using an if 
	statement

*/

#include<iostream.h>			// Adding necessary header files
#include<conio.h>
#include<stdio.h>

void vow(char);				// Function declaration

void main()

{
clrscr();				// Clearing the screen
 char al;
 cout<<"Enter alphabet ";		// Asking the user to enter a character
 cin>>al;
 vow(al);				// Function call
 
// The following line stops the output window from disappearing without a keystroke
 getch();
}


 void vow(char al)
 {
	// If statement used to check for vowel
	
  if(al=='a' || al=='e' || al=='i' ||  al=='o' ||  al=='u')
   cout<<endl<<"It is a vowel";
  
  else if(al=='A' || al=='E' || al=='I' || al=='O' || al=='U')
   cout<<endl<<"It is a vowel";
 
  else
   cout<<endl<<"It is not a vowel”;
 }

