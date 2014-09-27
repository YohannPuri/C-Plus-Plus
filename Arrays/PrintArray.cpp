//WAF to print all the elements of an array by passing it as an argument
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void show(int[]);
main()
{
clrscr();
 int a[3];
 for(int i=0;i<3;i++)
 {
  cout<<"Enter number ";
  cin>>a[i];
 }
 show(a);
 getch();
}

void show(int a[3])
 {
  cout<<"The numbers are    ";
  for(int i=0;i<3;i++)
    cout<<a[i]<<'\t';
 }  
