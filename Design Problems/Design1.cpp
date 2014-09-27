/Ass6/1.WAP  using nested loops to produce the following designs:
   a)	*                                                                                                                   
	*	*
	*	*	*
	*	*	*	*
	*	*	*	*	*

#include<iostream.h>
#include<conio.h>
main()
{
 clrscr();
 int n;
 cout<<"\n\n\n\n\nEnter the number of rows ";
 cin>>n;
 for (int r=1;r<=n;r++)
   {
      for(int c=1;c<=r;c++)
      cout<<"*";
    cout<<"\n\n";
   
   }
 getch();
}
