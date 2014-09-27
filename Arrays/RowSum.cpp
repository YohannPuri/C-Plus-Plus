//WAP to find row sum of a matrix
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
 int a[4][3],r,c,sum;


    //FETCHING the Matrix

 for(r=0;r<4;r++)
  {
   cout<<"\nEnter the values in matrice for row "<<r+1<<endl;
   for(c=0;c<3;c++)
    {
     cout<<"Enter value for column "<<c+1<<" ";
     cin>>a[r][c];
    }
   cout<<"------------------------------------";
  }
clrscr();

  //Printing Matrix

 cout<<"\n Matrix 1 entered is "<<endl<<endl;
  for(r=0;r<4;r++)
   {
    for(int c=0;c<1;c++)
      cout<<a[r][0]<<'\t'<<a[r][1]<<'\t'<<a[r][2]<<endl;
   }
 for(r=0,sum=0;r<4;r++)
  {
   for(c=0,sum=0;c<3;c++)
     sum+=a[r][c];
   cout<<"\n Sum of row "<<r+1<<" is "<<sum;
  }

getch();
}
