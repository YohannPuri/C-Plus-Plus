/* 
	Copyright (c) 2012. Yohann Puri.

	This classroom management system was built as part of a 
	project during grade 12 at Mayoor School, Ajmer, Rajasthan, India
	The task given was to build anything using file handling code.
*/




//——————————————————————— Adding the necessary Header files————————————————————————



#include<iostream.h>		// Helps perform input and output operations


/*

QUICK NOTE on iostream.h
This is a non standard header and does not exist on all platforms.
The line #include<iostream> can be used when the platform is changed.

*/


#include<conio.h>				// For Console Input Output
#include<stdio.h>				// For input - output. Uses streams to operate with physical devices
#include<graphics.h>				// Provides access to a simple graphics library to draw basic shapes
#include<fstream.h>				// Input - Output stream class to operate on files and facilitate file handling
#include<string.h>				// Defines several functions to manipulate strings
#include<stdlib.h>				// Defines general purpose functions
#include<process.h>				// Contains declarations and macros used in working with threads and processes.
#include<dos.h>					// Contains functions for handling 
						// interrupts, sound, date, time, etc.

// QUICK NOTE - The dos.h header file is Borland specific


//—————————————————————— STRUCTURE AND CLASS DECLARATIONS ——————————————————————

struct Current
{
 char UserID[20];
 int TestOnFile;
}CU;


class UserDetails
{
 char Username[20];
 char Password[20];
 char Access;
 char Name[20];
 int StuId;
 public:
 int Login();
 void SearchStudent();
 void LoginCreator();
 void LoginDeletor();
 void LoginEditor();
 void ShowData();
}LD,LD1;


class Test
{
 char Ques[200];
 char Ans[50];

 public:
  void TestCreator();
  void TestEditor();
  void TestDeletor();
  void TakeTest();
}A;





class Result
{
public:
 char User[20];
 int TstNo;
 int Marks;

 void display();
}B;


//—————————————————————— FUNCTION DECLARATIONS ——————————————————————


int Calculate();

/*

	This is the function that is called to calculate the number of tests
	on file. It first calculates the number of questions and then divides
	that by 10 since there are 10 questions on each test.

*/



void TeacherMenu();			

/*

 	This is the function that is called if a teacher logs in.
 	It supplies the menu that teachers see.


*/

void StudentMenu();

/*

 	This is the function that is called if a student logs in.
 	It supplies the menu that students see.


*/


//—————————————————————— Main Function ——————————————————————


void main()
{
 int gd=DETECT,gm=DETECT;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 setbkcolor(BLUE);
 settextstyle(2,0,7);
 setcolor(2);
 outtextxy(10,50,"WELCOME TO OUR CLASS TEST MANAGEMENT SYSTEM");
 outtextxy(10,150,"MADE BY : ");
 outtextxy(10,180,"YOHANN PURI");
 getch();
 closegraph();
 clrscr();
 int DECIDE;
 DECIDE=LD.Login();
 if(DECIDE==2)
  TeacherMenu();
 else
  StudentMenu();
 getch();
}


/* 
Login is the function called to display the login screen
and let the user type in his username/password
If incorrect or not found the program could not exit the login
function and hence in essence wont allow the program to move
forward.
*/


