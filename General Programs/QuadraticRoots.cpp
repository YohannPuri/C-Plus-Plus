/*


*/


#include<conio.h>
#include<iostream.h>
#include<math.h>
main()
{
 clrscr();
 float r1, r2, des, desrt;
 int a,b,c;
 cout<<"\n\n\nEnter value of a in ax*x+bx+c ";
 cin>>a;
 cout<<"\n\nEnter value of b in ax*x+bx+c ";
 cin>>b;
 cout<<"\n\nEnter value of c in ax*x+bx+c ";
 cin>>c;
 des=(b*b)-(4*a*c);
 if(des>=0)
 {
  desrt=sqrt(des);
  r1=(-b+desrt)/(2*a);
  r2=(-b-desrt)/(2*a);
  cout<<"\n\n\nRoot 1 is "<<r1;
  cout<<"\n\nRoot 2 is "<<r2;
 }
 else if (des<0)
 {
  des=des*(-1);
  desrt=sqrt(des);
  r1=(-b+desrt)/(2*a);
  r2=(-b-desrt)/(2*a);
  cout<<"\n\n\nRoot 1 is "<<r1;
  cout<<"\n\nRoot 2 is "<<r2;
 }

getch();
}
