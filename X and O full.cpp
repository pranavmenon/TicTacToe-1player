#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>

	// MAKING THE CROSS
	
void cross(char a,char b,char c,char d,char e,char f,char g,char h,char i, int ypos=wherey())  
{
	gotoxy(37,ypos++);
   cout<<char(179)<<"   "<<char(179);      
   gotoxy(35, ypos++);
   cout<<a<<" "<<char(179)<<" "<<b<<" "<<char(179)<<" "<<c;
   gotoxy(37,ypos++);
   cout<<char(179)<<"   "<<char(179);
   gotoxy(34,ypos++);
   cout<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196);
   gotoxy(37,ypos++);
   cout<<char(179)<<"   "<<char(179);
   gotoxy(35, ypos++);
   cout<<d<<" "<<char(179)<<" "<<e<<" "<<char(179)<<" "<<f;
   gotoxy(37,ypos++);
   cout<<char(179)<<"   "<<char(179);
   gotoxy(34,ypos++);
   cout<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196);
   gotoxy(37,ypos++);
   cout<<char(179)<<"   "<<char(179);
   gotoxy(35, ypos++);
   cout<<g<<" "<<char(179)<<" "<<h<<" "<<char(179)<<" "<<i;
   gotoxy(37,ypos++);
   cout<<char(179)<<"   "<<char(179);
}

	//INTRODUCTION


void intro()
{
	_setcursortype(_NOCURSOR);
   gotoxy(28, 7);
   sleep(2);
   textcolor(YELLOW);
   cprintf("%s%c%s", "A PRANAV M",238,"NON PRODUCTION"); sleep(4);
   clrscr();
   gotoxy(34, 9);
   cprintf("%s%c", "TIC", '\a');
   gotoxy(37,8); cout<< char(179);
   gotoxy(37, 9); cout<<char(179);
   sleep(1);
   cprintf("%s%c", "TAC", '\a');
   gotoxy(41,8); cout<< char(179);
   gotoxy(41,9); cout<<char(179);
   sleep(1);
   cprintf("%s%c", "TOE", '\a');
   gotoxy(37,10);cout<<char(179)<<"   "<<char(179);
   gotoxy(34,11); cout<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196);
   gotoxy(37,12);cout<<char(179)<<"   "<<char(179);
   gotoxy(34,13); sleep(1);   textcolor(LIGHTRED);
   cprintf("%s", " X "); cout<<char(179); cout<<'\a';
   textcolor(WHITE);
   cprintf("%s", " V "); cout<<char(179); cout<<'\a';
   textcolor(LIGHTRED);
   cprintf("%s", " O "); cout<<'\a';
   gotoxy(37,14);cout<<char(179)<<"   "<<char(179);
   gotoxy(34,15); cout<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196);
   gotoxy(37,16);cout<<char(179)<<"   "<<char(179);
	gotoxy(37,17);cout<<char(179)<<"   "<<char(179);
   gotoxy(37,18);cout<<char(179)<<"   "<<char(179);
   sleep(5);
   _setcursortype(_NORMALCURSOR);
}

	 // INSTRUCTIONS

    
void instruct()
{
	_setcursortype(_NOCURSOR);
	char A='1', B='2', C='3', D='4', E='5', F='6', G='7', H='8', I='9';
	char a='\0',b='\0',c='\0',d='\0',e='\0',f='\0',g='\0',h='\0',i='\0';
   char example;
   textcolor(LIGHTBLUE);
	gotoxy(34,2);
   cprintf("%s", "X and O GUIDE");  textcolor(WHITE); sleep(4);
   gotoxy(3,5);
   cprintf("%s", "1."); textcolor(YELLOW);
   cprintf("%s", "X and O is a 2 player game where players take turns marking X's and O's");
   gotoxy(5,6); cprintf("%s", "on a 3x3 grid"); sleep(4);
   gotoxy(3, 8); textcolor(WHITE);
   cprintf("%s", "2."); textcolor(YELLOW);
   cprintf("%s", "The first player to mark 3 spots which can be done vertically, horizontally");
   gotoxy(5,9); cprintf("%s", "or diagonally wins"); sleep(4);
   gotoxy(3,11); textcolor(WHITE);
   cprintf("%s", "3."); textcolor(YELLOW);
   cprintf("%s", "By convention, X starts first"); sleep(3);
   gotoxy(3, 13); textcolor(WHITE);
   cprintf("%s", "4."); textcolor(YELLOW);
   cprintf("%s", "Each spot in the 3x3 grid is assigned a unique number from 1 to 9");
   gotoxy(5,14); cprintf("%s", "as shown below");
   cross(A,B,C,D,E,F,G,H,I);
   sleep(5);
   clrscr();
   textcolor(LIGHTBLUE);
   gotoxy(34,2); cprintf("%s", "X and O GUIDE");
   gotoxy(3,5); textcolor(WHITE);
   cprintf("%s", "5. "); textcolor(YELLOW);
   cprintf("%s", "In order to mark a spot, the player must input a number from 1 to 9"); sleep(3);
   gotoxy(3, 8); textcolor(WHITE);
   cprintf("%s", "6. "); textcolor(YELLOW);
   cprintf("%s", "Remember, you cannot mark a spot which has already been marked"); sleep(4);
   textcolor(WHITE); _setcursortype(_NORMALCURSOR);
   do
   {
   	clrscr();
   	gotoxy(3,11);
   	cprintf("%s", "Continue to example? [");
   	textcolor(YELLOW);
   	cprintf("%s", "Y/N");
   	textcolor(WHITE);
   	cprintf("%s", "]: ");
   	cin>>example;
   }
	while(example!='Y' && example!='y' && example!='N' && example!='n');
   clrscr();
   if(example=='y' || example=='Y')
   {
   	textcolor(LIGHTBLUE);
   	cout<<"\n                                 ";cprintf("%s", "  EXAMPLE");cout<<endl<<endl;
   	cross(a,b,c,d,e,f,g,h,i);
   	cout<<"\n PLAYER 1's TURN: "; sleep(1);
   	cout<<"5"; sleep(1);
   	e='X'; clrscr();
   	cout<<"\n                                 ";cprintf("%s", "  EXAMPLE");cout<<endl<<endl;
   	cross(a,b,c,d,e,f,g,h,i);
   	cout<<"\n PLAYER 2's TURN: "; sleep(1);
   	cout<<"1"; sleep(1);
   	a='O'; clrscr();
   	cout<<"\n                                 ";cprintf("%s", "  EXAMPLE");cout<<endl<<endl;
      cross(a,b,c,d,e,f,g,h,i);
   	cout<<"\n PLAYER 1's TURN: "; sleep(1);
      cout<<"4"; sleep(1);
   	d='X'; clrscr();
   	cout<<"\n                                 ";cprintf("%s", "  EXAMPLE");cout<<endl<<endl;
   	cross(a,b,c,d,e,f,g,h,i);
   	cout<<"\n PLAYER 2's TURN: "; sleep(1);
   	cout<<"6"; sleep(1);
   	f='O'; clrscr();
   	cout<<"\n                                 ";cprintf("%s", "  EXAMPLE");cout<<endl<<endl;
   	cross(a,b,c,d,e,f,g,h,i);
   	cout<<"\n PLAYER 1's TURN: "; sleep(1);
   	cout<<"3"; sleep(1);
   	c='X'; clrscr();
   	cout<<"\n                                 ";cprintf("%s", "  EXAMPLE");cout<<endl<<endl;;
   	cross(a,b,c,d,e,f,g,h,i);
   	cout<<"\n PLAYER 2's TURN: "; sleep(1);
   	cout<<"8"; sleep(1);
   	h='O'; clrscr();
   	cout<<"\n                                 ";cprintf("%s", "  EXAMPLE");cout<<endl<<endl;
   	cross(a,b,c,d,e,f,g,h,i);
   	cout<<"\n PLAYER 1's TURN: "; sleep(1);
   	cout<<"7"; sleep(1);
      _setcursortype(_NOCURSOR);
   	g='X'; clrscr();
   	cout<<"\n                                 ";cprintf("%s", "  EXAMPLE");cout<<endl<<endl;
   	cross(a,b,c,d,e,f,g,h,i); sleep(2); textcolor(LIGHTRED);
   	cout<<"\n PLAYER 1 WINS!!!!\a";
   	textcolor(YELLOW);
   	cout<<"\n\n                            "; cprintf("%s", "  IT'S THAT SIMPLE!"); sleep(5);
      _setcursortype(_NORMALCURSOR);
   }
   clrscr();
}

	//MENU

   
