// Counting Even and odd entries
#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
 int a[10],odd=0,even=0;
 for(int i=0;i<10;i++)
  {
   cout<<"\n\n Enter a number ";
   cin>>a[i];
   if (a[i]%2==0)
    even++;
   else
    odd++;

  }
 cout<<"\nThere are "<<even<<" even entries";
 cout<<"\nThere are "<<odd<<" odd entries";
getch();
}
