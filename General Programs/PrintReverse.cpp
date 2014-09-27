// Printing the reverse
#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
 int a[5];
 for(int i=0;i<5;i++)
  {
   cout<<"Enter a number ";
   cin>>a[i];
  }
 cout<<"\n\nThe Reverse is: \n\n";
 for(int j=4;j>=0;j--)
  cout<<a[j]<<endl;

getch();
}
