                                            *                                                                                                                   
	                             *	    *
	                     *       *	    *
	           *         *       *	    *
	  *        *         *       *     *





#include<iostream.h>
#include<conio.h>
main()
{
 clrscr();
 int n;
 cout<<"\n Enter no.of rows  ";
 cin>>n;
 for(int r=1;r<=n;r++)
 {
  for(int sp=n-1;sp>=r;sp--)
   cout<<' ';
    for(int c=1;c<=r;c++)
     cout<<'*';
  cout<<endl;
 }
  getch();
}
