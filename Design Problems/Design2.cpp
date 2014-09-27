	1
	2	3
	4	5	6
	7	8	9	10
	11      12       13	14	15




#include<iostream.h>
#include<conio.h>
main()
{
 clrscr();
 int n;
 cout<<"\n\n\n\n\nEnter the number of rows ";
 cin>>n;
 for (int r=1,flag=0;r<=n;r++)
   {
      for(int c=1;c<=r;c++)
      cout<<++flag;
    cout<<"\n\n";
   
   }
 getch();
}

