#include<stdio.h>
int Squared(int num,int k)
{
	int ret = 0;
	if(k == 0)
	{
		ret = 1;
	}
	else
	{
		ret = num*(Squared(num,k-1));
	}
	return ret;
}
int main()
{
	printf("%d ",Squared(2,3));
	return 0;
}