char menu()
{
	char choice[20]; // ARRAY IS NEEDED FOR INPUTS LIKE '23' WHERE
                    // 3 WILL BE IGNORED AND 2 WILL BE TAKEN AS
                    // PLAYER'S CHOICE
   do
   {
   	gotoxy(38, 5);
   	textcolor(YELLOW); cprintf("%s", "MENU");
   	gotoxy(33, 7);
   	textcolor(WHITE); cprintf("%s", "1.");
   	textcolor(LIGHTGREEN); cprintf("%s"," One player");
   	gotoxy(33, 9);
   	textcolor(WHITE); cprintf("%s", "2.");
   	textcolor(LIGHTGREEN); cprintf("%s", " Two player");
   	gotoxy(33, 11);
   	textcolor(WHITE); cprintf("%s", "3.");
   	textcolor(LIGHTGREEN); cprintf("%s", " Instructions");
   	gotoxy(33, 13);
   	textcolor(WHITE); cprintf("%s", "4.");
   	textcolor(LIGHTGREEN); cprintf("%s", " EXIT");
   	gotoxy(33, 16);
   	textcolor(LIGHTRED); cprintf("%s", "Choice ");
   	textcolor(YELLOW); cprintf("%s", "[1-4]");
   	textcolor(LIGHTRED); cprintf("%s", ": ");
      cin>>choice;
      clrscr();
   }
   while(choice[0]<'1' || choice[0]>'4');
   return choice[0];
}


	                                       // AI FOR 'X' IN ONE PLAYER GAME


