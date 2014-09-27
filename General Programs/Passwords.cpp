
// WAP that reads password and checks if it is correct
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
 char pass[20],actual[20]="yohannpuri";
 int i=0,flag=0;
 start:
 cout<<endl<<"Enter a Password ";
 for(i=0;i<20;i++)
  {
   pass[i]=getch();
   if(pass[i]=='\r')
    break;
   cout<<'*';
  }
 for(i=0;actual[i]!='\0';i++)
  {
  if(pass[i]!=actual[i])
   {
    cout<<endl<<"SORRY";
    flag++;
    cout<<endl<<"You have "<<3-flag<<" tries remaining";
    if(flag==3)
     goto end;
    else
     goto start;
   }
  }
 cout<<endl<<endl<<"OK!!";
end:
getch();
}
