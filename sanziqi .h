#include<stdio.h>
#define ROW 3
#define CLOUMN 3


void Menu();
void Print_board(char a[ROW][CLOUMN]);
void Funtest();


//˵����һЩ�ӿڵ�ʵ�֡����߽��˴��ĺ���ʵ�����·���һ��Դ�ļ���ʵ��

#include"game.h"
void Menu()
{
	printf("******** ��ӭ������������Ϸϵͳ��********\n");
	printf("######## 1.play ############ 0.exit#######\n");
}
//--|--|--
//--|--|--
//--|--|--

/*����˵������ӡ����*/
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