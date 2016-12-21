#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Menu()
{
	printf("####欢迎来玩猜字游戏####");
	printf("\n");
	printf("###1.play#####0.exit###");
}
int main()
{
	int input = 1;
	int ret = 0;
	while(input)     //控制不断进入这个游戏
	{
		Menu();
		printf("请选择：");
		scanf("%d",&input);
		switch(input)        //开始进入游戏
		{
		case 1:
		{
			int i= 0;
			int ret = 0;
			srand((unsigned)time(NULL));   
			ret = rand()%100;        //产生随机数
			while(1)                //游戏中的猜数循环
			{
				printf("你猜：");
				scanf("%d",&i);
				if(ret == i)
				{
					printf("恭喜你！猜对了！");
				}
				else if(i>ret)
				{
					printf("啊呀！你猜大了！");
				}
				else
				{
					printf("哈哈，，笨蛋，，你猜小啦!");
				}
			}
		}
		case 0:
		{
			printf("退出游戏！");
			break;
		}

	}
	}
	return 0;
}