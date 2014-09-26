#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void operate(float,float,char);
void main()
{
clrscr();
 float op1,op2;
 char op;
 cout<<"Enter operand 1 ";
 cin>>op1;
 cout<<endl<<"Enter operand 2 ";
 cin>>op2;
 cout<<endl<<"Enter operator ";
 cin>>op;
 operate(op1,op2,op);
 getch();
}

 void operate(float op1,float op2,char op)
 {
  float res;
   if(op=='+')
    {
     res=op1+op2;
     cout<<"The result is "<<res;
    }

   if(op=='-')
    {
     res=op1-op2;
     cout<<"The result is "<<res;
    }
   if(op=='*')
    {
     res=op1*op2;
     cout<<"The result is "<<res;
    }
   if(op=='/')
    {
     res=op1+op2;
     cout<<"The result is "<<res;
    }


 }



