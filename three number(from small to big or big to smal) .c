//从小到大的顺序输出
//#include<stdio.h>
//int main()
//{
//	int a = 6;
//	int b = 4;
//	int c = 0; 
//	int t = 0;
//	//a,b,c 
//	if(a>b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if(a>c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if(b>c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	
//	printf("%d %d %d",a,b,c);
//	return 0;
//}

//从大到小的顺序输出
#include<stdio.h>
int main()
{
	int a = 6;
	int b = 4;
	int c = 0; 
	int t = 0;
	//a,b,c 
	if(a<b)
	{
		t = a;
		a = b;
		b = t;
	}
	if(a<c)
	{
		t = a;
		a = c;
		c = t;
	}
	if(b<c)
	{
		t = b;
		b = c;
		c = t;
	}
	
	printf("%d %d %d",a,b,c);
	return 0;
}