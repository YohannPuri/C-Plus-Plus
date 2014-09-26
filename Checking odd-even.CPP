#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void oddoeven(int);
void main()
{
clrscr();
 int num;
 cout<<"Enter number ";
 cin>>num;

 oddoeven(num);
}
 void oddoeven(int num)
 {
  if(num%2==0)
   cout<<endl<<"It is Even";
  else
   cout<<endl<<"It is odd";
  getch();
 }
