#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Menu()
{
	printf("####��ӭ���������Ϸ####");
	printf("\n");
	printf("###1.play#####0.exit###");
}
int main()
{
	int input = 1;
	int ret = 0;
	while(input)     //���Ʋ��Ͻ��������Ϸ
	{
		Menu();
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)        //��ʼ������Ϸ
		{
		case 1:
		{
			int i= 0;
			int ret = 0;
			srand((unsigned)time(NULL));   
			ret = rand()%100;        //���������
			while(1)                //��Ϸ�еĲ���ѭ��
			{
				printf("��£�");
				scanf("%d",&i);
				if(ret == i)
				{
					printf("��ϲ�㣡�¶��ˣ�");
				}
				else if(i>ret)
				{
					printf("��ѽ����´��ˣ�");
				}
				else
				{
					printf("�������������������С��!");
				}
			}
		}
		case 0:
		{
			printf("�˳���Ϸ��");
			break;
		}

	}
	}
	return 0;
}