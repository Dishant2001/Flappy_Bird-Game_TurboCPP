#include<stdio.h>
#include<conio.h>
#include<dos.h>
void scoreboard(int score)
{
	window(1,1,10,2);
	textcolor(RED);
	textbackground(BLACK);
	cprintf("SCORE %d",score);
}
void bird(int a,int b,int o)
{
	window(a,b,a+5,b+1);
	textcolor(GREEN);
	textbackground(BLACK);
	if(o==0)
	cprintf(">/<");
	else
	cprintf(">\\)");
}
void main()
{
	char c,j;
	int k=2,h=10,t=-1,start=2,iter=1,score=0,temp=1;
	clrscr();
	_setcursortype(_NOCURSOR);
	while(1)
	{       textcolor(RED);
		if(kbhit())
		{
			c=getch();
			if(c==27||c=='e')
			{        clrscr();
				 break;   }
			else if(c=='j'||c==32)
			t=1;
		}
		else if(iter%2!=0){
		window(30,1,80,25);
		textcolor(GREEN);
		textbackground(BLACK);
		cprintf("###           ###                  ###          ###");
		cprintf("###           ###                  ###          ###");
		cprintf("###           ###                  ###          ###");
		cprintf("###           ###                  ###          ###");
		cprintf("###           ###                  ###          ###");
		cprintf("###           ###                  ###          ###");
		cprintf("###                                ###          ###");
		cprintf("###                                ###          ###");
		cprintf("###                                             ###");
		cprintf("                                                ###");
		cprintf("                                                ###");
		cprintf("                                                ###");
		cprintf("              ###                                  ");
		cprintf("              ###                                  ");
		cprintf("###           ###                  ###             ");
		cprintf("###           ###                  ###             ");
		cprintf("###           ###                  ###             ");
		cprintf("###           ###                  ###          ###");
		cprintf("###           ###                  ###          ###");
		cprintf("###           ###                  ###          ###");
		cprintf("###           ###                  ###          ###");
		cprintf("###           ###                  ###          ###");
		cprintf("###           ###                  ###          ###");
		cprintf("###           ###                  ###          ###");
		if(t==1)
		{
			bird(++k%80,h--,0);
			t=-1;
			if((k==30&&(h<=11||h>=15))||(k==44&&(h<=8||h>=13))||(k==65&&(h<=10||h>=15))||(k==78&&(h<=16||h>=20)))
			{
				temp=0;clrscr();
				break;
			}
		}
		else{
			bird(++k%80,h++,1);
			if((k==30&&(h<=11||h>=15))||(k==44&&(h<=8||h>=13))||(k==65&&(h<=10||h>=15))||(k==78&&(h<=16||h>=20)))
			{
				temp=0;clrscr();
				break;
			}
		}
		delay(100);
		clrscr();
		}
		else if(iter%2==0)
		{
		window(15,1,80,25);
		textcolor(GREEN);
		textbackground(BLACK);
		cprintf("###           ###                  ###          ###            ###");
		cprintf("###           ###                  ###          ###            ###");
		cprintf("###           ###                  ###          ###            ###");
		cprintf("###           ###                  ###          ###            ###");
		cprintf("###           ###                  ###          ###            ###");
		cprintf("###           ###                  ###          ###               ");
		cprintf("###                                ###          ###               ");
		cprintf("###                                ###          ###               ");
		cprintf("###                                             ###               ");
		cprintf("                                                ###               ");
		cprintf("                                                                  ");
		cprintf("                                                                  ");
		cprintf("                                                                  ");
		cprintf("                                                                  ");
		cprintf("                                   ###                            ");
		cprintf("                                   ###                            ");
		cprintf("                                   ###                            ");
		cprintf("###                                ###                            ");
		cprintf("###                                ###                         ###");
		cprintf("###                                ###                         ###");
		cprintf("###           ###                  ###                         ###");
		cprintf("###           ###                  ###          ###            ###");
		cprintf("###           ###                  ###          ###            ###");
		cprintf("###           ###                  ###          ###            ###");
		if(t==1)
		{
			bird(++k%80,h--,0);
			t=-1;
			if((k==15&&(h<=11||h>=18))||(k==29&&(h<=8||h>=21))||(k==50&&(h<=10||h>=15))||(k==63&&(h<=12||h>=22))||(k==78&&(h<=7||h>=19)))
			{
				temp=0;
				break;
			}
		}
		else{
			bird(++k%80,h++,1);
			if((k==15&&(h<=11||h>=18))||(k==29&&(h<=8||h>=21))||(k==50&&(h<=10||h>=15))||(k==63&&(h<=12||h>=22))||(k==78&&(h<=7||h>=19)))
			{
				temp=0;
				break;
			}
		}
		delay(100);
		clrscr();
		}
		score++;
		scoreboard(score);
		start++;
		if(start%80==0)
		  ++iter;
	}
	if(temp==0)
	{
		clrscr();
		printf("GAME OVER!!\n");
		printf("YOUR SCORE: %d",score);
		delay(2000);
	}
	else
	{
		clrscr();
		printf("THANK YOU\nYOUR SCORE: %d",score);
	}
	getch();
}