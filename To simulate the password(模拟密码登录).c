/*��������˵����
��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
ֻ���������������룬
���������ȷ����ʾ��¼�ɣ�
������ξ�����������˳�����
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char password[]= "123456";
	char word[] ={0};
	int i = 0;
	for(i = 0; i<3; i++)
	{
		printf("���������룺\n");
		scanf("%s",word);
		if(strcmp(word,password) == 0)
		{
			printf("����������ȷ��");
			break;
		}
		else 
		{
			printf("��������������������룡");
		}
	}
	if(i==3)
	{
		printf("���ε�¼ʧ�ܣ��˳�����");
	}
	else
	{
		printf("��¼�ɹ���");
	}
	return 0;
}