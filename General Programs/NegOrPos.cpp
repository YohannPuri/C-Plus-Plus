#include <iostream.h>
#include <conio.h>
main()
{
clrscr();
 int a;
 cout<<"\n\n Enter a number ";
 cin>>a;
 if(a>0)
 {
  cout<<"It is a positive number \n ";
  cout<<"Its double is "<<a*2;
 }
 else if(a<0)
 {
  cout<<"It is a negative number \n ";
  cout<<"Its cube is "<<a*a*a;
 }
 else
 cout<<"Invalid Entry";
getch();

}
