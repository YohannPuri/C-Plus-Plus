#include<iostream.h>
#include<conio.h>
#include<stdio.h>

float simint(float,float,float);
void main()
{
clrscr();
 float pr,rate,time,si;
 cout<<"Enter principle ";
 cin>>pr;
 cout<<endl<<"Enter Rate of Interest ";
 cin>>rate;
 cout<<endl<<"Enter Time ";
 cin>>time;
 si=simint(pr,rate,time);
 cout<<endl<<"The simple interest is "<<si;
 getch();
}

 float simint(float a,float b,float c)
 {
   float si;
   si=(a*b*c)/100;
   return(si);
 }

