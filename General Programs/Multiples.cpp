/*

	 Copyright (c) 2012. Yohann Puri. All Rights reserved.

		This program asks the user to input a number and prints the table of multiples for that number.

*/


#include <iostream.h>				// Adding header files
#include <conio.h>


main()
{
clrscr();
   int a;
   cout<<"Enter a number";			// Asking user to enter number
   cin>>a;

	for(int i=1;i<=10;i++)			// For loop to print tables up to 10
	{
  	 cout<<a<<" X "<<i<<" = "<<a*i<<"\n";
	}
  
// The following line stops the output screen from disappearing without a keystroke.

 getch();
}
