//WAP to check if two matrix are equal
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
 int a[4][3],b[4][3],r,c;


    //Fetching the Matrix

 for(r=0;r<4;r++)
  {
   cout<<"\nEnter the values in first matrice for row "<<r+1<<endl;
   for(c=0;c<3;c++)
    {
     cout<<"Enter value for column "<<c+1<<" ";
     cin>>a[r][c];
    }
   cout<<"------------------------------------";
  }
clrscr();
 for(r=0;r<4;r++)
  {
   cout<<"\nEnter the values in second matrix for row "<<r+1<<endl;
   for(c=0;c<3;c++)
    {
     cout<<"Enter value for column "<<c+1<<" ";
     cin>>b[r][c];
    }
   cout<<"------------------------------------";
  }
clrscr();


  //Printing first Matrix

 cout<<"\n Matrix 1 entered is "<<endl<<endl;
  for(int j=0;j<4;j++)
   {
    for(int k=0;k<1;k++)
      cout<<a[j][k]<<'\t'<<a[j][1]<<'\t'<<a[j][2]<<endl;
   }


  //Printing second matrix

  cout<<"\n Matrix 2 entered is "<<endl<<endl;
  for(int l=0;l<4;l++)
   {
    for(int m=0;m<1;m++)
      cout<<b[l][0]<<'\t'<<b[l][1]<<'\t'<<b[l][2]<<endl;
   }

 //Checking Equality

 for(r=0,l=0;r<4;r++)
  {
   for(c=0;c<3;c++)
    {
     if(a[r][c]!=b[r][c])
      l++;
    }
  }
 if(l==0)
  cout<<"\n\n The matrix are equal";
 else
  cout<<"\n\n The matrix are unequal";


getch();
}
