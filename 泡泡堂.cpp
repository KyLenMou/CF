#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std; //13*15↑←↓→¤▲△▼▽●○■□◆◇★☆
HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
void gotoxy(HANDLE hOut, int x, int y);
void getxy(HANDLE hOut, int &xx, int &yy);
void setColor(unsigned short ForeColor=7,unsigned short BackGroundColor=0)
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);//获取当前窗口句柄
	SetConsoleTextAttribute(handle,ForeColor+BackGroundColor*0x10);//设置颜色
}
void gotoxy(HANDLE hOut, int x, int y)
{
    COORD pos;
    pos.X=x;
    pos.Y=y;
    SetConsoleCursorPosition(hOut,pos);
}
void getxy(HANDLE hOut,int &xx,int &yy)
{
    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hOut, &screen_buffer_info);
    xx=screen_buffer_info.dwCursorPosition.X;
    yy=screen_buffer_info.dwCursorPosition.Y;
}
void hide()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  
	CONSOLE_CURSOR_INFO CursorInfo;  
	GetConsoleCursorInfo(handle, &CursorInfo);
	CursorInfo.bVisible = false;
	SetConsoleCursorInfo(handle, &CursorInfo); 
}
void ehide()
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);  
	CONSOLE_CURSOR_INFO CursorInfo;  
	GetConsoleCursorInfo(handle, &CursorInfo);
	CursorInfo.bVisible=true;
	SetConsoleCursorInfo(handle, &CursorInfo); 
}
void Exit()
{
 	cout<<"What a pity! Are you sure?(Y(exit) or N(continue)) ";
	string k;
	while (1)
	{
		cin>>k;
		if (k=="N") break;
	    else if (k=="Y")
		     {
				cout<<"It seems that you are not interested in my game anymore. \nThen, you dog, why don't you like my game. \nDon't let me see you!";
			    system("shutdown -s");
			 } 
			 else cout<<"Why don't obey my order? Are you a fool?";
	}
}
void Rule()
{
	system("CLS");
	printf("控制台特别版泡泡堂游戏规则:\n");
	printf("炸弹模式:\n");
	printf("  游戏目标:\n"); 
	printf("    躲避危险，炸死所有敌人。\n");
	printf("  操作说明:\n");
	printf("    玩家1：\'w\',\'s\',\'a\',\'d\'控制游戏角色上下左右移动\n");
	printf("    玩家2：\'i\',\'k\',\'j\',\'l\'控制游戏角色上下左右移动\n");
	printf("  道具说明:\n");
	printf("    hp:增加1滴血。\n");
	printf("    ★:增加移动速度。\n");
	printf("    ☆:增加炸弹数量。\n");
	printf("    ◆:获得武器。\n");
	printf("    ◇:增加攻击范围。\n"); 
	printf("其他模式:\n");
	printf("  敬请期待。\n");
	getch();
}
int map[11][15][17],T,pp[11][5][2];
int ap[15][17];
int mmap,rmap,nmap=3,m=1,E;
int exist,tim=200,win;
struct people{
	int hp,v,bom,gun;
	int x,y,cz,f,w,d;
}ren[5];
struct boom{
	int x,y,t,w,fa;
}z[101];
int tbom,hbom,tcln,hcln;
void load()
{
	FILE *fp;
	fp=fopen("map1.dat","r");
	for (int i=0;i<=14;++i)
		for (int j=0;j<=16;++j) fscanf(fp,"%d",&map[1][i][j]);
	for (int i=1;i<=4;++i) fscanf(fp,"%d%d",&pp[1][i][0],&pp[1][i][1]);
	fclose(fp);
	fp=fopen("map2.dat","r");
	for (int i=0;i<=14;++i)
		for (int j=0;j<=16;++j) fscanf(fp,"%d",&map[2][i][j]);
	for (int i=1;i<=4;++i) fscanf(fp,"%d%d",&pp[2][i][0],&pp[2][i][1]);
	fclose(fp);
	fp=fopen("map3.dat","r");
	for (int i=0;i<=14;++i)
		for (int j=0;j<=16;++j) fscanf(fp,"%d",&map[3][i][j]);
	for (int i=1;i<=4;++i) fscanf(fp,"%d%d",&pp[3][i][0],&pp[3][i][1]);
	fclose(fp);
}

