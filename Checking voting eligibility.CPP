#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void checkvote(int,char);
void main()
{
clrscr();
 int age;
 char cship;
 cout<<"Enter age ";
 cin>>age;
 cout<<"Enter citizenship ";
 cin>>cship;
 checkvote(age,cship);
}
 void checkvote(int age, char cship)
 {
  if(age>=18 && cship=='i')
   cout<<endl<<"You can VOTE";
  else
   cout<<endl<<"YOU cant VOTE";
  getch();
 }
