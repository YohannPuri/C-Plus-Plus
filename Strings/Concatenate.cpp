//WAP to concatenate three strings of a name
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
 int i=0,j=0;
 char fn[15],mn[15],ln[15],jn[45];
 cout<<"\nEnter first name ";
 cin>>fn;
 cout<<"Enter middle name ";
 cin>>mn;
 cout<<"Enter last name ";
 cin>>ln;
   for(j=0;fn[j]!='\0';i++,j++)
    jn[i]=fn[j];
   jn[i++]=' ';
   for(j=0;mn[j]!='\0';i++,j++)
    jn[i]=mn[j];
   jn[i++]=' ';
   for(j=0;ln[j]!='\0';i++,j++)
    jn[i]=ln[j];
   jn[i++]='\0';
cout<<jn;
getch();
}
