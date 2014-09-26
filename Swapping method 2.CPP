#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int swap(int,int);
void main()
{
clrscr();
 int num1,num2;
 cout<<"Enter number 1 ";
 cin>>num1;
 cout<<endl<<"Enter number 2 ";
 cin>>num2;
 cout<<"number 1 is "<<num1;
 cout<<endl<<"number 2 is "<<num2;
 swap(num1,num2);
 cout<<endl<<endl<<"number 1 in calling function is "<<num1;
 cout<<endl<<endl<<"number 2 in calling function is "<<num2;
 getch();

}

 int swap(int num1,int num2)
 {
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  
  cout<<endl<<"Swapped value in called function of number 1 "<<num1;
  cout<<endl<<"Swapped value in called function of number 2 "<<num2;

 }