int UserDetails::Login()
{

 ifstream fin;
 fin.open("C:\\TC\\UserPass.txt",ios::in);
 int RESULT=0,n=0;
// *************************************

fail:
clrscr();
strcpy(LD.Username,"");
n=0;
    int gdriver=DETECT,gmode=DETECT;
       initgraph(&gdriver,&gmode, "C:\\TC\\BGI");

 gotoxy(15,10);
 cout<<"USERNAME";
 gotoxy(15,12);
 cout<<"PASSWORD";
 rectangle(200,140,400,160);
 rectangle(200,173,400,193);

//***************************************
 gotoxy(27,10);
 gets(LD.Username);
 gotoxy(27,12);
 gets(LD.Password);

//**************************************
 fin.seekg(0,ios::beg);
 while(!fin.eof())
 {
  fin.read((char*)&LD1,sizeof(LD1));
  if(strcmp(LD.Username,"Teacher")==0)
  {
   RESULT=2;
   goto success;
  }
  else if(strcmp(LD.Username,LD1.Username)==0)
   {
    if(strcmp(LD.Password,LD1.Password)==0)
      {
       n=1;
       if(LD1.Access=='t' || LD1.Access=='T')
	 {
	  RESULT=2;
	  goto success;
	 }
       else
	 RESULT=1;
	 goto success;
      }
    else
      {
       gotoxy(27,17);
       cout<<"Username exits but Password incorrect!";
       getch();
       goto fail;
      }
   }
 }
  if(n==0)
  {
   RESULT=0;
   gotoxy(27,17);
   cout<<"Username and password do not exist!";
   getch();
   goto fail;
  }

/* Loading screen added for aesthetic appearance */

success:
 gotoxy(27,17);
 cout<<"PLEASE WAIT WHILE THE DATABASE LOADS ";
 rectangle(150,300,500,320);
 for(int i=150;i<=500;i++)
 {
  line(i,300,i,320);
  delay(10);
 }
 ofstream fout;
 fout.open("C:\\TC\\CurrentUser.dat",ios::out);
 strcpy(CU.UserID,LD.Username);
 CU.TestOnFile=Calculate();
 fout.write((char*)&CU,sizeof(CU));
 fout.close();
 fin.close();
 cleardevice();
 closegraph();

 return RESULT;
}


//LOGIN FUNCTION ENDS LOGIN FUNCTION ENDS LOGIN FUNCTION ENDS LOGIN FUNCTION ENDS


//TEST CREATOR STARTS.TEST CREATOR STARTS.TEST CREATOR STARTS.TEST CREATOR STARTS.TEST CREATOR STARTS.

/* The following function was created as a method to allow
a teacher to build a test form that a student could then take
*/

void Test::TestCreator()
{
 closegraph();
 clrscr();
 int flag;
 ofstream fout;
 fout.open("C:\\TC\\TestDir.dat",ios::out | ios::app);

   for(flag=0;flag<10;flag++)
    {
     cout<<"\nEnter question "<<flag+1<<endl;
      gets(A.Ques);

      cout<<"\nEnter answer "<<flag+1<<endl;

      gets(A.Ans);


     fout.write((char*)&A,sizeof(A));
    }
 fout.close();
 ofstream fout2;
 fout2.open("CurrentUser.dat",ios::out);
 CU.TestOnFile=Calculate();
 fout2.write((char*)&CU,sizeof(CU));
 fout2.close();
 cout<<"No of tests is now "<<CU.TestOnFile;
 cout<<"\nTest has been added!";
 cout<<"\n\nPress Enter to return";
 getch();
}

//TEST CREATOR ENDS.TEST CREATOR ENDS.TEST CREATOR ENDS.TEST CREATOR ENDS.TEST CREATOR ENDS.TEST CREATOR ENDS.

/* The following function allowed a teacher to edit a test form
already created
*/

//TEST EDITOR STARTS.TEST EDITOR STARTS.TEST EDITOR STARTS.TEST EDITOR STARTS.TEST EDITOR STARTS.TEST EDITOR STARTS.TEST EDITOR STARTS.TEST EDITOR STARTS.

