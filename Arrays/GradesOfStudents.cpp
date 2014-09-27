//To calculate grades of students
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
main()
{
clrscr();
 int mark[4][3],avg[4];
 for(int r=0;r<4;r++)
  {
   cout<<"\nEnter marks of student "<<r+1<<endl;
   for(int c=0,sum=0;c<3;c++)
    {
     cout<<"\nEnter marks of test "<<c+1<<" out of 100 ";
     cin>>mark[r][c];
     sum+=mark[r][c];
    }
   avg[r]=sum/3;
   if(avg[r]>=90)
    cout<<"\nStudent "<<r+1<<" has got A grade ";
   else if(avg[r]<90 && avg[r]>=80)
    cout<<"\nStudent "<<r+1<<" has got B grade ";
   else
    cout<<"\nStudent "<<r+1<<" has got C grade ";
   cout<<"\n____________________________\n";
  }
getch();
}
