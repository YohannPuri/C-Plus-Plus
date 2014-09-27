//WAP that reads a string and converts it to uppercase
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
 char str[50];
 cout<<"\n\nEnter a string ";
 gets(str);
 for(int i=0;str[i]!='\0';i++)
  {
   if (str[i]>=97 && str[i]<=122)
     str[i]-=32;
  }
 cout<<str;


getch();
}