void Test::TestEditor()
{
 closegraph();
 int flag=0,y=0;
 ifstream fin;
 fin.open("C:\\TC\\CurrentUser.dat",ios::in);
 fin.read((char*)&CU,sizeof(CU));
 cout<<"No of tests on file is "<<CU.TestOnFile;
 fin.close();

 ofstream fout;
 fout.open("C:\\TC\\TestDir.dat",ios::ate);
 ifstream fin2;
 fin2.open("C:\\TC\\TestDir.dat",ios::in);
back2:
 cout<<endl<<"Enter the test number you would like edited";
 cin>>y;
 if(y>CU.TestOnFile)
  {
   cout<<"\n\tThat test does not exist....";
   cout<<"\n\tPress Enter to go back ";
   getch();
   clrscr();
   goto back2;
  }
 y=y-1;
 y=y*10;

 fin2.seekg(y*sizeof(A),ios::beg);
   for(flag=0;flag<10;flag++)
    {
     fin2.read((char*)&A,sizeof(A));
     cout<<A.Ques<<endl<<A.Ans<<endl;
    }

 cout<<"Enter the question number which you would like to edit";
 cin>>flag;
 y+=flag;
 y-=1;
 fout.seekp(y*sizeof(A),ios::beg);
 cout<<"Enter new question";
 gets(A.Ques);
 cout<<"Enter new answer";
 gets(A.Ans);
 fout.write((char*)&A,sizeof(A));
 fout.close();
 fin2.close();

 cout<<"Editing Done!"<<endl;
 cout<<"\nPress Enter to exit";
 getch();
}
//TEST EDITOR ENDS.TEST EDITOR ENDS.TEST EDITOR ENDS.TEST EDITOR ENDS.TEST EDITOR ENDS.TEST EDITOR ENDS.TEST EDITOR ENDS.

/* The following function allowed a teacher to delete a test form
already created
*/

//TEST DELETOR STARTS.TEST DELETOR STARTS.TEST DELETOR STARTS.TEST DELETOR STARTS.TEST DELETOR STARTS.TEST DELETOR STARTS.TEST DELETOR STARTS.TEST DELETOR STARTS.
void Test::TestDeletor()
{
 closegraph();
 clrscr();

 int flag,y;
 char yorn;
 ifstream fin;
 ofstream fout;
 fin.open("C:\\TC\\CurrentUser.dat",ios::in);
 fin.read((char*)&CU,sizeof(CU));
 cout<<"\nNo of tests on file is "<<CU.TestOnFile;
 fin.close();
 if(CU.TestOnFile==0)
  {
   cout<<"\n\nNo Tests to delete!";
   cout<<"\n\n Press Enter to return!";
   getch();
   return;
  }


 fin.open("C:\\TC\\TestDir.dat",ios::in);
 fout.open("C:\\TC\\temp.dat",ios::out);
 back:
 cout<<"\n\n\n\tEnter the test number you would like to delete ";
 cin>>y;
 if(y>CU.TestOnFile)
  {
   cout<<"\n\tThat test does not exist....";
   cout<<"\n\tPress Enter to go back ";
   getch();
   goto back;
  }
 y=y-1;
 y=y*10;
 for(flag=0;flag<y;flag++)
 {
    fin.read((char*)&A,sizeof(A));
    fout.write((char*)&A,sizeof(A));
 }
 clrscr();
 for(flag=0;flag<10;flag++)
    {
     fin.read((char*)&A,sizeof(A));
     cout<<"Q"<<flag+1<<".   "<<A.Ques<<endl<<"A"<<flag+1<<".   "<<A.Ans<<endl;
    }
 cout<<"\n\nAre you sure you want to delete this test?(y/n) ";
 cin>>yorn;
 if(yorn=='y' || yorn=='Y')
 {
  while(!fin.eof())
   {
    fin.read((char*)&A,sizeof(A));
    fout.write((char*)&A,sizeof(A));
   }
    remove("TestDir.dat");
   rename("temp.dat","TestDir.dat");
   cout<<"\nTEST DELETED!";
 }
 else
  cout<<"\n\nTEST NOT DELETED!";

 fout.close();
 fin.close();
 ofstream fout2;
 fout2.open("C:\\TC\\CurrentUser.dat",ios::out);
 CU.TestOnFile=Calculate();
 fout2.write((char*)&CU,sizeof(CU));
 fout2.close();
 cout<<"\n\nNo of tests is now "<<CU.TestOnFile;
 cout<<"\n\nPress Enter to return";
 getch();

}
//TEST DELETOR ENDS.TEST DELETOR ENDS.TEST DELETOR ENDS.TEST DELETOR ENDS.TEST DELETOR ENDS.TEST DELETOR ENDS.TEST DELETOR ENDS.TEST DELETOR ENDS.

