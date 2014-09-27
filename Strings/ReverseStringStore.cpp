// WAP to fetch a string and reverse it in the same string
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
 char str1[20];
 int j,k;
  cout<<endl<<"Enter first string ";
  gets(str1);
  for(int i=0;str1[i]!='\0';i++);
  i-=1;
  k=i/2;

  for(j=0;i>k;i--,j++)
   {
    str1[i]=str1[i]+str1[j];
    str1[j]=str1[i]-str1[j];
    str1[i]=str1[i]-str1[j];
   }

 cout<<str1;
 getch();
}
