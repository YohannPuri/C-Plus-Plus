
// WAF to count number of words in a string passed as an argument
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int word(char[]);
main()
{
clrscr();
 char str[30];
 cout<<"Enter a string ";
 gets(str);
 int num;
 num=word(str);
 cout<<"The number of words is "<<num+1;
 getch();
}

int word(char str[20])
 {
  for(int len=0;str[len]!='\0';len++);
  for(int i=0;str[i]!=32;i++);
  for(int num=0;str[i]!='\0';i++)
    {
     if(str[i]==32 && str[i+1]!=32)
      num++;
    }
    if(str[len-1]==32)
      num-=1;
    if(str[0]==32)
     --num;
  return(num);
 }
 
