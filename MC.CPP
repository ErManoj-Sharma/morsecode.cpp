#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<dos.h>

void dot()
{        	sound(400);
		delay(50);
		nosound();
		delay(100);
}
void dash()
{       sound(400);
	delay(300);
	nosound();
	delay(100);
}



void main()
{clrscr();
char a[30],b;
 for(int i=0;i<=10;i++)
{ cin>>a[i];
 b=a[i];
  switch(b)
{
case 'a':  cout<<"  * ";
	      dot();
cout<<"-  ";
	      dash();
		break;
case 'b': cout<<"  - ";
	       dash();
cout<<" * ";
	       dot();
cout<<" * ";
	       dot();
cout<<" *  ";
	       dot();
		break;
case 'c': cout<<"  -";
		 dash();
cout<<" * ";
		 dot();
cout<<" - "	;	
 		dash();
cout<<" *  ";	
	 	dot();
		break;
case 'd':  cout<<"  -";
		dash();
cout<<" * ";
		dot();
cout<<" *  ";
		dot();
		break;
case 'e': cout<<"  *  ";
		
		dot();
		
	break;
case 'f': cout<<"  * ";
		dot();
cout<<" * ";
		dot();
cout<<" - ";
                                      dash();
cout<<" *  ";
                                      dot();
	break;
case 'g': cout<<" - - - * ";
	dash();
dash();
dash();
dot();
	break;
case 'h':cout<<" * * * * ";
	dot();
dot();
dot();
dot();
break;
case 'i':  cout<<" * * ";
	dot();
                   dot();
break;
case 'j': cout<<" * - - - ";
	dot();
dash(); 
dash();
dash();
break;
case 'k': cout<<" - * - ";
	dash();
dot();
dash();
break;
case 'l':  cout<<" * - * * ";
	dot();
dash();
dot(); dot();
break;
case 'm': cout<<" - - ";
	dash();
dash();
break;
case 'n': cout<<" - * ";
	dash();
dot();
break;
case 'o':  cout<<" - - - ";
	dash();
dash();
dash();
break;
case 'p': cout<<" * - - * ";
dot();	
dash();
dash();
dot();
break;
case 'q': cout<<" - - * - ";
	dash();
dash();
dot();
dash();

break;
case 'r':  cout<<" * - * ";
	dot();
dash();
dot();
break;
case 's': cout<<" * * * ";
	dot();
dot();
dot();
break;
case 't': cout<<" - ";
	dash();
break;
case 'u':  cout<<" * * - ";
	dot();
dot();
dash();

break;
case 'v': cout<<" * * * - ";
	dot();
dot();
dot();
dash();
break;
case 'w': cout<<" * - - ";
	dot();
dash();
dash();
break;
case 'x':  cout<<" -";
dash();
cout<<"*";
dot();
cout<<"*";
dot();
cout<<"- ";
dash();

break;
case 'y': cout<<" - * - - ";
	sound(400);
	delay(300);
	nosound();
	delay(100);
	sound(400);
	delay(50);
	nosound();
	delay(100);

	sound(400);
	delay(300);
	nosound();
	delay(100);
	sound(400);
	delay(300);
	nosound();
	delay(100);
break;
case 'z': cout<<" - - * * ";

	sound(400);
	delay(300);
	nosound();
	delay(100);
	sound(400);
	delay(300);
	nosound();
	delay(100);

	sound(400);
	delay(50);
	nosound();
	delay(100);
	sound(400);
	delay(50);
	nosound();
	delay(100);
break;
default:nosound();
	delay(700);
}
}

getch();
}