void aix(char &a, char &b, char &c, char &d, char &e, char &f, char &g, char &h, char &i, int &xpos) 
{
	sleep(2); char A=a, B=b, C=c, D=d, E=e, F=f, G=g, H=h, I=i; // REQUIRED TO SHOW INPUT

   // FOR GETTING 3 'X' IN A ROW

   if(a=='X' && d=='X' && g=='\0')
   	g='X';
   else
   if(a=='X' && d=='\0' && g=='X')
   	d='X';
   else
   if(a=='\0' && d=='X' && g=='X')
   	a='X';
   else
   if(b=='X' && e=='X' && h=='\0')
   	h='X';
   else
   if(b=='X' && e=='\0' && h=='X')
   	e='X';
   else
   if(b=='\0' && e=='X' && h=='X')
   	b='X';
   else
   if(c=='X' && f=='X' && i=='\0')
   	i='X';
   else
   if(c=='X' && f=='\0' && i=='X')
   	f='X';
   else
   if(c=='\0' && f=='X' && i=='X')
   	c='X';
   else
   if(a=='X' && b=='X' && c=='\0')
   	c='X';
   else
   if(a=='X' && b=='\0' && c=='X')
   	b='X';
   else
   if(a=='\0' && b=='X' && c=='X')
   	a='X';
   else
   if(d=='X' && e=='X' && f=='\0')
   	f='X';
   else
   if(d=='X' && e=='\0' && f=='X')
   	e='X';
   else
   if(d=='\0' && e=='X' && f=='X')
   	d='X';
   else
   if(g=='X' && h=='X' && i=='\0')
   	i='X';
   else
   if(g=='X' && h=='\0' && i=='X')
   	h='X';
   else
   if(g=='\0' && h=='X' && i=='X')
   	g='X';
   else
   if(a=='X' && e=='X' && i=='\0')
   	i='X';
   else
   if(a=='X' && e=='\0' && i=='X')
   	e='X';
   else
   if(a=='\0' && e=='X' && i=='X')
   	a='X';
   else
   if(c=='X' && e=='X' && g=='\0')
   	g='X';
   else
   if(c=='X' && e=='\0' && g=='X')
   	e='X';
   else
   if(c=='\0' && e=='X' && g=='X')
   	c='X';
   else


   // FOR BLOCKING 3 'O' IN A ROW
   

   if(a=='O' && d=='O' && g=='\0')
   	g='X';
   else
   if(a=='O' && d=='\0' && g=='O')
   	d='X';
   else
   if(a=='\0' && d=='O' && g=='O')
   	a='X';
   else
   if(b=='O' && e=='O' && h=='\0')
   	h='X';
   else
   if(b=='O' && e=='\0' && h=='O')
   	e='X';
   else
   if(b=='\0' && e=='O' && h=='O')
   	b='X';
   else
   if(c=='O' && f=='O' && i=='\0')
   	i='X';
   else
   if(c=='O' && f=='\0' && i=='O')
   	f='X';
   else
   if(c=='\0' && f=='O' && i=='O')
   	c='X';
   else
   if(a=='O' && b=='O' && c=='\0')
   	c='X';
   else
   if(a=='O' && b=='\0' && c=='O')
   	b='X';
   else
   if(a=='\0' && b=='O' && c=='O')
   	a='X';
   else
   if(d=='O' && e=='O' && f=='\0')
   	f='X';
   else
   if(d=='O' && e=='\0' && f=='O')
   	e='X';
   else
   if(d=='\0' && e=='O' && f=='O')
   	d='X';
   else
   if(g=='O' && h=='O' && i=='\0')
   	i='X';
   else
   if(g=='O' && h=='\0' && i=='O')
   	h='X';
   else
   if(g=='\0' && h=='O' && i=='O')
   	g='X';
   else
   if(a=='O' && e=='O' && i=='\0')
   	i='X';
   else
   if(a=='O' && e=='\0' && i=='O')
   	e='X';
   else
   if(a=='\0' && e=='O' && i=='O')
   	a='X';
   else
   if(c=='O' && e=='O' && g=='\0')
   	c='X';
   else
   if(c=='O' && e=='\0' && g=='O')
   	e='X';
   else
   if(c=='\0' && e=='O' && g=='O')
   	c='X';
   else

                                             // FIRST STEP 1 (PUT 'X' IN CORNER)

   if(xpos>9)
   {
   	if(a=='\0' && b=='\0' && c=='\0' && d=='\0' && e=='\0' && f=='\0' && g=='\0' && h=='\0' && i=='\0') // FIRST STEP
      	a='X';
      else
      if(a=='X' && b=='\0' && c=='\0' && d=='\0' && e=='O' && f=='\0' && g=='\0' && h=='\0' && i=='\0')  // IF 'O' IS PUT IN CENTRE
      	i='X';
      else
      if(a=='X' && b=='O' && c=='\0' && d=='\0' && e=='\0' && f=='\0' && g=='\0' && h=='\0' && i=='\0') // IF 'O' IS PUT AT 2
      	e='X';
      else
      if(a=='X' && b=='O' && c=='\0' && d=='\0' && e=='X' && f=='\0' && g=='\0' && h=='\0' && i=='O')  // CONTINUATION OF ABOVE MOVE
      	g='X';
      else
      if(a=='X' && b=='\0' && c=='\0' && d=='O' && e=='\0' && f=='\0' && g=='\0' && h=='\0' && i=='\0')  // IF 'O' IS PUT AT 4
      	e='X';
      else
      if(a=='X' && b=='\0' && c=='\0' && d=='O' && e=='X' && f=='\0' && g=='\0' && h=='\0' && i=='O')  // CONTINUATION OF ABOVE MOVE
      	c='X';
      else
      if(a=='X' && b=='\0' && c=='\0' && d=='\0' && e=='\0' && f=='O' && g=='\0' && h=='\0' && i=='\0' ||   // IF 'O' AT 6 OR 8
      	a=='X' && b=='\0' && c=='\0' && d=='\0' && e=='\0' && f=='\0' && g=='\0' && h=='O' && i=='\0'  )
         e='X';
   }
   else

                                             // FIRST STEP 2 (PUT 'X' IN MIDDLE)


		if(a=='\0' && b=='\0' && c=='\0' && d=='\0' && e=='\0' && f=='\0' && g=='\0' && h=='\0' && i=='\0')
			e='X';
   	else

   	// 'O' AT ODD POSITIONS

      	// AT 1 OR 9
   		if(a=='O' && b=='\0' && c=='\0'&& d=='\0' && e=='X'&& f=='\0'&& g=='\0'&& h=='\0'&& i=='\0' ||
           	a=='\0' && b=='\0' && c=='\0'&& d=='\0' && e=='X'&& f=='\0'&& g=='\0'&& h=='\0'&& i=='O')
      	{
      		int r=random(2);
         	if(r==0)
         		c='X';
         	if(r==1)
         		g='X';
      	}
      	else
         // AT 3 OR 7
      	if(a=='\0' && b=='\0' && c=='O'&& d=='\0' && e=='X'&& f=='\0'&& g=='\0'&& h=='\0'&& i=='\0' ||
           	a=='\0' && b=='\0' && c=='\0'&& d=='\0' && e=='X'&& f=='\0'&& g=='O'&& h=='\0'&& i=='\0')
      	{
      		int r=random(2);
         	if(r==0)
         		a='X';
         	if(r==1)
         		i='X';
      	}
			else

   	// 'O' AT EVEN POSITIONS

      	// AT 2
   		if(a=='\0' && b=='O' && c=='\0'&& d=='\0' && e=='X'&& f=='\0'&& g=='\0'&& h=='\0'&& i=='\0')
      	{
      		int r=random(2);
         	if(r==0)
         		g='X';
         	if(r==1)
         		i='X';
      	}
      	else
         // AT 4
			if(a=='\0' && b=='\0' && c=='\0'&& d=='O' && e=='X'&& f=='\0'&& g=='\0'&& h=='\0'&& i=='\0')
      	{
      		int r=random(2);
         	if(r==0)
         		c='X';
         	if(r==1)
         		i='X';
      	}
      	else
         // AT 6
      	if(a=='\0' && b=='\0' && c=='\0'&& d=='\0' && e=='X'&& f=='O'&& g=='\0'&& h=='\0'&& i=='\0')
      	{
      		int r=random(2);
         	if(r==0)
         		a='X';
         	if(r==1)
         		g='X';
      	}
      	else
         // AT 8
      	if(a=='\0' && b=='\0' && c=='\0'&& d=='\0' && e=='X'&& f=='\0'&& g=='\0'&& h=='O'&& i=='\0')
      	{
      		int r=random(2);
         	if(r==0)
         		a='X';
         	if(r==1)
         		c='X';
      	}
         else
   
   // IN BETWEEN FILL UPS
  

   if((b=='\0' && e=='X' && h=='\0') && (d!='\0' || f!='\0'))
   {
   	int r=random(2);
      if(r==0)
      	b='X';
      if(r==1)                                                           // THIS IS KNOWN AS VH CODE (VERTICAL-HORIZONTAL)
      	h='X';
   }
   else
   if((d=='\0' && e=='X' && f=='\0') && (b!='\0' || h!='\0'))
   {
   	int r=random(2);
      if(r==0)
      	d='X';
      if(r==1)
      	f='X';
   }

   // TO FILL UP LAST POSITION

   else
   if(a=='\0' && b!='\0' && c!='\0'&& d!='\0' && e!='\0'&& f!='\0'&& g!='\0'&& h!='\0'&& i!='\0')
   	a='X';
   else
   if(a!='\0' && b=='\0' && c!='\0'&& d!='\0' && e!='\0'&& f!='\0'&& g!='\0'&& h!='\0'&& i!='\0')
   	b='X';
   else
   if(a!='\0' && b!='\0' && c=='\0'&& d!='\0' && e!='\0'&& f!='\0'&& g!='\0'&& h!='\0'&& i!='\0')
   	c='X';
   else
   if(a!='\0' && b!='\0' && c!='\0'&& d=='\0' && e!='\0'&& f!='\0'&& g!='\0'&& h!='\0'&& i!='\0')
   	d='X';
   else
   if(a!='\0' && b!='\0' && c!='\0'&& d!='\0' && e=='\0'&& f!='\0'&& g!='\0'&& h!='\0'&& i!='\0')
   	e='X';
   else
   if(a!='\0' && b!='\0' && c!='\0'&& d!='\0' && e!='\0'&& f=='\0'&& g!='\0'&& h!='\0'&& i!='\0')
   	f='X';
   else
   if(a!='\0' && b!='\0' && c!='\0'&& d!='\0' && e!='\0'&& f!='\0'&& g=='\0'&& h!='\0'&& i!='\0')
   	g='X';
   else
   if(a!='\0' && b!='\0' && c!='\0'&& d!='\0' && e!='\0'&& f!='\0'&& g!='\0'&& h=='\0'&& i!='\0')
   	h='X';
   else
   if(a!='\0' && b!='\0' && c!='\0'&& d!='\0' && e!='\0'&& f!='\0'&& g!='\0'&& h!='\0'&& i=='\0')
   	i='X';

   // FOR SHOWING INPUTTED NUMBER ON SCREEN
   
   if(A!=a)
   { cout<<1; sleep(1);}
   else
   if(B!=b)
   { cout<<2; sleep(1);}
   else
   if(C!=c)
   { cout<<3; sleep(1);}
   else
   if(D!=d)
   { cout<<4; sleep(1);}
   else
   if(E!=e)
   { cout<<5; sleep(1);}
   else
   if(F!=f)
   { cout<<6; sleep(1);}
   else
   if(G!=g)
   { cout<<7; sleep(1);}
   else
   if(H!=h)
   { cout<<8; sleep(1);}
   else
   if(I!=i)
   { cout<<9; sleep(1);}

}


											// AI FOR 'O' IN ONE PLAYER GAME


                                                
