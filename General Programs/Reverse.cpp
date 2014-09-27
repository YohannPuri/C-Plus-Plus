#include<iostream.h>
#include<conio.h>
main()
{
 clrscr();
 long int num,rev=0,rem;
 cout<<"\n\n\n\n Enter a number "; 
 cin>>num;
 while(num>0)
  {
     rem=num%10;
     rev=rev*10+rem;
     num=num/10;
  }

  cout<<"\n\n\t The reverse is "<<rev;

getch();
}
