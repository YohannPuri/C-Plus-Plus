#include <iostream.h>
#include <conio.h>
main()
{
clrscr();
 char i;
 cout<<"\n\n Enter a character ";
 cin>>i;
 if(i>='a'&&i<='k')
 { 
  cout<<++i<<",";
  cout<<++i<<",";
  cout<<++i<<",";
  cout<<++i<<",";
 }
 else
  cout<<" Wrong character inserted. Enter only between a and k";
getch();
}
