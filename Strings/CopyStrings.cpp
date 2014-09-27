// WAP that reads two strings and copies the smaller one into the bigger one
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
 char str1[20],str2[20];
  cout<<endl<<"Enter first string ";
  gets(str1);
  cout<<endl<<"Enter second string ";
  gets(str2);
 for(int i=0;str1[i]!='\0';i++);
 for(int j=0;str2[j]!='\0';j++);

 if(i>j)
  {
   for(j=0;str2[j]!='\0';j++,i++)
    str1[i]=str2[j];
   str1[i]='\0';
   cout<<str1;
  }
 else
  {
   for(i=0;str1[i]!='\0';j++,i++)
    str2[j]=str1[i];
   str2[j]='\0';
   cout<<str2;
  }

getch();
}
