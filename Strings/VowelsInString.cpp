#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
 char sch[30];
 cout<<"\n Enter your name ";
 gets(sch);
 for(int i=0,vwl=0;sch[i]!='\0';i++)
 {
  if(sch[i]=='a' || sch[i]=='e' || sch[i]=='i' || sch[i]=='o' || sch[i]=='u' || sch[i]=='A' || sch[i]=='E' || sch[i]=='I' || sch[i]=='O' || sch[i]=='U')
   vwl++;
 }
 cout<<endl<<" The number of vowels in "<<sch<<" is "<<vwl;
getch();
}
