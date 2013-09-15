/**************************************************************************
 *
 *	xando1p.cpp - A one player X and O program
 *
 *	Version 1.0
 *	Author: Pranav Menon <pranavmenon2468@gmail.com>
 *	Date: September 2010
 *
 *	Notes: Sometimes random() would consistently generate the same number in  
 *		   a user defined function. Worked around this by generating most
 *		   random numbers in main()
 **************************************************************************/
	
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>

/**
 *	Summary: Draws the 3x3 cross on the screen with the appropriate values for a,b,c,d,e,f etc.
 * 	Parameters: 1. 'a-i' are the 9 positions inside the grid (they are null initialy)
 *		    2. 'ypos' is the y-coordinate of the cursor
 *	Return: None
 */
 
void cross(char a,char b,char c,char d,char e,char f,char g,char h,char i, int ypos=wherey())  // MAKING THE CROSS
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

/**
 *	Summary: The logic used when the computer plays as 'X'
 * 	Parameters: 1. 'a-i' are the 9 positions inside the grid (they are null initialy)
 *				2. 'xpos' is a random number sent from the main function, used to randomize
 *                 the gameplay paths taken by the computer
 *	Return: None
 */							

// AI FOR 'X'
   
void aix(char &a, char &b, char &c, char &d, char &e, char &f, char &g, char &h, char &i, int &xpos) 
{
	sleep(2); char A=a, B=b, C=c, D=d, E=e, F=f, G=g, H=h, I=i; // Required to show input

   // For getting 3 'X' in a row

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


   // For blocking 2 'O' in a row
   

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
   
                                             // FIRST STEP 1 (put 'X' in corner)

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
	if(a=='X' && b=='\0' && c=='O' && d=='\0' && e=='\0' && f=='\0' && g=='\0' && h=='\0' && i=='\0') // IF 'O' IS PUT AT 3
		e='X';
	else
	if(a=='X' && b=='\0' && c=='O' && d=='O' && e=='X' && f=='X' && g=='\0' && h=='\0' && i=='O')  // CONTINUATION OF ABOVE MOVE
	{
		int r=random(2);
		if(r==0)
			b='X';
		else
			h='X';
	}
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

                                             // FIRST STEP 2 (put 'X' in middle)


	if(a=='\0' && b=='\0' && c=='\0' && d=='\0' && e=='\0' && f=='\0' && g=='\0' && h=='\0' && i=='\0')
		e='X';
   	else

   	// If 'O' is at ODD positions

   	if(a=='O' && b=='\0' && c=='\0'&& d=='\0' && e=='X'&& f=='\0'&& g=='\0'&& h=='\0'&& i=='\0' ||
      	a=='\0' && b=='\0' && c=='O'&& d=='\0' && e=='X'&& f=='\0'&& g=='\0'&& h=='\0'&& i=='\0' ||
      	a=='\0' && b=='\0' && c=='\0'&& d=='\0' && e=='X'&& f=='\0'&& g=='O'&& h=='\0'&& i=='\0' ||
      	a=='\0' && b=='\0' && c=='\0'&& d=='\0' && e=='X'&& f=='\0'&& g=='\0'&& h=='\0'&& i=='O'  )
   	{
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
      	if(a=='\0' && b=='\0' && c=='O'&& d=='\0' && e=='X'&& f=='\0'&& g=='\0'&& h=='\0'&& i=='\0' ||
           	a=='\0' && b=='\0' && c=='\0'&& d=='\0' && e=='X'&& f=='\0'&& g=='O'&& h=='\0'&& i=='\0')
      	{
      		int r=random(2);
         	if(r==0)
         		a='X';
         	if(r==1)
         		i='X';
      	}
   	}
   	else

   	// If 'O' is at EVEN positions

   	if(a=='\0' && b=='O' && c=='\0'&& d=='\0' && e=='X'&& f=='\0'&& g=='\0'&& h=='\0'&& i=='\0')
    {
     	int r=random(2);
        if(r==0)
       		g='X';
       	if(r==1)
       		i='X';
    }
    else
	if(a=='\0' && b=='\0' && c=='\0'&& d=='O' && e=='X'&& f=='\0'&& g=='\0'&& h=='\0'&& i=='\0')
    {
      	int r=random(2);
        if(r==0)
        	c='X';
        if(r==1)
         	i='X';
    }
    else
	if(a=='\0' && b=='\0' && c=='\0'&& d=='\0' && e=='X'&& f=='O'&& g=='\0'&& h=='\0'&& i=='\0')
    {
      	int r=random(2);
        if(r==0)
         	a='X';
         if(r==1)
         	g='X';
    }
    else
    if(a=='\0' && b=='\0' && c=='\0'&& d=='\0' && e=='X'&& f=='\0'&& g=='\0'&& h=='O'&& i=='\0')
    {
      	int r=random(2);
        if(r==0)
         	a='X';
        if(r==1)
         	c='X';
    }
   	else
   
    // In between fill-ups (Note: VH code)

   if((b=='\0' && e=='X' && h=='\0') && (d!='\0' || f!='\0'))
   {
   	int r=random(2);
      if(r==0)
      	b='X';
      if(r==1)
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

   // To fill up the last position

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

   // For showing the inputted number on the screen
   
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

/**
 *	Summary: The logic used when the computer plays as 'O'
 * 	Parameters: 1. 'a-i' are the 9 positions inside the grid (they are null initialy)
 *	Return: None
 */	
 
// AI FOR 'O'
                                    
void aio(char &a, char &b, char &c, char &d, char &e, char &f, char &g, char &h, char &i)
{
  sleep(2); char A=a, B=b, C=c, D=d, E=e, F=f, G=g, H=h, I=i;   	  // Required to show input
  
  // Required since 'X' can be put at any of the 4 corners/middle squares
  
  char &a1=c, &b1=f, &c1=i, &d1=b, &e1=e, &f1=h, &g1=a, &h1=d, &i1=g;
  char &a2=i, &b2=h, &c2=g, &d2=f, &e2=e, &f2=d, &g2=c, &h2=b, &i2=a; 
  char &a3=g, &b3=d, &c3=a, &d3=h, &e3=e, &f3=b, &g3=i, &h3=f, &i3=c;

  // For getting 3 'O' in a row

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


   // For blocking 2 'X' in a row
   

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


			        	// If first 'X' is put in a corner

   // 'X' at 1
   // Always best to put 'O' at center

   if(a=='X' && b=='\0' && c=='\0' && d=='\0' && e=='\0' && f=='\0' && g=='\0' && h=='\0' && i=='\0')
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

   // 'X' at 3
   // Repitition of above

   if(a1=='X' && b1=='\0' && c1=='\0' && d1=='\0' && e1=='\0' && f1=='\0' && g1=='\0' && h1=='\0' && i1=='\0')
   	e1='O';
   else
   if(a1=='X' && b1=='\0' && c1=='\0' && d1=='\0' && e1=='O' && f1=='X' && g1=='\0' && h1=='\0' && i1=='\0')
   	h1='O';
   else
   if(a1=='X' && b1=='\0' && c1=='\0' && d1=='\0' && e1=='O' && f1=='\0' && g1=='\0' && h1=='X' && i1=='\0')
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

   // 'X' at 9
   // Repitition of above

   if(a2=='X' && b2=='\0' && c2=='\0' && d2=='\0' && e2=='\0' && f2=='\0' && g2=='\0' && h2=='\0' && i2=='\0')
   	e2='O';
   else
   if(a2=='X' && b2=='\0' && c2=='\0' && d2=='\0' && e2=='O' && f2=='X' && g2=='\0' && h2=='\0' && i2=='\0')
   	h2='O';
   else
   if(a2=='X' && b2=='\0' && c2=='\0' && d2=='\0' && e2=='O' && f2=='\0' && g2=='\0' && h2=='X' && i2=='\0')
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

   // 'X' at 7
   // Repitition of above

   if(a3=='X' && b3=='\0' && c3=='\0' && d3=='\0' && e3=='\0' && f3=='\0' && g3=='\0' && h3=='\0' && i3=='\0')
   	e3='O';
   else
   if(a3=='X' && b3=='\0' && c3=='\0' && d3=='\0' && e3=='O' && f3=='X' && g3=='\0' && h3=='\0' && i3=='\0')
   	h3='O';
   else
   if(a3=='X' && b3=='\0' && c3=='\0' && d3=='\0' && e3=='O' && f3=='\0' && g3=='\0' && h3=='X' && i3=='\0')
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

                                 // If first 'X' is put in a middle square

   // 'X' at 2
   // Always best to put 'O' at center

   if(a=='\0' && b=='X' && c=='\0' && d=='\0' && e=='\0' && f=='\0' && g=='\0' && h=='\0' && i=='\0')
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

   // 'X' at 6
   // Repitition of above

	if(a1=='\0' && b1=='X' && c1=='\0' && d1=='\0' && e1=='\0' && f1=='\0' && g1=='\0' && h1=='\0' && i1=='\0')
   	e1='O';
   else
   if(a1=='X' && b1=='X' && c1=='O' && d1=='O' && e1=='O' && f1=='X' && g1=='X' && h1=='\0' && i1=='\0')
   	h1='O';
   else
   if(a1=='O' && b1=='X' && c1=='X' && d1=='X' && e1=='O' && f1=='O' && g1=='\0' && h1=='\0' && i1=='X')
   	h1='O';
   else
   if(a1=='\0' && b1=='X' && c1=='\0' && d1=='X' && e1=='O' && f1=='\0' && g1=='\0' && h1=='\0' && i1=='\0')   
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

   // 'X' at 8
   // Repitition of above

   if(a2=='\0' && b2=='X' && c2=='\0' && d2=='\0' && e2=='\0' && f2=='\0' && g2=='\0' && h2=='\0' && i2=='\0')
   	e2='O';
   else
   if(a2=='X' && b2=='X' && c2=='O' && d2=='O' && e2=='O' && f2=='X' && g2=='X' && h2=='\0' && i2=='\0')
   	h2='O';
   else
   if(a2=='O' && b2=='X' && c2=='X' && d2=='X' && e2=='O' && f2=='O' && g2=='\0' && h2=='\0' && i2=='X')
   	h2='O';
   else
   if(a2=='\0' && b2=='X' && c2=='\0' && d2=='X' && e2=='O' && f2=='\0' && g2=='\0' && h2=='\0' && i2=='\0')
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

   // 'X' at 4
   // Repitition of above

   if(a3=='\0' && b3=='X' && c3=='\0' && d3=='\0' && e3=='\0' && f3=='\0' && g3=='\0' && h3=='\0' && i3=='\0')
   	e3='O';
   else
   if(a3=='X' && b3=='X' && c3=='O' && d3=='O' && e3=='O' && f3=='X' && g3=='X' && h3=='\0' && i3=='\0')
   	h3='O';
   else
   if(a3=='O' && b3=='X' && c3=='X' && d3=='X' && e3=='O' && f3=='O' && g3=='\0' && h3=='\0' && i3=='X')
   	h3='O';
   else
   if(a3=='\0' && b3=='X' && c3=='\0' && d3=='X' && e3=='O' && f3=='\0' && g3=='\0' && h3=='\0' && i3=='\0')
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

   										// If first 'X' is at center

   // Always best to put 'O' at corner
   
   if(a=='\0' && b=='\0' && c=='\0' && d=='\0' && e=='X' && f=='\0' && g=='\0' && h=='\0' && i=='\0')
   	a='O';
   else

   	// if second 'X' is at 2


   if(a=='O' && b=='X' && c=='O' && d=='\0' && e=='X' && f=='\0' && g=='X' && h=='O' && i=='X')
   	d='O';
   else
   if(a=='O' && b=='X' && c=='\0' && d=='X' && e=='X' && f=='O' && g=='\0' && h=='O' && i=='X')
   	g='O';
   else
   if(a=='O' && b=='X' && c=='\0' && d=='\0' && e=='X' && f=='\0' && g=='\0' && h=='O' && i=='X')
   	d='O';
   else

   	// if second 'X' is at 3

   if(a=='O' && b=='\0' && c=='X' && d=='X' && e=='X' && f=='O' && g=='O' && h=='\0' && i=='X')
   	b='O';
   else

   	// if second 'X' is at 9

   if(a=='O' && b=='\0' && c=='\0' && d=='\0' && e=='X' && f=='\0' && g=='\0' && h=='\0' && i=='X')
   	c='O';
   else
   
   // takes care of second 'X' at 7 as well
   
   if(a=='O' && b=='X' && c=='O' && d=='\0' && e=='X' && f=='\0' && g=='X' && h=='O' && i=='X')    
   	d='O';
   else

	// if second 'X' is at 4

  	if(a=='O' && b=='X' && c=='\0' && d=='X' && e=='X' && f=='O' && g=='\0' && h=='O' && i=='X')
   	c='O';
   else
   if(a=='O' && b=='\0' && c=='X' && d=='X' && e=='X' && f=='O' && g=='O' && h=='\0' && i=='X')
   	b='O';
   else
   if(a=='O' && b=='\0' && c=='\0' && d=='X' && e=='X' && f=='O' && g=='\0' && h=='\0' && i=='X')
   	b='O';
   else

   // 'Diagonals' code (needed for the case when first 'X' is in a middle square)

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

   // 'VH' code (important for many in between fill-ups)

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

   // For showing the inputted number on the screen
   
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

void main()
{
	char redo[20];	// 'redo' will store a "Y/N" character at the end of the game
	randomize();
    do
    {
		randomize();
		char pchoice, a='\0',b='\0',c='\0',d='\0',e='\0',f='\0',g='\0',h='\0',i='\0';
		
		int k=2; // 'k' is an iterator whose number indicates whose turn it is
	   
		do
		{
			textcolor(LIGHTGRAY);
			gotoxy(2,2);
			cprintf("%s", "PLAY AS "); textcolor(LIGHTRED);
			cprintf("%c" , 'X'); textcolor(LIGHTGRAY);
			cprintf("%s", " OR "); textcolor(LIGHTBLUE);
			cprintf("%c", 'O'); textcolor(LIGHTGRAY);
			cprintf("%s", " ? [input X or O] : ");cin>>pchoice;
			clrscr();
		}
		while(pchoice!='x' && pchoice!='X' && pchoice!='o' && pchoice!='O');
		
		// Starting a game, user plays as 'O'
		
		if(pchoice=='o' || pchoice=='O')
		{
			int xpos=random(18)+1;    // random(2) doesn't work over here for some reason
			char ch1[20]; 
			do
			{
				int chk=0; cout<<endl<<endl;
				cross(a,b,c,d,e,f,g,h,i);cout<<endl;
				if(k%2==0)		
				{
					// Computer's turn 
					
					textcolor(LIGHTGREEN);
					cprintf("%s", "  COMPUTER'S TURN: ");
					aix(a,b,c,d,e,f,g,h,i, xpos);
				}
				else
				{
					// Player's turn
					
					do
					{
						do
						{
							textcolor(LIGHTGREEN);
							cprintf("%s", "  PLAYER's turn [1-9]: ");
							cin>>ch1 ;cout<<endl;
							
							// Checking if spot is already filled
							
							switch(ch1[0])		
							{
								case '1':if(a=='O' || a=='X')    					           
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
						}
						while(ch1[0]<'1' || ch1[0]>'9'); // repeat this loop if input is invalid 
					}
					while(chk==1);
				}
				k++;
				clrscr();
			}
			while(!(a==b && b==c && a!='\0')&&!(d==e && e==f && d!='\0')&&
					!(g==h && h==i && g!='\0')&&!(a==e && e==i && a!='\0')&&
					!(c==e && e==g && c!='\0')&&!(a==d && d==g && a!='\0')&&
					!(b==e && e==h && b!='\0')&&!(c==f && f==i && c!='\0')&&
					int(a+b+c+d+e+f+g+h+i)!=756);    //sum of 5 X and 4 O is 756
		}
		
		// Starting a game, user plays as 'X'
		
		if(pchoice=='x' || pchoice=='X')
		{
			char ch1[20];
			do
			{
				int chk=0; cout<<endl<<endl;
				cross(a,b,c,d,e,f,g,h,i);cout<<endl;
				if(k%2==0)
				{
					// Player's turn
					
					do
					{
						do
						{
							textcolor(LIGHTGREEN);
							cprintf("%s", "  PLAYER's turn [1-9]: ");
							cin>>ch1; cout<<endl;
								
							// Checking if spot is already filled
								
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
						}
						while(ch1[0]<'1' || ch1[0]>'9');
					}
					while(chk==1);
      			}
      			else
            	{
					// Computer's turn
					
            		textcolor(LIGHTGREEN);
         		  	cprintf("%s", "  COMPUTER'S TURN: ");
         			aio(a,b,c,d,e,f,g,h,i);
            	}
            	k++;
            	clrscr();
			}
			while(!(a==b && b==c && a!='\0')&&!(d==e && e==f && d!='\0')&&!(g==h && h==i && g!='\0')&&!(a==e && e==i && a!='\0')&&!(c==e && e==g && c!='\0')&&!(a==d && d==g && a!='\0')&&!(b==e && e==h && b!='\0')&&!(c==f && f==i && c!='\0')&&int(a+b+c+d+e+f+g+h+i)!=756);
		}
     	cout<<endl<<endl;    
		cross(a,b,c,d,e,f,g,h,i);cout<<endl;
		
		// End game messages
		
		if(int(a+b+c+d+e+f+g+h+i)==756 && !(a==b && b==c)&&!(d==e && e==f)&&!(g==h && h==i)&&!(a==e && e==i)&&!(c==e && e==g)&&!(a==d && d==g)&&!(b==e && e==h)&&!(c==f && f==i))
		{	
			textcolor(LIGHTBLUE);
			cout<<"\n\n\a";cprintf("%s", " ITS A DRAW!! NOBODY WINS");
		}
		else
		if((k%2!=0 && (pchoice=='o' || pchoice=='O')) || (k%2==0 && (pchoice=='x' || pchoice=='X')))
		{	
			textcolor(LIGHTRED);
			cout<<"\n\n\a";cprintf("%s"," YOU LOSE!!!! HA HA");
		}
		else
		{	
			textcolor(LIGHTGREEN);
			cout<<"\n\n\a";cprintf("%s"," YOU WIN!!!!!");
		}
		textcolor(YELLOW);
		do
		{
			cout<<"\n\n";cprintf("%s"," PLAY AGAIN [Y/N]? ");cin>>redo;
		}
		while(redo[0]!='Y' && redo[0]!='y' && redo[0]!='n' && redo[0]!='N');

		clrscr();
	}
	while(redo[0]=='y' || redo[0]=='Y');
	if(redo[0]=='n' || redo[0]=='N')
	{	
		cout<<endl<<endl<<endl<<endl<<endl; _setcursortype(_NOCURSOR);
		cprintf("%s", "                         HOPE YOU ENJOYED THE GAME");
		sleep(5); 
	}
}