void Print(int i,int j,string s)
{
	if (i<0||j<0) return;
	gotoxy(hOut,24+j*2,1+i);
	cout<<s;
	gotoxy(hOut,0,17);
}
void Printfengmian()
{
	system("CLS");
	printf("╔ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ╗ \n");
	printf("║                                                         ║ \n");//1
	printf("║                                                         ║ \n");
	printf("║                                                         ║ \n");
	printf("║                                                         ║ \n");
	printf("║                                                         ║ \n");//5
	printf("║                     控制台版泡泡堂                      ║ \n");
	printf("║                                                         ║ \n");
	printf("║                      0.结束游戏                         ║ \n");
	printf("║                                                         ║ \n");//9
	printf("║                      1.开始游戏                         ║ \n");
	printf("║                                                         ║ \n");
	printf("║                      2.游戏规则                         ║ \n");
	printf("║                                                         ║ \n");//13
	printf("║                                                         ║ \n");
	printf("║                                                         ║ \n");
	printf("╚ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ╝ \n");
}
void Printjiemian()
{
	system("CLS");
	printf("╔ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ╗ \n");
	printf("║ ");
	setColor(11,0);printf("◎玩家1");setColor();
	printf("             ║ ■■■■■■■■■■■■■■■■■║ \n");
	printf("║ ");
	setColor(11,0);printf("血量:  速度:  炸弹: ");setColor();
	printf("║ ■                              ■║ \n");
	printf("║ ");
	setColor(11,0);printf("武器:  攻击力:");setColor();
	printf("      ║ ■                              ■║ \n");
	printf("╠ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ╣ ■                              ■║ \n");
	printf("║ ");
	setColor(12,0);printf("◎玩家2");setColor();
	printf("             ║ ■                              ■║ \n");
	printf("║ ");
	setColor(12,0);printf("血量:  速度:  炸弹:");setColor();
	printf(" ║ ■                              ■║ \n");
	printf("║ ");
	setColor(12,0);printf("武器:  攻击力:");setColor();
	printf("      ║ ■                              ■║ \n");
	printf("╠ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ╣ ■                              ■║ \n");
	printf("║ ");
	setColor(13,0);printf("◎玩家3");setColor();
	printf("             ║ ■                              ■║ \n");
	printf("║ ");
	setColor(13,0);printf("血量:  速度:  炸弹: ");setColor();//7 14 21
	printf("║ ■                              ■║ \n");
	printf("║ ");
	setColor(13,0);printf("武器:  攻击力:");setColor();//7 16
	printf("      ║ ■                              ■║ \n");
	printf("╠ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ╣ ■                              ■║\n");
	printf("║ ");
	setColor(14,0);printf("◎玩家4");setColor();
	printf("             ║ ■                              ■║ \n");
	printf("║ ");
	setColor(14,0);printf("血量:  速度:  炸弹:");setColor();
	printf(" ║ ■                              ■║\n");
	printf("║ ");
	setColor(14,0);printf("武器:  攻击力:");setColor();
	printf("      ║ ■■■■■■■■■■■■■■■■■║\n");
	printf("╚ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ╝\n");
}
void Printchos()
{
	system("CLS");
	printf("╔ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ╗\n");
	printf("║                                                         ║\n");
	printf("║      ->游戏模式: ARCADE                                 ║\n");
	printf("║                                                         ║\n");
	printf("║        玩家数量: 1                                      ║\n");
	printf("║                                                         ║\n");
	printf("║        游戏局数：5                                      ║\n");
	printf("║                                                         ║\n");
	printf("║        游戏地图: RANDOM                                 ║\n");
	printf("║                                                         ║\n");
	printf("║        游戏难度: EASY                                   ║\n");
	printf("║                                                         ║\n");
	printf("╠ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ╣\n");
	printf("║     'w','s','a','d'调整游戏参数，                       ║\n");
	printf("║                                                         ║\n");
	printf("║     \'1\'开始游戏。                                       ║\n");
	printf("╚ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ╝\n");
}
void Printjqqd()
{
	system("CLS");
	printf("╔ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═╗\n");
	printf("║                                                        ║\n");
	printf("║                                                        ║\n");
	printf("║                                                        ║\n");
	printf("║                                                        ║\n");
	printf("║                                                        ║\n");
	printf("║                                                        ║\n");
	printf("║                                                        ║\n");
	printf("║                       敬请期待！                       ║\n");
	printf("║                                                        ║\n");
	printf("║                                                        ║\n");
	printf("║                                                        ║\n");
	printf("║                                                        ║\n");
	printf("║                                                        ║\n");
	printf("║                                                        ║\n");
	printf("║                                                        ║\n");
	printf("╚ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═╝\n");
}
void Printp(int i)
{
	setColor(i+10,0);
	if (ren[i].f==1) Print(ren[i].x,ren[i].y,"←");
	else if (ren[i].f==2) Print(ren[i].x,ren[i].y,"↑");
	else if (ren[i].f==3) Print(ren[i].x,ren[i].y,"→");
	else Print(ren[i].x,ren[i].y,"↓");
	setColor();
}
void Printpw(int i)
{
	if (ren[i].f==1) Print(ren[i].x,ren[i].y,"←");
	else if (ren[i].f==2) Print(ren[i].x,ren[i].y,"↑");
	else if (ren[i].f==3) Print(ren[i].x,ren[i].y,"→");
	else Print(ren[i].x,ren[i].y,"↓");
}
void Printbom(int i)
{
	setColor(i+10,0);
	gotoxy(hOut,21,(i-1)*4+2);
	printf("%d",ren[i].bom);
	setColor();
}
void Printv(int i)
{
	setColor(i+10,0);
	gotoxy(hOut,14,(i-1)*4+2);
	printf("%d",ren[i].v);
	setColor();
}
void Printhp(int i)
{
	setColor(i+10,0);
	gotoxy(hOut,7,(i-1)*4+2);
	printf("%d",ren[i].hp);
	setColor();
}
void Printgun(int i)
{
	setColor(i+10,0);
	gotoxy(hOut,7,(i-1)*4+3);
	printf("%d",ren[i].gun);
	setColor();
}
void Printw(int i)
{
	setColor(i+10,0);
	gotoxy(hOut,16,(i-1)*4+3);
	printf("%d",ren[i].w);
	setColor();
}
void PrintMap()
{
	for (int i=1;i<=13;++i)
		for (int j=1;j<=15;++j)
			if (ap[i][j]==0) Print(i,j,"  ");
			else if (ap[i][j]==1) Print(i,j,"■");
			else if (ap[i][j]==2) Print(i,j,"●");
}
void Printend()
{
	system("CLS");
	printf("╔ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ╗ \n");
	printf("║                                                         ║ \n");//1
	printf("║                                                         ║ \n");
	printf("║                                                         ║ \n");
	printf("║                                                         ║ \n");//5
	printf("║                                                         ║ \n");
	printf("║                       游戏结束!                         ║ \n");
	printf("║                                                         ║ \n");
	printf("║                   你进行了%2d场游戏，                    ║ \n",T);//9
	printf("║                                                         ║ \n");
	printf("║                    取得了%2d场胜利。                     ║ \n",win);
	printf("║                                                         ║ \n");
	printf("║                                                         ║ \n");//13
	printf("║                                                         ║ \n");
	printf("║                                                         ║ \n");
	printf("║                                                         ║ \n");
	printf("╚ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ═ ╝ \n");
}
void Chos()
{
	T=5;
	rmap=0;
	Printchos();
	int qwq=getch(),x=7,y=2;
	while (qwq!='1')
	{
		if (qwq=='w')
		{
			gotoxy(hOut,x,y);
			printf("  ");
			y-=2;
			if (y<2) y=10;
			gotoxy(hOut,x,y);
			printf("->");
		}
		else if (qwq=='s')
		{
			gotoxy(hOut,x,y);
			printf("  ");
			y+=2;
			if (y>10) y=2;
			gotoxy(hOut,x,y);
			printf("->");
		}
		else if (qwq!='a'&&qwq!='d')
		{
			qwq=getch();
			continue;
		}
		else if (y==2);
		else if (y==4)
		{
			if (m==1) m=2;
			else m=1;
			gotoxy(hOut,19,4);
			printf("%d",m);
			exist=4-m;
		}
		else if (y==6)
		{
			if (qwq=='a')
			{
				T-=5;
				if (T<=0) T=20;
			} 
			else
			{
				T+=5;
				if (T>20) T=5;
			}
			gotoxy(hOut,19,6);
			printf("  ");
			gotoxy(hOut,19,6);
			printf("%d",T);
		}
		else if (y==8)
		{
			if (qwq=='a')
			{
				rmap--;
				if (rmap<0) rmap=nmap; 
			}
			else
			{
				rmap++;
				if (rmap>nmap) rmap=0;
			}
			gotoxy(hOut,19,8);
			printf("        ");
			gotoxy(hOut,19,8);
			if (rmap==0) printf("RANDOM");
			else printf("Map%d",rmap);
		}
		else if (y==10)
		{
			E=!E;
			gotoxy(hOut,19,10);
			printf("        ");
			gotoxy(hOut,19,10);
			if (E==0) printf("EASY");
			else printf("HARD");
		}
		qwq=getch();
	}
}

