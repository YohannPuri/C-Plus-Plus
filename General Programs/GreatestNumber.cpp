/*


*/


#include <iostream.h>
#include <conio.h>
main()
{
clrscr();
 int a,b,c;
 cout<<"\n\n\n\n Enter 1st Number";
 cin>>a;
 cout<<"\n Enter 2nd Number";
 cin>>b;
 cout<<"\n Enter 3rd Number";
 cin>>c;
 if(a>b&&a>c)
  cout<<a<<" is the largest number";
 else if(b>a&&b>c)
  cout<<b<<" is the largest number";
 else
  cout<<c<<" is the largest number";
getch();
}
