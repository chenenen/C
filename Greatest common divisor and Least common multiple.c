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
	printf("最大公约数是：");
	printf("%d\n",b);
	printf("最小公倍数是：");
	printf("%d\n",i/b);  //两数的积除以最大公约数商就为最小公倍数
	return 0;
}