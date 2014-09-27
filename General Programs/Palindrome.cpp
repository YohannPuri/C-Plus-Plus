#include<iostream.h> 
#include<conio.h>
main()
{
 clrscr();
 long int num,rev=0,rem,eq;
 cout<<"\n\n\n\n Enter a number ";
 cin>>eq;
 num=eq;
 while(num>0)
  {
     rem=num%10;
     rev=rev*10+rem;
     num=num/10;
  }
  if(rev==eq)
      cout<<"\n It is a palindrome";
  else
      cout<<"\n It is not a palindrome";

getch();
}
