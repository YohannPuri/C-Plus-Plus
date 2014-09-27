#include<iostream.h>
#include<conio.h>
main()
{
 clrscr();
 long num;
 cout<<"\n\n\n\n Enter a number ";
 cin>>num;
 for(long flag=0;num>0;flag++)
   num=num/10;
 cout<<"There are "<<flag<<" digits in this number";
getch();
}
