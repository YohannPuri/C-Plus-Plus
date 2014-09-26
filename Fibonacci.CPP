#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void fib(int);
void main()
{
clrscr();
 int num;
 cout<<"Enter last  number ";
 cin>>num;
 fib(num);
 getch();
}

 void fib(int num)
 {
 cout<<"The series is "<<endl;
  for(int i=-1,j=1,sum;i<num;)
   {
    sum=i+j;
    i=j;
    j=sum;
    cout<<sum<<'\t';
   }
 }

