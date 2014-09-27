/*

		Copyright (c) 2012. Yohann Puri. All rights reserved.

		The following program builds a basic calculator. The user can choose an 
		operation amongst addition, subtraction, multiplication and division.
		The program performs the operation the user wants and then prints the 
		result.

*/


#include<iostream.h>			// Including header files required
#include<conio.h>
#include<stdio.h>

void operate(float,float,char);		// Function declaration for operate
void main()
{
clrscr();				// Clear the screen
 float op1,op2;				// Create two float variables to store operands
 char op;				// Create one character variable to store operator
 
 
 cout<<"Enter operand 1 ";		// Printing the string to the screen to ask for input
 	cin>>op1;			// Getting number into op1
 cout<<endl<<"Enter operand 2 ";	// Printing the string to the screen to ask for input
 	cin>>op2;			// getting number into op2
 cout<<endl<<"Enter operator ";		// Asking the user to specify the operator to use
 	cin>>op;			// Storing users response in op
 operate(op1,op2,op);			// Calling the function 'operate'
 
 // The following is used to stop output screen from disappearing unless a key is pressed
 getch();
 
}

 void operate(float op1,float op2,char op)	//Function definition for operate
 {
  float res;					// Float variable to store the result
   
   						// If - Else statement to check operator
   if(op=='+')
    {
     res=op1+op2;				// Addition
    }

   else if(op=='-')				// Subtraction
    {
     res=op1-op2;
    }
   else if(op=='*')				// Multiplying
    {
     res=op1*op2;
    }
   else if(op=='/')				// Dividing
    {
    	if(op2==0)
    		{
    			cout<<endl<<"Cannot divide by 0!";
    		}
    	else
    		{
     			res=op1/op2;
     		}
    }
    else
    {
    	cout<<endl<<"Invalid Operation Requested"<<endl;
    }
cout<<"The result is "<<res;					// Printing the result

 }



