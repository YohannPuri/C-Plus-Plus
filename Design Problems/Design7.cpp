	     &	     &    	&	   &	     &
                 &        &          &         &
                      &          &          &
                            &          &
                                   &

#include<iostream.h>
#include<conio.h>
main()
{
 clrscr();
 int n;
 cout<<"\n\tEnter the no. of rows ";
 cin>>n;
 for(int r=1;r<=n;r++)
 {
  for(int sp=1;sp<r;sp++)
     cout<<' ';
   for(int c=n;c>=r;c--)
     cout<<"& ";
   cout<<"\n";
 }
 getch();
}
