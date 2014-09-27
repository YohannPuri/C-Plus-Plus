//To check if it is an alphabet and to check its case
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
main()
{
clrscr();
 char ch;
 cout<<"Enter a character ";
 cin>>ch;
 if(isalpha(ch))
  {
   cout<<"It is an alphabet"<<endl;
   if(isupper(ch))
    cout<<"It is an uppercase character";
   else
    cout<<"It is a lowercase character";
  }
 else
  cout<<"It is not an alphabet";
getch();
}
