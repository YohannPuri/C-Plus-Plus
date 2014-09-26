#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int area(int,int,int);
void main()
{
clrscr();
 int choice;
 float ar;
 cout<<"1) Rectangle"<<endl<<"2) Circle"<<endl<<"3)Triangle"<<endl<<"choice ";
 cin>>choice;
 if(choice==1)
  {
   int len,br;
   cout<<"Enter length ";
   cin>>len;
   cout<<"Enter breadth ";
   cin>>br;
   ar=area(len,br,choice);
   cout<<"Area is "<<ar;
  }
 else if(choice==2)
  {
   float rad,pi=3.14;
   cout<<"Enter radius ";
   cin>>rad;
   ar=area(rad,pi,choice);
   cout<<"Area is "<<ar;
  }
 else if(choice==3)
  {
   int base,ht;
   cout<<"Enter base ";
   cin>>base;
   cout<<"Enter ht";
   cin>>ht;
   ar=area(base,ht,choice);
   cout<<"Area is ";
   cin>>ar;
  }
 getch();
}

 int area(int dim1,int dim2,int choice)
 {
  float ar;
  if(choice==1)
    ar=dim1*dim2;
  else if(choice==2)
   ar=dim2*dim1*dim1;
  else if(choice==3)
   ar=0.5*dim1*dim2;
  return(ar);
 }