/*
The following function allowed a teacher to see a students data
entered in the system
*/

//SHOW DATA STARTS>SHOW DATA STARTS>SHOW DATA STARTS>SHOW DATA STARTS>SHOW DATA STARTS>SHOW DATA STARTS>
void UserDetails::ShowData()
{

 closegraph();
 clrscr();
 char str[20];
 int found=0;
 cout<<"Enter students Username ";
 gets(str);
 ifstream fin;
 fin.open("C:\\TC\\UserPass.txt",ios::in);
 while(!found && fin.read((char*)&LD,sizeof(LD)))
 {
  if(strcmp(str,LD.Username)==0)
   {
    cout<<"\n\n\t Here are the details.... ";
    cout<<"\n\t User ID is "<<LD.Username;
    cout<<"\n\t Password is "<<LD.Password;
    cout<<"\n\t Name is "<<LD.Name;
    cout<<"\n\t Student ID is "<<LD.StuId;
    cout<<"\n\t Access is "<<LD.Access;
    cout<<"\n\n\t Press Enter to go to menu";
    getch();
    found=1;
    break;
   }
 }
 if(found==0)
 {
  cout<<"\n\n\n\t SORRY USERNAME DOES NOT EXIST....";
  cout<<"\n\t PRESS ANY KEY TO RETURN";
  getch();
 }
}
//SHOW DATA ENDS. SHOW DATA ENDS.SHOW DATA ENDS.SHOW DATA ENDS.SHOW DATA ENDS.SHOW DATA ENDS.SHOW DATA ENDS.SHOW DATA ENDS.SHOW DATA ENDS.SHOW DATA ENDS.SHOW DATA ENDS.

/*
The following function allowed a teacher to search for a 
students data entered in the system
*/

//SEARCH FUNCTION STARTS.SEARCH FUNCTION STARTS.SEARCH FUNCTION STARTS.SEARCH FUNCTION STARTS.SEARCH FUNCTION STARTS.SEARCH FUNCTION STARTS.SEARCH FUNCTION STARTS.SEARCH FUNCTION STARTS.SEARCH FUNCTION STARTS.

void UserDetails::SearchStudent()
{
 closegraph();
 clrscr();
 int gd=DETECT,gm=DETECT;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 char str[20];
 cout<<"Enter students Username ";
 gets(str);
 ifstream fin2;
 fin2.open("C:\\TC\\RandomResult.txt",ios::in);
 line(50,50,50,400);
 line(50,400,600,400);
 line(45,55,50,50);
 line(55,55,50,50);
 line(595,395,600,400);
 line(595,405,600,400);
 int j=400;
 int z=24;
 for(int l=1;l<=10;l++)
 {
  gotoxy(4,z);
  cout<<l;
  z-=2;
 }
 gotoxy(0,0);
 for(int i=0;i<10;i++)
 {
  line(50,j,55,j);
  j-=35;
 }
 i=50;
 j=400;
 int k=60;
 int up=7;
 //Printing test number label
gotoxy(1,1);
cout<<"Test No";

 while(!fin2.eof())
 {
   fin2.read((char*)&B,sizeof(B));
   if(strcmp(B.User,str)==0)
  {
    if(B.Marks>10)
     break;
   B.Marks-=1;
   B.Marks*=35;
   B.Marks=400-B.Marks;
   line(i,j,k,B.Marks);
   i=k;
   k+=23;
   j=B.Marks;
   l++;
   gotoxy(up,3);
   cout<<B.TstNo+2;
   up+=3;
  }
 }
 fin2.close();
 getch();
}