void aio(char &a, char &b, char &c, char &d, char &e, char &f, char &g, char &h, char &i)
{
  sleep(2); char A=a, B=b, C=c, D=d, E=e, F=f, G=g, H=h, I=i;   // REQUIRED TO SHOW INPUT
  char &a1=c, &b1=f, &c1=i, &d1=b, &e1=e, &f1=h, &g1=a, &h1=d, &i1=g;
  char &a2=i, &b2=h, &c2=g, &d2=f, &e2=e, &f2=d, &g2=c, &h2=b, &i2=a;    // REQUIRED SINCE 'X' CAN BE PUT AT ANY OF THE 4 CORNERS/MIDDLE SQUARE
  char &a3=g, &b3=d, &c3=a, &d3=h, &e3=e, &f3=b, &g3=i, &h3=f, &i3=c;

  // FOR GETTING 3 'O' IN A ROW

   if(a=='O' && d=='O' && g=='\0')
   	g='O';
   else
   if(a=='O' && d=='\0' && g=='O')
   	d='O';
   else
   if(a=='\0' && d=='O' && g=='O')
   	a='O';
   else
   if(b=='O' && e=='O' && h=='\0')
   	h='O';
   else
   if(b=='O' && e=='\0' && h=='O')
   	e='O';
   else
   if(b=='\0' && e=='O' && h=='O')
   	b='O';
   else
   if(c=='O' && f=='O' && i=='\0')
   	i='O';
   else
   if(c=='O' && f=='\0' && i=='O')
   	f='O';
   else
   if(c=='\0' && f=='O' && i=='O')
   	c='O';
   else
   if(a=='O' && b=='O' && c=='\0')
   	c='O';
   else
   if(a=='O' && b=='\0' && c=='O')
   	b='O';
   else
   if(a=='\0' && b=='O' && c=='O')
   	a='O';
   else
   if(d=='O' && e=='O' && f=='\0')
   	f='O';
   else
   if(d=='O' && e=='\0' && f=='O')
   	e='O';
   else
   if(d=='\0' && e=='O' && f=='O')
   	d='O';
   else
   if(g=='O' && h=='O' && i=='\0')
   	i='O';
   else
   if(g=='O' && h=='\0' && i=='O')
   	h='O';
   else
   if(g=='\0' && h=='O' && i=='O')
   	g='O';
   else
   if(a=='O' && e=='O' && i=='\0')
   	i='O';
   else
   if(a=='O' && e=='\0' && i=='O')
   	e='O';
   else
   if(a=='\0' && e=='O' && i=='O')
   	a='O';
   else
   if(c=='O' && e=='O' && g=='\0')
   	g='O';
   else
   if(c=='O' && e=='\0' && g=='O')
   	e='O';
   else
   if(c=='\0' && e=='O' && g=='O')
   	c='O';
   else


   // FOR BLOCKING 3 'X' IN A ROW
   

   if(a=='X' && d=='X' && g=='\0')
   	g='O';
   else
   if(a=='X' && d=='\0' && g=='X')
   	d='O';
   else
   if(a=='\0' && d=='X' && g=='X')
   	a='O';
   else
   if(b=='X' && e=='X' && h=='\0')
   	h='O';
   else
   if(b=='X' && e=='\0' && h=='X')
   	e='O';
   else
   if(b=='\0' && e=='X' && h=='X')
   	b='O';
   else
   if(c=='X' && f=='X' && i=='\0')
   	i='O';
   else
   if(c=='X' && f=='\0' && i=='X')
   	f='O';
   else
   if(c=='\0' && f=='X' && i=='X')
   	c='O';
   else
   if(a=='X' && b=='X' && c=='\0')
   	c='O';
   else
   if(a=='X' && b=='\0' && c=='X')
   	b='O';
   else
   if(a=='\0' && b=='X' && c=='X')
   	a='O';
   else
   if(d=='X' && e=='X' && f=='\0')
   	f='O';
   else
   if(d=='X' && e=='\0' && f=='X')
   	e='O';
   else
   if(d=='\0' && e=='X' && f=='X')
   	d='O';
   else
   if(g=='X' && h=='X' && i=='\0')
   	i='O';
   else
   if(g=='X' && h=='\0' && i=='X')
   	h='O';
   else
   if(g=='\0' && h=='X' && i=='X')
   	g='O';
   else
   if(a=='X' && e=='X' && i=='\0')
   	i='O';
   else
   if(a=='X' && e=='\0' && i=='X')
   	e='O';
   else
   if(a=='\0' && e=='X' && i=='X')
   	a='O';
   else
   if(c=='X' && e=='X' && g=='\0')
   	g='O';
   else
   if(c=='X' && e=='\0' && g=='X')
   	e='O';
   else
   if(c=='\0' && e=='X' && g=='X')
   	c='O';
   else


                                                  // FIRST 'X' AT CORNER

      // 'X' AT 1

   if(a=='X' && b=='\0' && c=='\0' && d=='\0' && e=='\0' && f=='\0' && g=='\0' && h=='\0' && i=='\0')   // ALWAYS BEST TO KEEP 'O' AT CENTRE
   	e='O';
   else
   if(a=='X' && b=='\0' && c=='\0' && d=='\0' && e=='O' && f=='X' && g=='\0' && h=='\0' && i=='\0')
   	h='O';
   else
   if(a=='X' && b=='\0' && c=='\0' && d=='\0' && e=='O' && f=='\0' && g=='\0' && h=='X' && i=='\0')
   	f='O';
   else
   if(a=='X' && b=='X' && c=='O' && d=='O' && e=='O' && f=='X' && g=='X' && h=='\0' && i=='\0')
   	h='O';
   else
   if(a=='X' && b=='O' && c=='X' && d=='X' && e=='O' && f=='\0' && g=='O' && h=='X' && i=='\0')
   	f='O';
   else
   if(a=='X' && b=='\0' && c=='\0' && d=='\0' && e=='O' && f=='\0' && g=='\0' && h=='\0' && i=='X')
   	d='O';
   else

   	// 'X' AT 3

   if(a1=='X' && b1=='\0' && c1=='\0' && d1=='\0' && e1=='\0' && f1=='\0' && g1=='\0' && h1=='\0' && i1=='\0')
   	e1='O';
   else
   if(a1=='X' && b1=='\0' && c1=='\0' && d1=='\0' && e1=='O' && f1=='X' && g1=='\0' && h1=='\0' && i1=='\0')
   	h1='O';
   else
   if(a1=='X' && b1=='\0' && c1=='\0' && d1=='\0' && e1=='O' && f1=='\0' && g1=='\0' && h1=='X' && i1=='\0')      // REPITITION OF ABOVE
   	f1='O';
   else
   if(a1=='X' && b1=='X' && c1=='O' && d1=='O' && e1=='O' && f1=='X' && g1=='X' && h1=='\0' && i1=='\0')
   	h1='O';
   else
   if(a1=='X' && b1=='O' && c1=='X' && d1=='X' && e1=='O' && f1=='\0' && g1=='O' && h1=='X' && i1=='\0')
   	f1='O';
   else
   if(a1=='X' && b1=='\0' && c1=='\0' && d1=='\0' && e1=='O' && f1=='\0' && g1=='\0' && h1=='\0' && i1=='X')
   	d1='O';
   else

   	// 'X' AT 9

   if(a2=='X' && b2=='\0' && c2=='\0' && d2=='\0' && e2=='\0' && f2=='\0' && g2=='\0' && h2=='\0' && i2=='\0')
   	e2='O';
   else
   if(a2=='X' && b2=='\0' && c2=='\0' && d2=='\0' && e2=='O' && f2=='X' && g2=='\0' && h2=='\0' && i2=='\0')
   	h2='O';
   else
   if(a2=='X' && b2=='\0' && c2=='\0' && d2=='\0' && e2=='O' && f2=='\0' && g2=='\0' && h2=='X' && i2=='\0')     // REPITITION OF ABOVE
   	f2='O';
   else
   if(a2=='X' && b2=='X' && c2=='O' && d2=='O' && e2=='O' && f2=='X' && g2=='X' && h2=='\0' && i2=='\0')
   	h2='O';
   else
   if(a2=='X' && b2=='O' && c2=='X' && d2=='X' && e2=='O' && f2=='\0' && g2=='O' && h2=='X' && i2=='\0')
   	f2='O';
   else
   if(a2=='X' && b2=='\0' && c2=='\0' && d2=='\0' && e2=='O' && f2=='\0' && g2=='\0' && h2=='\0' && i2=='X')
   	d2='O';
   else

   	// 'X' AT 7

   if(a3=='X' && b3=='\0' && c3=='\0' && d3=='\0' && e3=='\0' && f3=='\0' && g3=='\0' && h3=='\0' && i3=='\0')
   	e3='O';
   else
   if(a3=='X' && b3=='\0' && c3=='\0' && d3=='\0' && e3=='O' && f3=='X' && g3=='\0' && h3=='\0' && i3=='\0')
   	h3='O';
   else
   if(a3=='X' && b3=='\0' && c3=='\0' && d3=='\0' && e3=='O' && f3=='\0' && g3=='\0' && h3=='X' && i3=='\0')    // REPITITION OF ABOVE
   	f3='O';
   else
   if(a3=='X' && b3=='X' && c3=='O' && d3=='O' && e3=='O' && f3=='X' && g3=='X' && h3=='\0' && i3=='\0')
   	h3='O';
   else
   if(a3=='X' && b3=='O' && c3=='X' && d3=='X' && e3=='O' && f3=='\0' && g3=='O' && h3=='X' && i3=='\0')
   	f3='O';
   else
   if(a3=='X' && b3=='\0' && c3=='\0' && d3=='\0' && e3=='O' && f3=='\0' && g3=='\0' && h3=='\0' && i3=='X')
   	d3='O';
   else

                                             // FIRST 'X' AT MIDDLE SQUARE

   	// 'X' AT 2

   if(a=='\0' && b=='X' && c=='\0' && d=='\0' && e=='\0' && f=='\0' && g=='\0' && h=='\0' && i=='\0')   // ALWAYS BEST TO KEEP 'O' AT CENTRE
   	e='O';
   else
   if(a=='X' && b=='X' && c=='O' && d=='O' && e=='O' && f=='X' && g=='X' && h=='\0' && i=='\0')
   	h='O';
   else
   if(a=='O' && b=='X' && c=='X' && d=='X' && e=='O' && f=='O' && g=='\0' && h=='\0' && i=='X')
   	h='O';
   else
   if(a=='\0' && b=='X' && c=='\0' && d=='X' && e=='O' && f=='\0' && g=='\0' && h=='\0' && i=='\0')
   	a='O';
   else
   if(a=='\0' && b=='X' && c=='\0' && d=='\0' && e=='O' && f=='X' && g=='\0' && h=='\0' && i=='\0')
   	c='O';
   else
   if(a=='\0' && b=='X' && c=='\0' && d=='\0' && e=='O' && f=='\0' && g=='X' && h=='\0' && i=='\0')
   	f='O';
   else
   if(a=='\0' && b=='X' && c=='\0' && d=='\0' && e=='O' && f=='\0' && g=='\0' && h=='\0' && i=='X')
   	d='O';
   else

   	// 'X' AT 6

	if(a1=='\0' && b1=='X' && c1=='\0' && d1=='\0' && e1=='\0' && f1=='\0' && g1=='\0' && h1=='\0' && i1=='\0')
   	e1='O';
   else
   if(a1=='X' && b1=='X' && c1=='O' && d1=='O' && e1=='O' && f1=='X' && g1=='X' && h1=='\0' && i1=='\0')
   	h1='O';
   else
   if(a1=='O' && b1=='X' && c1=='X' && d1=='X' && e1=='O' && f1=='O' && g1=='\0' && h1=='\0' && i1=='X')
   	h1='O';
   else
   if(a1=='\0' && b1=='X' && c1=='\0' && d1=='X' && e1=='O' && f1=='\0' && g1=='\0' && h1=='\0' && i1=='\0')    // REPITITION OF ABOVE
   	a1='O';
   else
   if(a1=='\0' && b1=='X' && c1=='\0' && d1=='\0' && e1=='O' && f1=='X' && g1=='\0' && h1=='\0' && i1=='\0')
   	c1='O';
   else
   if(a1=='\0' && b1=='X' && c1=='\0' && d1=='\0' && e1=='O' && f1=='\0' && g1=='X' && h1=='\0' && i1=='\0')
   	f1='O';
   else
   if(a1=='\0' && b1=='X' && c1=='\0' && d1=='\0' && e1=='O' && f1=='\0' && g1=='\0' && h1=='\0' && i1=='X')
   	d1='O';
   else

   	// 'X' AT 8

   if(a2=='\0' && b2=='X' && c2=='\0' && d2=='\0' && e2=='\0' && f2=='\0' && g2=='\0' && h2=='\0' && i2=='\0')
   	e2='O';
   else
   if(a2=='X' && b2=='X' && c2=='O' && d2=='O' && e2=='O' && f2=='X' && g2=='X' && h2=='\0' && i2=='\0')
   	h2='O';
   else
   if(a2=='O' && b2=='X' && c2=='X' && d2=='X' && e2=='O' && f2=='O' && g2=='\0' && h2=='\0' && i2=='X')
   	h2='O';
   else
   if(a2=='\0' && b2=='X' && c2=='\0' && d2=='X' && e2=='O' && f2=='\0' && g2=='\0' && h2=='\0' && i2=='\0')   // REPITITION OF ABOVE
   	a2='O';
   else
   if(a2=='\0' && b2=='X' && c2=='\0' && d2=='\0' && e2=='O' && f2=='X' && g2=='\0' && h2=='\0' && i2=='\0')
   	c2='O';
   else
   if(a2=='\0' && b2=='X' && c2=='\0' && d2=='\0' && e2=='O' && f2=='\0' && g2=='X' && h2=='\0' && i2=='\0')
   	f2='O';
   else
   if(a2=='\0' && b2=='X' && c2=='\0' && d2=='\0' && e2=='O' && f2=='\0' && g2=='\0' && h2=='\0' && i2=='X')
   	d2='O';
   else

   	// 'X' AT 4

   if(a3=='\0' && b3=='X' && c3=='\0' && d3=='\0' && e3=='\0' && f3=='\0' && g3=='\0' && h3=='\0' && i3=='\0')
   	e3='O';
   else
   if(a3=='X' && b3=='X' && c3=='O' && d3=='O' && e3=='O' && f3=='X' && g3=='X' && h3=='\0' && i3=='\0')
   	h3='O';
   else
   if(a3=='O' && b3=='X' && c3=='X' && d3=='X' && e3=='O' && f3=='O' && g3=='\0' && h3=='\0' && i3=='X')
   	h3='O';
   else
   if(a3=='\0' && b3=='X' && c3=='\0' && d3=='X' && e3=='O' && f3=='\0' && g3=='\0' && h3=='\0' && i3=='\0')   // REPITITION OF ABOVE
   	a3='O';
   else
   if(a3=='\0' && b3=='X' && c3=='\0' && d3=='\0' && e3=='O' && f3=='X' && g3=='\0' && h3=='\0' && i3=='\0')
   	c3='O';
   else
   if(a3=='\0' && b3=='X' && c3=='\0' && d3=='\0' && e3=='O' && f3=='\0' && g3=='X' && h3=='\0' && i3=='\0')
   	f3='O';
   else
   if(a3=='\0' && b3=='X' && c3=='\0' && d3=='\0' && e3=='O' && f3=='\0' && g3=='\0' && h3=='\0' && i3=='X')
   	d3='O';
   else

   														// FIRST 'X' AT CENTRE


   if(a=='\0' && b=='\0' && c=='\0' && d=='\0' && e=='X' && f=='\0' && g=='\0' && h=='\0' && i=='\0')   // ALWAYS BEST TO KEEP 'O' AT CORNER
   	a='O';
   else

   	// SECOND 'X' AT 2


   if(a=='O' && b=='X' && c=='O' && d=='\0' && e=='X' && f=='\0' && g=='X' && h=='O' && i=='X')
   	d='O';
   else
   if(a=='O' && b=='X' && c=='\0' && d=='X' && e=='X' && f=='O' && g=='\0' && h=='O' && i=='X')
   	g='O';
   else
   if(a=='O' && b=='X' && c=='\0' && d=='\0' && e=='X' && f=='\0' && g=='\0' && h=='O' && i=='X')
   	d='O';
   else

   	// SECOND 'X' AT 3

   if(a=='O' && b=='\0' && c=='X' && d=='X' && e=='X' && f=='O' && g=='O' && h=='\0' && i=='X')
   	b='O';
   else

   	// SECOND 'X' AT 9

   if(a=='O' && b=='\0' && c=='\0' && d=='\0' && e=='X' && f=='\0' && g=='\0' && h=='\0' && i=='X')
   	c='O';
   else
   if(a=='O' && b=='X' && c=='O' && d=='\0' && e=='X' && f=='\0' && g=='X' && h=='O' && i=='X')    // TAKES CARE OF "SECOND 'X' AT 7" AS WELL
   	d='O';
   else

		// SECOND 'X' AT 4

  	if(a=='O' && b=='X' && c=='\0' && d=='X' && e=='X' && f=='O' && g=='\0' && h=='O' && i=='X')
   	c='O';
   else
   if(a=='O' && b=='\0' && c=='X' && d=='X' && e=='X' && f=='O' && g=='O' && h=='\0' && i=='X')
   	b='O';
   else
   if(a=='O' && b=='\0' && c=='\0' && d=='X' && e=='X' && f=='O' && g=='\0' && h=='\0' && i=='X')
   	b='O';
   else



   // DIAGONALS CODE (NEEDED FOR THE CASE WHEN FIRST 'X' AT MIDDLE SQUARE)

   if(a=='\0' && e=='O' && i=='\0')
   {
   	int r=random(2);
      if(r==0)
      	a='O';
      else
      if(r==1)
      	i='O';
   }
   else
   if(c=='\0' && e=='O' && g=='\0')
   {
   	int r=random(2);
      if(r==0)
      	c='O';
      else
      if(r==1)
      	g='O';
   }
   else

   // VH CODE (IMPORTANT FOR MANY IN BETWEEN FILL-UPS)

   if((b=='\0' && e=='O' && h=='\0') && (d!='\0' || f!='\0'))
   {
   	int r=random(2);
      if(r==0)
      	b='O';
      if(r==1)                                                        
      	h='O';
   }
   else
   if((d=='\0' && e=='O' && f=='\0') && (b!='\0' || h!='\0'))
   {
   	int r=random(2);
      if(r==0)
      	d='O';
      if(r==1)
      	f='O';
   }

   // FOR SHOWING INPUTTED NUMBER ON SCREEN
   
   if(A!=a)
   { cout<<1; sleep(1);}
   else
   if(B!=b)
   { cout<<2; sleep(1);}
   else
   if(C!=c)
   { cout<<3; sleep(1);}
   else
   if(D!=d)
   { cout<<4; sleep(1);}
   else
   if(E!=e)
   { cout<<5; sleep(1);}
   else
   if(F!=f)
   { cout<<6; sleep(1);}
   else
   if(G!=g)
   { cout<<7; sleep(1);}
   else
   if(H!=h)
   { cout<<8; sleep(1);}
   else
   if(I!=i)
   { cout<<9; sleep(1);}
}


	// TWO PLAYER GAME FUNCTION

   
