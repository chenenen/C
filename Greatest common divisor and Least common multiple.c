#include<stdio.h>
int main()
{
	int a = 4;
	int b = 6;
	int i = 0;
	int t = 0;
	int temp = 0;
	if(a>b)
	{
		t = a;
		a = b;
		b = t;
	}
	i = a*b;
	while(a%b!= 0)
	{	
		temp = b;
		b = a%b;
		a = temp;
	}
	printf("���Լ���ǣ�");
	printf("%d\n",b);
	printf("��С�������ǣ�");
	printf("%d\n",i/b);  //�����Ļ��������Լ���̾�Ϊ��С������
	return 0;
}