#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void vow(char);
void main()
{
clrscr();
 char al;
 cout<<"Enter alphabet ";
 cin>>al;
 vow(al);
 getch();
}

 void vow(char al)
 {
  if(al=='a' || al=='e' || al=='i' ||  al=='o' ||  al=='u')
   cout<<endl<<"It is a vowel";
  else if(al=='A' || al=='E' || al=='I' || al=='O' || al=='U')
   cout<<endl<<"It is a vowel";
  else
   cout<<endl<<"It is a consonant";
 }