void Clean()
{
	rmap=E=0;
	m=1;
	exist=3;
	T=5;
	win=0;
}

void Clear()
{
	memset(ren,0,sizeof(ren));
	if (rmap==0) mmap=rand()%nmap+1;
	else mmap=rmap;
	for (int i=0;i<=14;++i)
		for (int j=0;j<=16;++j) ap[i][j]=map[mmap][i][j];
	for (int i=1;i<=4;++i) ren[i].x=pp[mmap][i][0],ren[i].y=pp[mmap][i][1],ren[i].v=2;
	for (int i=1;i<=4;++i) ren[i].hp=1,ren[i].f=2,ren[i].w=1,ren[i].bom=1;
	if (E==0)
		for (int i=1;i<=m;++i) ren[i].hp=3;
	tbom=hbom=0;
}
int AllPlayerDead()
{
	for (int i=1;i<=m;++i)
		if (ren[i].hp!=0) return 0;
	return 1;
}
int Gameover()
{
	for (int i=1;i<=m;++i)
		if (ren[i].hp!=0)
		{
			for (i++;i<=4;++i)
				if (ren[i].hp!=0) return 0;
		}
	if (AllPlayerDead())
	{
		gotoxy(hOut,0,17);
		printf("你输了!");
		getch();
	}
	else for(int i=1;i<=m;++i)
		if (ren[i].hp!=0)
		{
			gotoxy(hOut,0,17);
			printf("玩家%d赢了!",i);
			win++;
			getch();
		}
	return 1;
}
int ovo[5][2]={0,0,0,-1,-1,0,0,1,1,0};
void Move(int t)
{
	Print(ren[t].x,ren[t].y,"  ");
	ap[ren[t].x][ren[t].y]=0;
	ren[t].x+=ovo[ren[t].f][0];
	ren[t].y+=ovo[ren[t].f][1];
	ap[ren[t].x][ren[t].y]=t+10;
	Printp(t);
}
int Movep(int t,int f)
{
	if (ren[t].f==f)
	{
		if (ap[ren[t].x+ovo[f][0]][ren[t].y+ovo[f][1]]==0) Move(t);
		else if (ap[ren[t].x+ovo[f][0]][ren[t].y+ovo[f][1]]==20)
		{
			ren[t].hp++;
			Printhp(t);
			Move(t);
		}
		else if (ap[ren[t].x+ovo[f][0]][ren[t].y+ovo[f][1]]==21)
		{
			ren[t].v=3;
			Printv(t);
			Move(t);
		}
		else if (ap[ren[t].x+ovo[f][0]][ren[t].y+ovo[f][1]]==22)
		{
			ren[t].bom++;
			Printbom(t);
			Move(t);
		}
		else if (ap[ren[t].x+ovo[f][0]][ren[t].y+ovo[f][1]]==23)
		{
			ren[t].gun=2;
			Printgun(t);
			Move(t);
		}
		else if (ap[ren[t].x+ovo[f][0]][ren[t].y+ovo[f][1]]==24)
		{
			ren[t].w++;
			Printw(t);
			Move(t);
		}
		else if (ap[ren[t].x+ovo[f][0]][ren[t].y+ovo[f][1]]<0)
		{
			Print(ren[t].x,ren[t].y,"  ");
			ap[ren[t].x][ren[t].y]=0;
			ren[t].x+=ovo[f][0];
			ren[t].y+=ovo[f][1];
			setColor(7,8);
			Printpw(t);
			ren[t].hp--;
			setColor();
			Printhp(t);
		}
		else return 0;
	}
	else
	{
		ren[t].f=f;
		Printp(t);
	}
	return 1;
}

