/*����˵�������������������������������ֵ*/
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	printf("����������������");
//	scanf("%d,%d",&a,&b);
//	printf("����ǰ��");
//	printf("%d,%d\n",a,b);
//	t = a;
//	a = b;
//	b = t;
//	printf("������");
//	printf("%d,%d\n",a,b);
//	return 0;
//}



/*����˵�������������������������������ֵ*/
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("����������������");
	scanf("%d,%d",&a,&b);
	printf("����ǰ��");//2,3 5
	printf("%d %d\n",a,b);
	/*a = a+b;
	b = a-b;
	a = a-b;*/	
	a = a^b;
	b = a^b;
	a = a^b;
	printf("������");
	printf("%d %d\n",a,b);
	return 0;
}