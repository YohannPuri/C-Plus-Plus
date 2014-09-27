//Finding the length of the string
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
 char sch[30];
 cout<<"\n Enter your name ";
 gets(sch);
 for(int i=0;sch[i]!='\0';i++);
 cout<<"\n The length of the string is "<<i;
getch();
}
