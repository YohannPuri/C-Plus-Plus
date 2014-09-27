// WAP to fetch a string and reverse it in another string
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
 char str1[20],str2[20];
  cout<<endl<<"Enter first string ";
  gets(str1);
  for(int i=0;str1[i]!='\0';i++);
  i-=1;
  for(int j=0;i>=0;i--,j++)
    str2[j]=str1[i];
 str2[j]='\0';
 cout<<"The reverse is "<<str2;
 getch();
}
