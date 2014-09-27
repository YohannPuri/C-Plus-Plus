// Calculating the maximum and minimum no.
#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
 int a[10],max=0,min=32767;
 for(int i=0;i<10;i++)
  {
   cout<<"Enter a number ";
   cin>>a[i];
   if(a[i]>max)
    max=a[i];

   if(a[i]<min)
    min=a[i];
  }
 cout<<"\n\n\nThe largest number is "<<max;
 cout<<"\n\n\nThe smallest number is "<<min;
getch();
} 
