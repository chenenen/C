//����һ��

#include<stdio.h>
//15
int main()
{
	int num = 15;
	int i = 0; 
	printf("��õ����������ǣ�");
	for(i = 31; i>=1; i-=2)
	{
		printf("%d",(num>>i)&1);
	}
	printf("\n");
	printf("��õ�ż�������ǣ�");
	for(i = 30; i>=0; i-=2)
	{
		printf("%d",(num>>i)&1);
	}
	return 0;
}

//��������
//11101110
//01010101  0x55
//10101010  0xaa
//#include<stdio.h>
//int main()
//{
//	int num = 15;
//	int i = 0;
//	printf("��õ�ż�������ǣ�");
//	printf("%d\n",num&0xaaaaaaaa);
//	printf("��õ����������ǣ�");
//	printf("%d\n",num&0x55555555);
//    
//	return 0;
//}

//������:
//�����ŵ�������
//#include<stdio.h>
//int main()
//{
//	int num = 15;
//	int i = 0;
//	int bits[32] = {0};
//	for(i = 0; i<32; i++)
//	{
//		bits[31-i] = num&1;
//		num = num>>1;
//	}
//	for(i = 0; i<=30; i+=2)
//	{
//		printf("%d",bits[i]);
//	}
//	printf("\n");
//	for(i = 1; i<=31; i+=2)
//	{
//		printf("%d",bits[i]);
//	}
//	return 0;
//}