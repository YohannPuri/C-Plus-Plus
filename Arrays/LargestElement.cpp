// WAF to print the largest element of an array
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int chek(int[]);
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
 res=chek(a);
 cout<<"The largest number is "<<res;
 getch();
}

int chek(int a[3])
 {
  for(int i=0,max=0;i<3;i++)
    {
     if(a[i]>=max)
      max=a[i];
    }
  return(max);
 } 
