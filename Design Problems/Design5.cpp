	     			 *
			     *	       *	
	  	    	 *       *	   *
 	          *          *        *          *


#include<iostream.h>
#include<conio.h>
main()
{
 clrscr();
 int n;
 cout<<"\n\n\tEnter n : ";
 cin>>n;
 for(int r=1;r<=n;r++)
 {
   for(int a=n-1;a>=r;a--)
     cout<<" ";
   for(int c=1;c<=r;c++)
     cout<<"* ";
 cout<<"\n";
 }

 getch();
}
