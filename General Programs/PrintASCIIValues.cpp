// Is the character contained in the string
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
cout<<"\n\n";
 for(int i=1;i<256;i++)
 {
  if(i==26 || i>=7 && i<15)
    continue;
  cout<<i<<' '<<char(i)<<"   ";
  if(i==19 || i%10==0 && i>20 && i<100)
   cout<<'\n';
  if(i>90&& i%9==0)
   cout<<'\n';
  getch();
 }

getch();
}