//SERARCH FUNCTION ENDS.SERARCH FUNCTION ENDS.SERARCH FUNCTION ENDS.SERARCH FUNCTION ENDS.SERARCH FUNCTION ENDS.SERARCH FUNCTION ENDS.SERARCH FUNCTION ENDS.SERARCH FUNCTION ENDS.SERARCH FUNCTION ENDS.SERARCH FUNCTION ENDS.SERARCH FUNCTION ENDS.SERARCH FUNCTION ENDS.SERARCH FUNCTION ENDS.

/*
The following function allowed an administrator to create a 
login id for a teacher or student
*/


//LOGIN CREATOR STARTS.LOGIN CREATOR STARTS.LOGIN CREATOR STARTS.LOGIN CREATOR STARTS.LOGIN CREATOR STARTS.LOGIN CREATOR STARTS.LOGIN CREATOR STARTS.LOGIN CREATOR STARTS.LOGIN CREATOR STARTS.LOGIN CREATOR STARTS.


 void UserDetails::LoginCreator()
{
closegraph();
clrscr();
 ofstream fout;
 ifstream fin;
Again:
 cout<<"\n\nEnter desired username ";
 gets(LD.Username);
 fout.open("C:\\TC\\UserPass.txt",ios::app);
 fin.open("C:\\TC\\UserPass.txt",ios::in);
 while(!fin.eof())
 {
  fin.read((char*)&LD1,sizeof(LD1));
  if(strcmp(LD.Username,LD1.Username)==0)
   {
    clrscr();
    cout<<"\n\nUsername Already exists! Choose Another";
    fout.close();
    fin.close();
    goto Again;
   }
 }
 cout<<"\nEnter desired password ";
   gets(LD.Password);
 cout<<"\nEnter student name ";
   gets(LD.Name);
 cout<<"\nEnter Student ID ";
   cin>>LD.StuId;
 cout<<"\nAccess Level(t/s) ";
   cin>>LD.Access;

 fout.write((char*)&LD,sizeof(LD));
 fout.close();

 cout<<"\n\nLogin Created! Press Any key to return!";
 getch();

}

//LOGIN CREATOR ENDS.LOGIN CREATOR ENDS.LOGIN CREATOR ENDS.LOGIN CREATOR ENDS.LOGIN CREATOR ENDS.LOGIN CREATOR ENDS.LOGIN CREATOR ENDS.LOGIN CREATOR ENDS.LOGIN CREATOR ENDS.

/*
The following function allowed an administrator to edit a 
login id for a teacher or student
*/

//LOGIN EDITOR STARTS.LOGIN EDITOR STARTS.LOGIN EDITOR STARTS.LOGIN EDITOR STARTS.LOGIN EDITOR STARTS.LOGIN EDITOR STARTS.LOGIN EDITOR STARTS.LOGIN EDITOR STARTS.LOGIN EDITOR STARTS.


void UserDetails::LoginEditor()
{
 int m=0;
 char ch;
 ifstream fin;
 ofstream fout;
 fout.open("C:\\TC\\UserPass.txt",ios::ate);
 fin.open("C:\\TC\\UserPass.txt",ios::in);
Again3:
 closegraph();
 clrscr();
 cout<<"Enter the username you would like edited ";
 gets(LD.Username);
 long tell;
 while(!fin.eof())
 {
  tell=fin.tellg();
  fin.read((char*)&LD1,sizeof(LD1));
  if(strcmp(LD.Username,LD1.Username)==0)
   {
    cout<<"\n\nEnter the Password ";
    gets(LD.Password);
    if(strcmp(LD.Password,LD1.Password)==0)
      {
       m++;
       fout.seekp(tell);
       cout<<"\nEnter new password ";
       gets(LD.Password);
       cout<<"\nEnter new name ";
       gets(LD.Name);
       cout<<"\nEnter new Student ID ";
       cin>>LD.StuId;
       LD.Access=LD1.Access;
       fout.write((char*)&LD,sizeof(LD));
       break;
      }
     else
      {
       cout<<"\nPASSWORD INCORRECT!";
       goto Again3;
      }
    }
 }
   if(m==0)
   {
    cout<<"USERNAME NOT FOUND";
    goto Again3;
   }
 clrscr();
 cout<<"After editing details are : "<<endl;
 cout<<"USERNAME - "<<LD.Username<<endl
 <<"PASSWORD - "<<LD.Password<<endl
 <<"NAME - "<<LD.Name<<endl
 <<"STUDENT ID - "<<LD.StuId;
 cout<<"\nEDITING COMPLETE!";
 cout<<"\nPress Enter to exit";
 getch();

}
//LOGIN EDITOR ENDS.LOGIN EDITOR ENDS.LOGIN EDITOR ENDS.LOGIN EDITOR ENDS.LOGIN EDITOR ENDS.LOGIN EDITOR ENDS.LOGIN EDITOR ENDS.LOGIN EDITOR ENDS.LOGIN EDITOR ENDS.

