// WAF to get a string and count number of vowels
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int vow(char[]);
main()
{
clrscr();
 char str[20];
 cout<<"Enter a string ";
 gets(str);
 int num;
 num=vow(str);
 cout<<"The number of vowels is "<<num;
 getch();
}

int vow(char str[20])
 {
  for(int i=0,vow=0;str[i]!='\0';i++)
    {
     if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
      ++vow;
     else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U')
      ++vow;
    }
  return(vow);
 }  
