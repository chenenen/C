#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define EPS 0.000000001
int main()
{
	double a = 0,b = 0,c =  0; //һԪ���η��̵�ϵ��
	double x1 = 0,x2 = 0;   //һԪ���η��̵ĸ�
	double m = b*b-4*a*c; //��¼��������ֵ
	double p1 = 0;
	double p2 = 0; //����p1,p2��ֵ����x1,x2
	printf("������a,b,c��ֵ��");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	p1 = -b/(2*a);
	p2 = sqrt(m)/(2*a);
	if(a>=-EPS && a<=EPS)
	{
		printf("����һԪ���η��̣�����������a��ֵ��");
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
		printf("��ʵ��");
	}
	printf("%lf,%lf",x1,x2);
	return 0;
}