/*
The following function allowed an administrator to delete a 
login id for a teacher or student
*/

//LOGIN DELETOR BEGINS.LOGIN DELETOR BEGINS.LOGIN DELETOR BEGINS.LOGIN DELETOR BEGINS.LOGIN DELETOR BEGINS.LOGIN DELETOR BEGINS.LOGIN DELETOR BEGINS.LOGIN DELETOR BEGINS.LOGIN DELETOR BEGINS.


void UserDetails::LoginDeletor()
{
 closegraph();
 clrscr();
 ofstream fout;
 ifstream fin;
 fin.open("C:\\TC\\UserPass.txt",ios::in);
Again2:
 fin.seekg(0,ios::beg);
 fout.open("C:\\TC\\temp3.dat",ios::out| ios::trunc);
 cout<<"\n\nEnter the username you would like to delete ";
 gets(LD.Username);
 while(!fin.eof())
 {
  fin.read((char*)&LD1,sizeof(LD1));
  if(strcmp(LD.Username,LD1.Username)==0)
   {
    cout<<"\n\nEnter the Password ";
    gets(LD.Password);
    if(strcmp(LD.Password,LD1.Password)==0)
      {
       cout<<"\n\nRECORD DELTED!";
       break;
      }
    else
      {
       cout<<"\n\nIncorrect Password! Try Again!";
       fout.close();
       goto Again2;
      }
   }
  else
    fout.write((char*)&LD1,sizeof(LD1));
 }
 fout.close();
 fin.close();
 remove("C:\\TC\\UserPass.txt");
 rename("temp3.dat","UserPass.txt");
 cout<<"\n\nPress Enter to return";
 getch();
}

//LOGIN DELETE ENDS.LOGIN DELETE ENDS.LOGIN DELETE ENDS.LOGIN DELETE ENDS.LOGIN DELETE ENDS.LOGIN DELETE ENDS.LOGIN DELETE ENDS.LOGIN DELETE ENDS.LOGIN DELETE ENDS.

/*
The following function allowed students to take a test
*/

//TEST TAKER BEGINS.TEST TAKER BEGINS.TEST TAKER BEGINS.TEST TAKER BEGINS.TEST TAKER BEGINS.TEST TAKER BEGINS.TEST TAKER BEGINS.TEST TAKER BEGINS.TEST TAKER BEGINS.