void twoplayergame()
{
	clrscr();
   int k=2; char A='1', B='2', C='3', D='4', E='5', F='6', G='7', H='8', I='9';
   char a='\0',b='\0',c='\0',d='\0',e='\0',f='\0',g='\0',h='\0',i='\0';
   char name1[20], name2[20], colour1, colour2, col1, col2, check1;
   cout<<endl<<endl;
   textcolor(LIGHTGRAY);
   cprintf("%s", "\n INPUT PLAYER 1's NAME: "); gets(name1);
   cprintf("%s", "\n\n INPUT PLAYER 2's NAME: "); gets(name2);
   do
   {
   	clrscr();
   	cprintf("%s%s",
      "\n\n What colour would you like your PLAYER 1's name to appear in?",
       "\n\n\r (1=");
   	textcolor(LIGHTRED); cprintf("%s", "RED");
   	textcolor(LIGHTGRAY); cprintf("%s", ", 2=");
   	textcolor(LIGHTGREEN); cprintf("%s", "GREEN");
   	textcolor(LIGHTGRAY); cprintf("%s", ", 3=");
   	textcolor(YELLOW); cprintf("%s", "YELLOW");
   	textcolor(LIGHTGRAY); cprintf("%s", ", 4=");
   	textcolor(LIGHTBLUE); cprintf("%s", "BLUE");
   	textcolor(LIGHTGRAY); cprintf("%s", "): ");
		cin>>colour1;
   }
   while(colour1!='1' && colour1!='2' && colour1!='3' && colour1!='4');
   if(colour1=='1')
   	col1=12;
   else
   if(colour1=='2')
   	col1=10;
   else
   if(colour1=='3')
   	col1=14;
   else
   	col1=9;
   do
   {
   	clrscr();
   	cprintf("%s%s", "\n\n And PLAYER 2's name?", "\n\n\r (1=");
   	textcolor(LIGHTRED); cprintf("%s", "RED");
   	textcolor(LIGHTGRAY); cprintf("%s", ", 2=");
   	textcolor(LIGHTGREEN); cprintf("%s", "GREEN");
   	textcolor(LIGHTGRAY); cprintf("%s", ", 3=");
   	textcolor(YELLOW); cprintf("%s", "YELLOW");
   	textcolor(LIGHTGRAY); cprintf("%s", ", 4=");
   	textcolor(LIGHTBLUE); cprintf("%s", "BLUE");
   	textcolor(LIGHTGRAY); cprintf("%s", "): ");
		cin>>colour2;
   }
   while(colour2!='1' && colour2!='2' && colour2!='3' && colour2!='4');
   if(colour2=='1')
   	col2=12;
   else
   if(colour2=='2')
   	col2=10;
   else
   if(colour2=='3')
   	col2=14;
   else
   	col2=9;
   textcolor(YELLOW);
   do
   {
   	clrscr();
   	cprintf("%s", "\n\n\n WHO WANTS TO PLAY AS 'X'? [press 1 or 2]: ");
    	cin>>check1;
    }
   while(check1<'1' || check1>'2');
   _setcursortype(_NOCURSOR);
   clrscr(); cout<<endl<<endl;
   cross(A,B,C,D,E,F,G,H,I);
   cout<<endl<<endl<<endl;
   textcolor(LIGHTBLUE);
   cprintf("%s", "                               NUMBERING ORDER");
   sleep(5);
   clrscr();
   _setcursortype(_NORMALCURSOR);
   do
   {
   	int chk=0;
      if(k%2==0)
      {
      	char ch1[20];    // ARRAY IS NEEDED FOR INPUTS LIKE '23' WHERE
         					  // 3 WILL BE IGNORED AND 2 WILL BE TAKEN AS
                          // PLAYER'S CHOICE
      	do
         {
            do
            {
            	cout<<endl<<endl;
   				cross(a,b,c,d,e,f,g,h,i);cout<<endl;
               if(check1=='1')
               {
               	textcolor(col1);
               	cprintf("%c%s%s", ' ', name1, "'s turn: "); cin>>ch1;
               	cout<<endl;
               }
               else
               {
               	textcolor(col2);
                  cprintf("%c%s%s", ' ', name2, "'s turn: "); cin>>ch1;
                  cout<<endl;
               }
               switch(ch1[0])
               {
               	case '1':if(a=='O' || a=='X')    // CHECKING IF SPOT IS
												               // ALREADY FILLED
                  			chk=1;
                  		 else
                         	{a='X';chk=0;}
                          break;
                  case '2':if(b=='O' || b=='X')
                  			chk=1;
                          else
                          	{b='X';chk=0;}
                          break;
                  case '3':if(c=='O' || c=='X')
                  			chk=1;
                  		 else
                  			{c='X';chk=0;}
                         break;
                  case '4':if(d=='O' || d=='X')
               				chk=1;
                  		 else
                        	{d='X';chk=0;}
                         break;
                  case '5':if(e=='O' || e=='X')
               					chk=1;
               			 else
                         	{e='X';chk=0;}
                         break;
                  case '6':if(f=='O' || f=='X')
               				chk=1;
               			 else
                         	{f='X';chk=0;}
                            break;
                  case '7': if(g=='O' || g=='X')
                  				chk=1;
                  		  else
                             {g='X';chk=0;}
                          break;
                  case '8':if(h=='O' || h=='X')
               				 chk=1;
               			  else
                        	  {h='X';chk=0;}
                          break;
                  case '9':if(i=='O' || i=='X')
               				 chk=1;
               			 else
                        	{i='X';chk=0;}
                         break;
               }
               clrscr();
            }
            while(ch1[0]<'1' || ch1[0]>'9');
         }
         while(chk==1);
      }
      else
      	{
         	char ch1[20];
         	do
            {
               do
               {
               	cout<<endl<<endl;
   					cross(a,b,c,d,e,f,g,h,i);cout<<endl;
                  if(check1=='2')
                  {
                     textcolor(col1);
                  	cprintf("%c%s%s", ' ', name1, "'s turn: ");cin>>ch1;
                     cout<<endl;
                  }
                  else
                  {
                     textcolor(col2);
                  	cprintf("%c%s%s", ' ', name2, "'s turn: ");cin>>ch1;
                     cout<<endl;
                  }
                  switch(ch1[0])
                  {
                  	case '1':if(a=='O' || a=='X')
                        			chk=1;
                     	      else
                        			{a='O';chk=0;}
                              break;
                     case '2':if(b=='O' || b=='X')
               						chk=1;
               					else
                        			{b='O';chk=0;}
                              break;
                     case '3':if(c=='O' || c=='X')
               						chk=1;
                     			else
                        			{c='O';chk=0;}
                              break;
                     case '4':if(d=='O' || d=='X')
               						chk=1;
               					else
                        			{d='O';chk=0;}
                              break;
                     case '5':if(e=='O' || e=='X')
               						chk=1;
               					else
                        			{e='O';chk=0;}
                              break;
                     case '6':if(f=='O' || f=='X')
               						chk=1;
               					else
                        			{f='O';chk=0;}
                              break;
                     case '7':if(g=='O' || g=='X')
               						chk=1;
               					else
                        			{g='O';chk=0;}
                        		break;
                     case '8':if(h=='O' || h=='X')
               						chk=1;
               					else
                        			{h='O';chk=0;}
                              break;
                     case '9':if(i=='O' || i=='X')
               						chk=1;
               					else
                        			{i='O';chk=0;}
                              break;
           			}
                  clrscr();
            	}
            	while(ch1[0]<'1' || ch1[0]>'9');
      		}
      		while(chk==1);
      	}
      	k++;
   	}
   	while(!(a==b && b==c && a!='\0')&&!(d==e && e==f && d!='\0')&&   
      		!(g==h && h==i && g!='\0')&&!(a==e && e==i && a!='\0')&&
            !(c==e && e==g && c!='\0')&&!(a==d && d==g && a!='\0')&&
            !(b==e && e==h && b!='\0')&&!(c==f && f==i && c!='\0')&&
			
            int(a+b+c+d+e+f+g+h+i)!=756);  // 5 'X' + 4 'O' = 756
    cout<<endl<<endl;
    cross(a,b,c,d,e,f,g,h,i);cout<<endl;  _setcursortype(_NOCURSOR);
    if(int(a+b+c+d+e+f+g+h+i)==756 && !(a==b && b==c)&&!(d==e && e==f)&&
       !(g==h && h==i)&&!(a==e && e==i)&&!(c==e && e==g)&&!(a==d && d==g)&&
       !(b==e && e==h)&&!(c==f && f==i))
    { textcolor(LIGHTBLUE); cprintf("%s", " It's a DRAW. Nobody wins");}
	 else
    if(k%2!=0 && check1=='1')
    {
       textcolor(col1);
       cprintf("%c%s%s", ' ', name1, " WINS!!!");
       cout<<'\a';
    }
   	else
    {
       textcolor(col2);
       cprintf("%c%s%s", ' ', name2, " WINS!!!");
       cout<<'\a';
    }
    sleep(4);  clrscr();
     _setcursortype(_NORMALCURSOR);
}


	// ONE PLAYER GAME FUNCTION

   
