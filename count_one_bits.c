//方法1：
//#include<stdio.h>
//int  count_one_bits(unsigned int value)
//{
//	int i = 0;
//	int count = 0;
//	for(i = 0; i<32; i++)
//	{
//		if(1 ==((value>>i) &1))
//		{
//			count++;
//		}	
//	}
//	return count;
//}
////00001111
//int main()
//{
//	int num = 15;
//	printf("%d ",count_one_bits(num));
//	return 0;
//}


//方法二：
//n = n&(n-1)
//  1111 1110 
//#include<stdio.h>
//int  count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while(value)
//	{
//		count++;
//		value =  value&(value-1);
//		
//	}	
//	return count;
//
//}
//int main()
//{
//	int num = 15;
//	printf("%d ",count_one_bits(num));
//	return 0;
//}
	
//方法3：
//-1
//10000001
//11111111
#include<stdio.h>
int  count_one_bits(unsigned int value)
{
	int count = 0;
	while(value)
	{
		if(value%2 == 1)
		{
			count++;
		}
		value = value/2;
	}
	return count;
	
}
int main()
{
	int num = 15;
	printf("%d ",count_one_bits(15));
	return 0;
}