//Is the character contained in the string
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
   cout<<"\n\n The character is present in the string";
   num++;
  }
 }
 if(num==0)
  cout<<"\n\n The character is not present in the string ";

getch();
}
