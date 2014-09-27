/*




*/
#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
 int a;
 cout<<"Enter a ";
 cin>>a;
 switch(a)
 {
  case 1:
    cout<<"The day is Sunday";
  break;
   case 2:
    cout<<"The day is Monday";
  break;
   case 3:
    cout<<"The day is Tuesday";
  break;
   case 4:
    cout<<"The day is Wednesday";
  break;
   case 5:
    cout<<"The day is Thursday"; 
  break;
   case 6:
    cout<<"The day is Friday";
  break;
   case 7:
    cout<<"The day is Saturday";
  break;
  default:
   cout<<"Wrong Choice";
  }
getch();
}
