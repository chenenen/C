//方法一：

#include<stdio.h>
//15
int main()
{
	int num = 15;
	int i = 0; 
	printf("获得的奇数序列是：");
	for(i = 31; i>=1; i-=2)
	{
		printf("%d",(num>>i)&1);
	}
	printf("\n");
	printf("获得的偶数序列是：");
	for(i = 30; i>=0; i-=2)
	{
		printf("%d",(num>>i)&1);
	}
	return 0;
}

//方法二：
//11101110
//01010101  0x55
//10101010  0xaa
//#include<stdio.h>
//int main()
//{
//	int num = 15;
//	int i = 0;
//	printf("获得的偶数序列是：");
//	printf("%d\n",num&0xaaaaaaaa);
//	printf("获得的奇数序列是：");
//	printf("%d\n",num&0x55555555);
//    
//	return 0;
//}

//方法三:
//将其存放到数组中
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