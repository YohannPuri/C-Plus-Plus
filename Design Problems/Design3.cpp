	1	
	2	2
	3	3	3
	4	4	4	4
	5	5	5	5	5



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
      cout<<r;
    cout<<"\n\n";

   }
 getch();
}