void Test::TakeTest()
{
 char UserAns[50];
 int choice,Correct=0,Wrong=0;
 ifstream fin;
 fin.open("C:\\TC\\CurrentUser.dat",ios::in);
 fin.read((char*)&CU,sizeof(CU));
back3:
 cout<<"No of tests on file is "<<CU.TestOnFile;
 fin.close();

 cout<<"\n\nSelect Test number ";
 cin>>choice;
 if(choice>CU.TestOnFile)
  {
   cout<<"\n\tThat test does not exist....";
   cout<<"\n\tPress Enter to go back ";
   getch();
   clrscr();
   goto back3;
  }
 choice=choice-1;
 choice=choice*10;
 fin.open("C:\\TC\\TestDir.dat",ios::in);
 fin.seekg(choice*sizeof(A),ios::beg);
 for(int flag=0;flag<10;flag++)
 {
  fin.read((char*)&A,sizeof(A));
  cout<<A.Ques;
  cout<<endl<<"Answer : ";
  gets(UserAns);
  if(strcmp(UserAns,A.Ans))
    {
     cout<<"\nWRONG!\n";
     Wrong++;
    }
  else
    {
     cout<<"\nCORRECT!";
     Correct++;
    }
  cout<<endl;
 }
 choice/=10;
 choice-=1;
 fin.close();
 ofstream fout;
 fout.open("C:\\TC\\RandomResult.txt",ios::out | ios::app);
 strcpy(B.User,CU.UserID);
 B.TstNo=choice;
 B.Marks=Correct;
 fout.write((char*)&B,sizeof(B));
 fout.close();
 cout<<"\n\nYou Scored "<<Correct<<" on 10";
 getch();
}

//TEST TAKER FUNCTION ENDS.TEST TAKER FUNCTION ENDS.TEST TAKER FUNCTION ENDS.TEST TAKER FUNCTION ENDS.TEST TAKER FUNCTION ENDS.TEST TAKER FUNCTION ENDS.TEST TAKER FUNCTION ENDS.TEST TAKER FUNCTION ENDS.

/*
The following function allowed students to see their results
graphed out on 2 axes
*/

//DISPLAY FUNCTION BEGINS.DISPLAY FUNCTION BEGINS.DISPLAY FUNCTION BEGINS.DISPLAY FUNCTION BEGINS.DISPLAY FUNCTION BEGINS.DISPLAY FUNCTION BEGINS.DISPLAY FUNCTION BEGINS.DISPLAY FUNCTION BEGINS.DISPLAY FUNCTION BEGINS.DISPLAY FUNCTION BEGINS.DISPLAY FUNCTION BEGINS.

void Result::display()
{
 int gdriver=DETECT,gmode=DETECT;
 initgraph(&gdriver,&gmode, "C:\\TC\\BGI");
 ifstream fin;
 fin.open("C:\\TC\\CurrentUser.dat",ios::in);
 fin.read((char*)&CU,sizeof(CU));
 ifstream fin2;
 fin2.open("C:\\TC\\RandomResult.txt",ios::in);
//Drawing the graph
 line(50,50,50,400);
 line(50,400,600,400);
 line(45,55,50,50);
 line(55,55,50,50);
 line(595,395,600,400);
 line(595,405,600,400);
 int j=400;
 int z=24;

//Printing the numbers on the graph
 for(int l=1;l<=10;l++)
 {
  gotoxy(4,z);
  cout<<l;
  z-=2;
 }
 gotoxy(0,0);

//Printing dashes on graph
 for(int i=0;i<10;i++)
 {
  line(50,j,55,j);
  j-=35;
 }
//Printing test number label
gotoxy(1,1);
cout<<"Test No";
//Resetting values
 i=50;
 j=400;
 int k=60;
 l=10;
 int up=8;
//Printing marks on the graph
 while(!fin2.eof())
 {
  fin2.read((char*)&B,sizeof(B));
  if(strcmp(CU.UserID,B.User)==0)
  {
   if(B.Marks>10)
     break;
   if(B.Marks!=0)
    B.Marks-=1;
   B.Marks*=35;
   B.Marks=400-B.Marks;
   line(i,j,k,B.Marks);
   i=k;
   k+=23;
   j=B.Marks;
   l++;
   gotoxy(up,3);
   cout<<B.TstNo+2;
   up+=3;
  }
 }
 fin2.close();
 getch();
 closegraph();
}

//CALCULATE FUNCTION BEGINS
int Calculate()
{
 int count=0;
 ifstream fin;
 fin.open("C:\\TC\\TestDir.dat",ios::in);
 while(!fin.eof())			// While the end of File character is not reached
 {
  fin.read((char*)&A,sizeof(A));
  count++;
 }
 
fin.close();
 count=count/10;
 return count;
}

