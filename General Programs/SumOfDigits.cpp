/*


	Copyright (c) 2012. Yohann Puri.


*/

#include<iostream.h>
#include <conio.h>
main()
{
 clrscr();
 int a,b,c,d,e,f;
 cout<<"\n\n\n\n\t Enter the no. ";
 cin>>a;
 b=a/1000;
 c=a%10;
 a=a/10;
 d=a%10;
 a=a/10;
 e=a%10;
 f=b+c+d+e;
 cout<<"\n\n\t Sum of the digits is "<<f;
 


getch();
}
