#include<stdio.h>
#define ROW 3
#define CLOUMN 3


void Menu();
void Print_board(char a[ROW][CLOUMN]);
void Funtest();


//说明：一些接口的实现。读者将此处的函数实现重新放在一个源文件中实现

#include"game.h"
void Menu()
{
	printf("******** 欢迎进入三子棋游戏系统！********\n");
	printf("######## 1.play ############ 0.exit#######\n");
}
//--|--|--
//--|--|--
//--|--|--

/*函数说明：打印棋盘*/
void Print_board(char a[ROW][CLOUMN])
{
	int i = 0;
	int j = 0;
	for(i=0; i<ROW; i++)
	{
		for(j = 0; j<CLOUMN; j++)
		{
			printf("%c|%c|%c ",a[0][j],a[1][j],a[2][j]);
			if(i != 2)
			{
				printf("--|--|--");
			}
		}
	}

}

void Funtest()
{
	Menu();
	Print_board(a);
}