//CALCULATE FUNCTION ENDS.
//------------------------------------
//---------------------------------------------------
//==================================================

void TeacherMenu();

/*
These functions helped display and allow navigation in
menu screens
*/

void TeacherMenu()
{
 int choice,ch1,ch2,ch3;
 start:
 closegraph();
 clrscr();
 cout<<"\n\n\n\t\t\t1. Test";
 cout<<"\n\t\t\t2. Display Result";
 cout<<"\n\t\t\t3. Student Login";
 cout<<"\n\t\t\t4. Exit";
 cout<<"\n\t\t\tEnter Your Choice - ";
 cin>>choice;

 if(choice==1)
  {
    no1:
    clrscr();
    cout<<"\n\n\n\t\t\t1. Create Test";
    cout<<"\n\t\t\t2. Test Editor";
    cout<<"\n\t\t\t3. Delete Test";
    cout<<"\n\t\t\t4. Back";
    cout<<"\n\n\t\t\t Enter Your Choice - ";
    cin>>ch1;

    if(ch1==1)
    {
     A.TestCreator();
    }
    else if(ch1==2)
    {
     A.TestEditor();
    }
    else if(ch1==3)
    {
     A.TestDeletor();
    }
    else if(ch1==4)
    {
     goto start;
    }
    else
    {
     cout<<"\n\n\n\t\t\t Wrong Character Entered...Retry!";
     getch();
     goto no1;
    }

    goto start;
  }


  else if(choice==2)
  {
   no2:
   clrscr();
   cout<<"\n\n\t\t\t1. Search";
   cout<<"\n\t\t\t2. Back";
   cout<<"\n\t\t\t Enter Your Choice - ";
   cin>>ch2;

   if(ch2==1)
     LD.SearchStudent();
   else if(ch2==2)
     goto start;
   else
    {
     cout<<"\n\n\n\t\t\t Wrong Character Entered...Retry!";
     getch();
     goto no2;
    }

    goto start;
  }


  else if(choice==3)
  {
   no3:
   clrscr();
   cout<<"\n\n\n\t\t\t1. Create Student Login";
   cout<<"\n\t\t\t2. Delete Student Login";
   cout<<"\n\t\t\t3. Modify Student Login";
   cout<<"\n\t\t\t4. Show Login Data";
   cout<<"\n\t\t\t5. Back";
   cout<<"\n\n\t\t\t Enter Your Choice - ";
   cin>>ch3;

    if(ch3==1)
      LD.LoginCreator();
    else if(ch3==2)
      LD.LoginDeletor();
    else if(ch3==3)
      LD.LoginEditor();
    else if(ch3==4)
      LD.ShowData();
    else if(ch3==5)
      goto start;
    else
    {
     cout<<"\n\n\t\t\tWrong Character Entered...Retry!";
     getch();
     goto no3;
    }
    goto no3;

 }

 else if(choice==4)
    exit(0);
 else
   {
    cout<<"\n\n\t\t\tWrong Character Entered";
    getch();
    goto start;
   }

}

//------------------------------------------------
//------------------------------------------------
//------------------------------------------------

void StudentMenu();

void StudentMenu()
{
   int choice1;
   menu:
   closegraph();
   clrscr();
   cout<<"\n\n\n\t\t\t1. Test";
   cout<<"\n\t\t\t2. Display Result";
   cout<<"\n\t\t\t3. Exit";
   cout<<"\n\n\t\t\t Enter Your Choice - ";
   cin>>choice1;

   if(choice1==1)
     A.TakeTest();
   else if(choice1==2)
     {
      B.display();
      getch();
     }
   else if(choice1==3)
      exit(0);
   else
    {
     cout<<"\n\n\t\t\tWrong Character Entered...Retry!";
     getch();
     goto menu;
    }
  getch();
  goto menu;
}