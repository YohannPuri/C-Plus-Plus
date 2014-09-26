#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void check(int);
void main()
{
clrscr();
 int num;
 cout<<"If 1 is returned the number is not a prime"<<endl
 <<"If 0 is returned number is a prime ";
 cout<<endl<<"Enter number ";
 cin>>num;
 check(num);
  getch();
}

 void check(int num)
  {
  int flag=0;
  for(int i=2;i<num;i++)
   {
    if (num%i==0)
     flag++;
   }
   if(flag!=0)
    cout<<"The result is 1";
   else
    cout<<"The result is 0";
  }


