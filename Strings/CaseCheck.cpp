// WAP that checks whether a character is uppercase or lowercase
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
 char ch;
 cout<<"\n\nEnter a character ";
 cin>>ch;
   if (ch>=97 && ch<=122 || ch>65 && ch<90)
    {
     cout<<"It is an alphabet";
     if(ch<97)
      cout<<endl<<"It is an uppercase character ";
     else
      cout<<endl<<"It is a lowercase character ";
    }
   else
    cout<<"It is not an alphabet";
getch();
}
