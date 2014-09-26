#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void sqr(int);
void cub(int);
void main()
{
clrscr();
 int num;
 cout<<"Enter number ";
 cin>>num;
 sqr(num);
 cub(num);
 getch();
}

 void sqr(int num)
 {
  cout<<endl<<"sqr is "<<num*num;
 }

 void cub(int num)
 {
  cout<<endl<<"cube is "<<num*num*num;
 }