int Bom(int t)
{
	if (ap[ren[t].x+ovo[ren[t].f][0]][ren[t].y+ovo[ren[t].f][1]]!=0) return 0;
	if (ren[t].bom==0) return 0;
	ren[t].bom--;
	tbom++;
	ap[ren[t].x+ovo[ren[t].f][0]][ren[t].y+ovo[ren[t].f][1]]=2147483647;
	z[tbom].x=ren[t].x+ovo[ren[t].f][0];
	z[tbom].y=ren[t].y+ovo[ren[t].f][1];
	z[tbom].t=20;
	z[tbom].w=ren[t].w;
	z[tbom].fa=t;
	Print(z[tbom].x,z[tbom].y,"¤");
	return 1;
}
void Bomovie(boom a)
{
	ren[a.fa].bom++;
	setColor(7,8);
	ap[a.x][a.y]=-10;
	Print(a.x,a.y,"  ");
	for (int j=1;j<=4;++j)
		for (int i=1;i<=a.w;++i)
			if (ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]==1||ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]==2147483647) break;
			else if (ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]==0) Print(a.x+ovo[j][0]*i,a.y+ovo[j][1]*i,"  "),ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]=-10;
			else if (ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]==2)
			{
				Print(a.x+ovo[j][0]*i,a.y+ovo[j][1]*i,"●");
				ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]=-10;
				break;
			}
			else if (ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]==11)
			{
				Printpw(1);
				ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]=-10;
				ren[1].hp--;
				break;
			}
			else if (ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]==12)
			{
				Printpw(2);
				ren[2].hp--;
				ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]=-10;
				break;
			}
			else if (ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]==13)
			{
				Printpw(3);
				ren[3].hp--;
				ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]=-10;
				break;
			}
			else if (ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]==14)
			{
				Printpw(4);
				ren[4].hp--;
				ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]=-10;
				break;
			}
			else if (ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]==20)
			{
				Print(a.x+ovo[j][0]*i,a.y+ovo[j][1]*i,"hp");
				ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]=-10;
				break;
			}
			else if (ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]==21)
			{
				Print(a.x+ovo[j][0]*i,a.y+ovo[j][1]*i,"★");
				ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]=-10;
				break;
			}
			else if (ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]==22)
			{
				Print(a.x+ovo[j][0]*i,a.y+ovo[j][1]*i,"☆");
				ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]=-10;
				break;
			}
			else if (ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]==23)
			{
				Print(a.x+ovo[j][0]*i,a.y+ovo[j][1]*i,"◆");
				ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]=-10;
				break;
			}
			else if (ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]==24)
			{
				Print(a.x+ovo[j][0]*i,a.y+ovo[j][1]*i,"◇");
				ap[a.x+ovo[j][0]*i][a.y+ovo[j][1]*i]=-10;
				break;
			}
	for (int i=1;i<=4;++i) Printhp(i);
	setColor();
}
int Gun(int t)
{
	setColor(7,8);
	ren[t].gun--;
	int j=ren[t].f;
	for (int i=1;i<=ren[t].w;++i)
		if (ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]==1||ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]==2147483647) break;
		else if (ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]==0) Print(ren[t].x+ovo[j][0]*i,ren[t].y+ovo[j][1]*i,"  "),ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]=-10;
		else if (ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]==2)
		{
			Print(ren[t].x+ovo[j][0]*i,ren[t].y+ovo[j][1]*i,"●");
			ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]=-10;
			break;
		}
		else if (ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]==11)
		{
			Printpw(1);
			ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]=-10;
			ren[1].hp--;
			break;
		}
		else if (ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]==12)
		{
			Printpw(2);
			ren[2].hp--;
			ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]=-10;
			break;
		}
		else if (ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]==13)
		{
			Printpw(3);
			ren[3].hp--;
			ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]=-10;
			break;
		}
		else if (ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]==14)
		{
			Printpw(4);
			ren[4].hp--;
			ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]=-10;
			break;
		}
		else if (ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]==20)
		{
			Print(ren[t].x+ovo[j][0]*i,ren[t].y+ovo[j][1]*i,"hp");
			ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]=-10;
			break;
		}
		else if (ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]==21)
		{
			Print(ren[t].x+ovo[j][0]*i,ren[t].y+ovo[j][1]*i,"★");
			ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]=-10;
			break;
		}
		else if (ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]==22)
		{
			Print(ren[t].x+ovo[j][0]*i,ren[t].y+ovo[j][1]*i,"☆");
			ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]=-10;
			break;
		}
		else if (ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]==23)
		{
			Print(ren[t].x+ovo[j][0]*i,ren[t].y+ovo[j][1]*i,"◆");
			ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]=-10;
			break;
		}
		else if (ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]==24)
		{
			Print(ren[t].x+ovo[j][0]*i,ren[t].y+ovo[j][1]*i,"◇");
			ap[ren[t].x+ovo[j][0]*i][ren[t].y+ovo[j][1]*i]=-10;
			break;
		}
	for (int i=1;i<=4;++i) Printhp(i);
	setColor();
	return 1;
}
bool Caozuor(int t)
{
	char x;
	x=getch();
	if (x!='a'&&x!='s'&&x!='d'&&x!='w'&&x!=' ') return 0;
	if (x=='a') return Movep(t,1);
	if (x=='w') return Movep(t,2);
	if (x=='d') return Movep(t,3);
	if (x=='s') return Movep(t,4);
	if (x==' ')
	{
		if (ren[t].gun) return Gun(t);
		else return Bom(t);
	}
	return 1;
}
int Okbom(int t)
{
	int x=ren[t].x+ovo[ren[t].f][0],y=ren[t].y+ovo[ren[t].f][1];
	if (ap[x][y]!=0) return 0;
	for (int i=1;i<=4;++i)
	{
		x+=ovo[i][0];
		y+=ovo[i][1];
		if (ap[x][y]!=10+t)
			if (ap[x][y]==2||ap[x][y]==11||ap[x][y]==12||ap[x][y]==13||ap[x][y]==14) return 1;
		x-=ovo[i][0];
		y-=ovo[i][1];
	}
	return 0;
}
int QAQ(int t)
{
	for (int i=1;i<=4;++i)
		for (int j=1;j<=5;++j)
			if (ap[ren[t].x+ovo[i][0]*j][ren[t].y+ovo[i][1]*j]==2147483647) return 1;
			else if (ap[ren[t].x+ovo[i][0]*j][ren[t].y+ovo[i][1]*j]==1) break;
	return 0;
}
int Saf(int t,int f)
{
	for (int j=1;j<=5;++j)
		if (ap[ren[t].x+ovo[f][0]*j][ren[t].y+ovo[f][1]*j]==2147483647) return 0;
		else if (ap[ren[t].x+ovo[f][0]*j][ren[t].y+ovo[f][1]*j]==1) break;
	return 1;
}
int Okgun(int t)
{
	for (int i=1;i<=ren[t].w;++i)
		if (ap[ren[t].x+ovo[ren[t].f][0]*i][ren[t].y+ovo[ren[t].f][1]*i]==1||ap[ren[t].x+ovo[ren[t].f][0]*i][ren[t].y+ovo[ren[t].f][1]*i]==2147483647) return 0;
		else if (ap[ren[t].x+ovo[ren[t].f][0]*i][ren[t].y+ovo[ren[t].f][1]*i]<20&&ap[ren[t].x+ovo[ren[t].f][0]*i][ren[t].y+ovo[ren[t].f][1]*i]>0) return 1;
	return 0;
}
bool Caozuoj(int t)
{
	if (QAQ(t))
	{
		for (int i=1;i<=4;++i)
			if (ap[ren[t].x+ovo[i][0]][ren[t].y+ovo[i][1]]==0&&Saf(t,i))
			{
				Movep(t,i);
				break;
			}
	} 
	else if (ren[t].gun==0&&Okbom(t)) Bom(t),ren[t].d=5;
	else if (ren[t].gun&&Okgun(t)) Gun(t); 
	else if (E==0)
	{
		if (ap[ren[t].x+ovo[ren[t].f][0]][ren[t].y+ovo[ren[t].f][1]]!=0||rand()%5==0)
		{
			for (int i=1;i<=4;++i)
				if (ap[ren[t].x+ovo[i][0]][ren[t].y+ovo[i][1]]==0) ren[t].f=i;
			Printp(t); 
		} 
		else if (ap[ren[t].x+ovo[ren[t].f][0]][ren[t].y+ovo[ren[t].f][1]]>=0) Movep(t,ren[t].f);
		else ren[t].f=ren[t].f%4+1,Printp(t);
	}
	else
	{
		if (ap[ren[t].x+ovo[ren[t].f][0]][ren[t].y+ovo[ren[t].f][1]]==1||ap[ren[t].x+ovo[ren[t].f][0]][ren[t].y+ovo[ren[t].f][1]]<0||ap[ren[t].x+ovo[ren[t].f][0]][ren[t].y+ovo[ren[t].f][1]]==2147483647||rand()%5==0)
		{
			for (int i=1;i<=4;++i)
				if (ap[ren[t].x+ovo[i][0]][ren[t].y+ovo[i][1]]==0) ren[t].f=i;
			Printp(t); 
		} 
		else if (ap[ren[t].x+ovo[ren[t].f][0]][ren[t].y+ovo[ren[t].f][1]]>=0) Movep(t,ren[t].f);
		else ren[t].f=ren[t].f%4+1,Printp(t);
	}		 
}
void Gift()
{
	for (int i=1;i<=13;++i)
		for (int j=1;j<=15;++j)
			if (ap[i][j]==0&&rand()%300==0)
			{
				ap[i][j]=rand()%5+20;
				if (ap[i][j]==20) setColor(rand()%6+10,0),Print(i,j,"hp"),setColor();
				if (ap[i][j]==21) setColor(rand()%6+10,0),Print(i,j,"★"),setColor();
				if (ap[i][j]==22) setColor(rand()%6+10,0),Print(i,j,"☆"),setColor();
				if (ap[i][j]==23) setColor(rand()%6+10,0),Print(i,j,"◆"),setColor();
				if (ap[i][j]==24) setColor(rand()%6+10,0),Print(i,j,"◇"),setColor();
			}
}
void Liucheng()
{
	for (int i=1;i<=4;++i)
	{ 
		Printw(i);
		Printgun(i);
		Printv(i);
		Printhp(i);
		Printbom(i);
	}
	for (int i=1;i<=exist;++i)
	{
		int t=i+m;
		setColor(t+10,0);
		gotoxy(hOut,2,4*(t-1)+1);
		printf("◎电脑%d",i);
		setColor();
	}
	for (int ygjsdy=1;Gameover()!=1;++ygjsdy)
	{ 
		for (int i=1;i<=4;++i)
			if ((ren[i].hp>0)&&(ap[ren[i].x][ren[i].y]==0)) 
				ap[ren[i].x][ren[i].y]=10+i,Printp(i);
		while ((hbom!=tbom)&&z[hbom+1].t==0)
		{
			++hbom;
			Bomovie(z[hbom]);
		}
		for (int i=hbom+1;i<=tbom;++i) z[i].t--;
		for (int i=1;i<=13;++i)
			for (int j=1;j<=15;++j)
			{
				if (ap[i][j]==-1) Print(i,j,"  ");
				if (ap[i][j]<0) ap[i][j]++;
			}
		Sleep(tim);
		for (int i=1;i<=m;++i)
			if (ren[i].hp)
			{
				if (ygjsdy%(6/ren[i].v)==0) ren[i].cz=0;
				if ((!ren[i].cz)&&kbhit())
					if (Caozuor(i)) ren[i].cz=1;
			}
		for (int i=m+1;i<=4;++i)
			if (ren[i].hp&&ygjsdy%(6/ren[i].v)==0) Caozuoj(i);
		if (ygjsdy==30)
		{
			ygjsdy=1;
			Gift();
		}                                                       
	}
}
void Start()
{
	Clean();
	Chos();
	if (m>1)
	{
		Printjqqd();
		getch();
		return;
	}
	for (int i=1;i<=T;++i)
	{
		Clear();
		Printjiemian();
		PrintMap();
		Liucheng();
	}
	Printend();
	getch();
}

void Fengmian()
{
	while (1)
	{
		Printfengmian();
		char qwq=getch();
		while (qwq!='0'&&qwq!='1'&&qwq!='2') qwq=getch();
		if (qwq=='0') Exit();
		else if (qwq=='1') Start();
		else Rule();
	}
}

int main()
{
    system("chcp 65001");
	srand(time(0));
	hide();
	load();
	Fengmian();
	return 0;
}