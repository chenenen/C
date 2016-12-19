#include<stdio.h>
#include<stdarg.h>
int aver(int num,...)
{
	va_list arg;
	int sum = 0;
	int i = 0;
	va_start(arg,num);
	for(i = 0; i<num;i++)
	{
		sum+=va_arg(arg,int);
	}
	va_end(arg);
	return sum/num;
}

int main()
{
	printf("%d ",aver(5,1,2,3,4,5));
	return 0;
}