// Counting number of times a character is present
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
 char a[25],ch;
 int num=0;
 cout<<"\n Enter a few words ";
 gets(a);
 cout<<"\n Enter a character ";
 cin>>ch;
 for(int i=0;a[i]!='\0';i++)
 {
  if(a[i]==ch)
  {
   num++;
  }
 }
  cout<<"\n\n The character present "<<num<<" times in the string ";

getch();
}
