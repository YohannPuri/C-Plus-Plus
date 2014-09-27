	    A
            A 	B
            A	B	C
            A	B	C	D
            A	B	C	D	E




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

      for(int sp=n-1;sp>=r;sp--)
	  cout<<" ";
      cout<<"\n";
      for(int a=n-1;a>=r;a--)
       cout<<" ";

      for(int b=1;b<=r;b++)
	  cout<<"* ";
   }
 getch();
}
