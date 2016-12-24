//用递归实现
//123 12+3 1+2+3 
//#include<stdio.h>
//void Print(num)
//{
//	if(num>10)
//	{
//		Print(num/10);
//	}
//	printf("%d ",num%10);
//}
//
//int main()
//{
//	int num = 123;
//	Print(num);
//	return 0;
//}

//用数组的方式实现
#include<stdio.h>
int main()
{
	char a[] = "123";
	int sz = sizeof(a)/sizeof(a[0])-1;
	int i = 0;
	for(i = 0; i<sz; i++)
	{
		printf("%c ",a[i]);
	} 
	return 0;
}