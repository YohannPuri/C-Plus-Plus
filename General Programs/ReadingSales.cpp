// WAP to read sales of 5 salesmen for 12 months and print total sales
#include<iostream.h>
#include<conio.h>
#include<stdio.h>GrA
main()
{
clrscr();
 int a[5][12],c,sum=0,totsum,tot[5];
 char yorn;
 cout<<endl<<"The maximum number of salesmen is 5 ";
 for(int r=0;r<5;r++)
  {
   cout<<"\n\nEnter 12 month sales of salesman "<<r+1<<"\n\n\n";
   for(c=0,sum=0;c<12;c++)
    {
     cout<<"\tEnter sales ";
     cin>>a[r][c];
     sum+=a[r][c];
    }
   tot[r]=sum;
   cout<<"The total sales of salesman "<<r+1<<" is "<<sum;
   totsum+=sum;
   if(r==4)
    break;
   cout<<"\n Do you wish to continue to next salesman(Y/N) ";
   cin>>yorn;
   if(yorn=='y')
     clrscr();
   else
   {
    break;
   }
  }
  cout<<"\n\n The total sum of all salesmen is "<<totsum;
 sum:
  cout<<"\n\n Do you wish to see the sum of a salesman?(Y/N) ";
  cin>>yorn;
  if(yorn=='y')
  {
   clrscr();
   cout<<"\nEnter salesman number ";
   cin>>c;
   cout<<"\n\n The sales of this salesman is "<<tot[c-1];
  }
  else
   goto end;

  goto sum;

end:
 cout<<"\nThank You!";
getch();
}
