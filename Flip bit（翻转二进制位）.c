/*����˵����
unsigned int  reverse_bit(unsigned int value);
��������ķ��� ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
��32λ������25���ֵ�������и�λ��
00000000000000000000000000011001
��ת�󣺣�2550136832��
10011000000000000000000000000000
          2550136832
*/
//0000000000000000000000000000001
//0000000000000000000000000000010
//0000000000000000000000000001100

#include<stdio.h>
unsigned int  reverse_bit(unsigned int value)
{
	int ret = 0;
	int i = 0;
	for(i = 0; i<32; i++)
	{
		ret=ret<<1;
		ret |= (value>>i)&1;
		
	}
	return ret;
	
}
int main()
{
	int num = 0;
	printf("������һ��������");
	scanf("%d",&num);
	printf("%u\n",reverse_bit(num));
	return 0;
}


//������:

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int num = 25;
//	int i = 0;
//	int ret = 0;
//	for(i = 0; i<32; i++)
//	{
//		ret += ((num>>i)&1)*pow(2,31-i);
//	}
//	printf("%u ",ret);
//	return 0;
//}