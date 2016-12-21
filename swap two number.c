/*函数说明：引入第三个变量交换两个整数的值*/
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	printf("请输入两个整数：");
//	scanf("%d,%d",&a,&b);
//	printf("交换前：");
//	printf("%d,%d\n",a,b);
//	t = a;
//	a = b;
//	b = t;
//	printf("交换后：");
//	printf("%d,%d\n",a,b);
//	return 0;
//}



/*函数说明：不引入第三个变量交换两个数的值*/
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数：");
	scanf("%d,%d",&a,&b);
	printf("交换前：");//2,3 5
	printf("%d %d\n",a,b);
	/*a = a+b;
	b = a-b;
	a = a-b;*/	
	a = a^b;
	b = a^b;
	a = a^b;
	printf("交换后：");
	printf("%d %d\n",a,b);
	return 0;
}