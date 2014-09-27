#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
 int n;
 cout<<"\n\n Enter max value ";
 cin>>n;
 int i=1,j=3,sum;
 cout<<"\n\n" <<i<<"\t"<<j;
 while(i<=n && j<=n && sum<=n)
 {
  sum=i+j;
  cout<<"\t"<<sum;
  //swapping of i and j
  i=i+j;
  j=i-j;
  i=i-j;
  //swapping of sum and j
  j=j+sum;
  sum=j-sum;
  j=j-sum;
 }
 getch();
}
