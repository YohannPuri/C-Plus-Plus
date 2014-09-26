#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int power(int,int);
main()
{
clrscr();
 int base,exp,res;
 cout<<"Enter base ";
 cin>>base;
 cout<<"Enter exponent ";
 cin>>exp;
 res=power(base,exp);
 cout<<"The result is "<<res;
 getch();

}
 power(int base,int exp)
 {
  int res=1;
  for(int i=1;i<=exp;i++)
     res=res*base;
  return(res);
 }
