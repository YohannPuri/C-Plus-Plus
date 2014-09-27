	$	$	$	$          $
	$	$	$	$
	$	$	$
	$	$
	$




#include<iostream.h>
#include<conio.h>
main()
{
 clrscr();
 int n;
 cout<<"\n\t Enter no.of rows = ";
 cin>>n;
 for(int r=1;r<=n;r++)
 {
   for(int c=5;c>=r;c--)
     cout<<"$";

   cout<<"\n";
 }
 getch();
}
