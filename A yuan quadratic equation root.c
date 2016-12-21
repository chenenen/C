#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define EPS 0.000000001
int main()
{
	double a = 0,b = 0,c =  0; //一元二次方程的系数
	double x1 = 0,x2 = 0;   //一元二次方程的根
	double m = b*b-4*a*c; //记录代尔塔的值
	double p1 = 0;
	double p2 = 0; //利用p1,p2的值计算x1,x2
	printf("请输入a,b,c的值：");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	p1 = -b/(2*a);
	p2 = sqrt(m)/(2*a);
	if(a>=-EPS && a<=EPS)
	{
		printf("不是一元二次方程，请重新输入a的值：");
	}
	else if(m>=-EPS && m<=EPS)
	{
		x1 = p1;
		x2 = x1;
	}
	else if(m>0)
	{
		x1 = p1+p2;
		x2 = p1-p2;
	}
	else 
	{
		printf("无实根");
	}
	printf("%lf,%lf",x1,x2);
	return 0;
}