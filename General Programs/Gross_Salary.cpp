#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
 float sal, hra, gross;
 char city;
 float ta,da;
 cout<<"\n\n\t Enter basic salary ";
 cin>>sal;
 cout<<"\n\n\t Enter City ";
 cin>>city;
  if (sal>=10000)
   {
    da=(50.0*sal)/100.0;
    cout<<"\n\n The Dearness allowance is"<<da;
   }
  else if (sal>=8000 && sal<10000)
   {
    da=(40.0*sal)/100.0;
    cout<<"\n\n The Dearness allowance is"<<da;
   }
  else if (sal>=5000 && sal<8000)
   {
    da=(40.0*sal)/100.0;
    cout<<"\n\n The Dearness allowance is"<<da;
   }
 ta=(10.0*sal)/100.0;
 cout<<"\n\n The travel allowance is "<<ta;
 if (city=='m')
  hra=1000;
 else
  hra=500;

 gross=sal+da+ta+hra;
 cout<<"\n\n The gross salary is "<<gross;
 getch();
}