void oneplayergame()
{
	randomize();
   char pchoice, a='\0',b='\0',c='\0',d='\0',e='\0',f='\0',g='\0',h='\0',i='\0';
   char A='1', B='2', C='3', D='4', E='5', F='6', G='7', H='8', I='9', name[20];
   char colour;
   int k=2, col;
   textcolor(LIGHTGRAY);
   gotoxy(2,2);
   cprintf("%s", "What is your name? ");
   gets(name);
   do
   {
   	cprintf("%s%s", "\n\n What color would you like your name to appear in",
      		  "\n\n\r (1=");
   	textcolor(LIGHTRED); cprintf("%s", "RED");
   	textcolor(LIGHTGRAY); cprintf("%s", ", 2=");
   	textcolor(LIGHTGREEN); cprintf("%s", "GREEN");
   	textcolor(LIGHTGRAY); cprintf("%s", ", 3=");
   	textcolor(YELLOW); cprintf("%s", "YELLOW");
   	textcolor(LIGHTGRAY); cprintf("%s", ", 4=");
   	textcolor(LIGHTBLUE); cprintf("%s", "BLUE");
   	textcolor(LIGHTGRAY); cprintf("%s", "): ");
		cin>>colour;
      clrscr();
   }
   while(colour!='1' && colour!='2' && colour!='3' && colour!='4');
   if(colour=='1')
   	col=12;
   else
   if(colour=='2')
   	col=10;
   else
   if(colour=='3')
   	col=14;
   else
   	col=9;
   do
   {
   	gotoxy(2,2);
   	cprintf("%s", "PLAY AS "); textcolor(LIGHTRED);
   	cprintf("%c" , 'X'); textcolor(LIGHTGRAY);
   	cprintf("%s", " OR "); textcolor(YELLOW);
   	cprintf("%c", 'O'); textcolor(LIGHTGRAY);
   	cprintf("%s", " ? [input X or O] : ");cin>>pchoice;
   	clrscr();
   }
   while(pchoice!='x' && pchoice!='X' && pchoice!='o' && pchoice!='O');
   _setcursortype(_NOCURSOR);
   clrscr(); cout<<endl<<endl;
   cross(A,B,C,D,E,F,G,H,I);
   cout<<endl<<endl<<endl;
   textcolor(LIGHTBLUE);
   cprintf("%s", "                               NUMBERING ORDER");
   sleep(5);
   clrscr();
   _setcursortype(_NORMALCURSOR);
   if(pchoice=='o' || pchoice=='O')
   {
      int xpos=random(18)+1;    // RANDOM(2) DOESNT WORK OVER HERE FOR
      						    // SOME REASON
   	char ch1[20];
   	do
   	{
   		int chk=0;
      	if(k%2==0)
         {
         	cout<<endl<<endl;
         	cross(a,b,c,d,e,f,g,h,i);cout<<endl;
         	textcolor(WHITE);
         	cprintf("%s", "\n\n\n  COMPUTER'S TURN: ");
         	aix(a,b,c,d,e,f,g,h,i, xpos);
            clrscr();
         }
         else
      	{
      		do
         	{
            	do
               {
               	cout<<endl<<endl;
               	cross(a,b,c,d,e,f,g,h,i);cout<<endl;
            		textcolor(col);
               	cprintf("%s%s%s", "\n\n\n  ", name, "'s turn [1-9]: ");
                  cin>>ch1;cout<<endl;
                  switch(ch1[0])
                  {
         				case '1':if(a=='O' || a=='X')    // CHECKING IF SPOT IS
                     									      // ALREADY FILLED
               					chk=1;
               					else
                        		{a='O';chk=0;}break;
            			case '2':if(b=='O' || b=='X')
               					chk=1;
               					else
                              {b='O';chk=0;}break;
            			case '3':if(c=='O' || c=='X')
               					chk=1;
                              else
                              {c='O';chk=0;}break;
            			case '4':if(d=='O' || d=='X')
               					chk=1;
                              else
                              {d='O';chk=0;}break;
                     case '5':if(e=='O' || e=='X')
               					chk=1;
                              else
                              {e='O';chk=0;}break;
                     case '6':if(f=='O' || f=='X')
               					chk=1;
                              else
                              {f='O';chk=0;}break;
                     case '7':if(g=='O' || g=='X')
               					chk=1;
                              else
                              {g='O';chk=0;}break;
                     case '8':if(h=='O' || h=='X')
               					chk=1;
                              else
                              {h='O';chk=0;}break;
                     case '9':if(i=='O' || i=='X')
               					chk=1;
               					else
                        		{i='O';chk=0;}break;
                  }
                  clrscr();
               }
               while(ch1[0]<'1' || ch1[0]>'9');
            }
            while(chk==1);
        }
        k++;
    }
    while(!(a==b && b==c && a!='\0')&&!(d==e && e==f && d!='\0')&&
          !(g==h && h==i && g!='\0')&&!(a==e && e==i && a!='\0')&&
          !(c==e && e==g && c!='\0')&&!(a==d && d==g && a!='\0')&&
          !(b==e && e==h && b!='\0')&&!(c==f && f==i && c!='\0')&&
          int(a+b+c+d+e+f+g+h+i)!=756);
  }
  if(pchoice=='x' || pchoice=='X')
  {
      char ch1[20];
      do
      {
   		int chk=0;
         if(k%2==0)
         {
          	do
            {
            	do
               {
               	cout<<endl<<endl;
               	cross(a,b,c,d,e,f,g,h,i);cout<<endl;
            		textcolor(col);
                  cprintf("%s%s%s", "\n\n\n  ", name, "'s turn [1-9]: ");
                  cin>>ch1;cout<<endl;
                  switch(ch1[0])
                  {
         				case '1':if(a=='O' || a=='X')
               					chk=1;
                              else
                              {a='X';chk=0;}break;
            			case '2':if(b=='O' || b=='X')
               					chk=1;
                              else
                              {b='X';chk=0;}break;
                     case '3':if(c=='O' || c=='X')
               					chk=1;
                              else
                              {c='X';chk=0;}break;
                     case '4':if(d=='O' || d=='X')
               					chk=1;
                              else
                              {d='X';chk=0;}break;
                     case '5':if(e=='O' || e=='X')
               					chk=1;
                              else
                              {e='X';chk=0;}break;
                     case '6':if(f=='O' || f=='X')
               					chk=1;
                              else
                              {f='X';chk=0;}break;
                     case '7':if(g=='O' || g=='X')
               					chk=1;
               					else
                              {g='X';chk=0;}break;
                     case '8':if(h=='O' || h=='X')
               					chk=1;
                              else
                              {h='X';chk=0;}break;
                     case '9':if(i=='O' || i=='X')
               					chk=1;
                              else
                              {i='X';chk=0;}break;
                   }
                   clrscr();
               }
               while(ch1[0]<'1' || ch1[0]>'9');
            }
            while(chk==1);
         }
         else
         {
         	cout<<endl<<endl;
         	cross(a,b,c,d,e,f,g,h,i);cout<<endl;
         	textcolor(WHITE);
         	cprintf("%s", "\n\n\n  COMPUTER'S TURN: ");
         	aio(a,b,c,d,e,f,g,h,i);
            clrscr();
         }
         k++;
      }
      while(!(a==b && b==c && a!='\0')&&!(d==e && e==f && d!='\0')&&
      		!(g==h && h==i && g!='\0')&&!(a==e && e==i && a!='\0')&&
            !(c==e && e==g && c!='\0')&&!(a==d && d==g && a!='\0')&&
            !(b==e && e==h && b!='\0')&&!(c==f && f==i && c!='\0')&&
            int(a+b+c+d+e+f+g+h+i)!=756);
   }
   cout<<endl<<endl;
   cross(a,b,c,d,e,f,g,h,i);cout<<endl;
   _setcursortype(_NOCURSOR);
   if(int(a+b+c+d+e+f+g+h+i)==756 && !(a==b && b==c)&&!(d==e && e==f)&&
   		 !(g==h && h==i)&&!(a==e && e==i)&&!(c==e && e==g)&&!(a==d && d==g)&&
   		 !(b==e && e==h)&&!(c==f && f==i))
   {	textcolor(LIGHTBLUE);
   	cout<<"\n\n\a";cprintf("%s", "  ITS A DRAW!! NOBODY WINS");
   }
   else
   if((k%2!=0 && (pchoice=='o' || pchoice=='O')) ||
   	(k%2==0 && (pchoice=='x' || pchoice=='X')))
   {	textcolor(WHITE);
   	cout<<"\n\n\a";cprintf("%s","  YOU LOSE!!!! HA HA");
   }
   else
   {	textcolor(LIGHTGREEN);
   	cout<<"\n\n\a";cprintf("%s","  YOU WIN!!!!!");
   }
   sleep(4);  clrscr();
   _setcursortype(_NORMALCURSOR);
}

	// FINALLY, THE MAIN FUNCTION

   
void main()
{
  intro();
  clrscr();
  char temp;
  do
  {
  		char menuchoice= menu();
      temp=menuchoice;
      if(menuchoice=='1')
      	oneplayergame();
      else
      if(menuchoice=='2')
      	twoplayergame();
      else
      if(menuchoice=='3')
      	instruct();
  }
  while(temp!='4');
  if(temp=='4')
  {
  		clrscr();
      _setcursortype(_NOCURSOR);
      gotoxy(28,6);
      textcolor(YELLOW);
      cprintf("%s","HOPE YOU ENJOYED THE GAME");
      sleep(4);
  }
}
  










