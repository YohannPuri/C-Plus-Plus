//3) WAF to print sum of elements of an array
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int sum(int[]);
main()
{
clrscr();
 int a[3];
 for(int i=0;i<3;i++)
 {
  cout<<"Enter number ";
  cin>>a[i];
 }
 int res;
 res=sum(a);
 cout<<"The sum is "<<res;
 getch();
}


int sum(int a[3])
 {
  for(int i=0,sum=0;i<3;i++)
   sum+=a[i];
  return(sum);
 }  
