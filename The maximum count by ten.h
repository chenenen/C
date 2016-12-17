/*函数说明：求10个整数中的最大值*/
#include<stdio.h>
int main()
{
	int i=0;
	int arr[10] = {0};
	int max = arr[0];
	printf("请输入十个整数：");
	for(i = 0; i<10; i++)
	{
		scanf("%d,",&arr[i]);
	}
	
	for(i = 0; i<10; i++)
	{
		if(max<arr[i])
		{
			max = arr[i];
		}
		
	}
	printf("十个数中最大值是：%d",max);

	return 0;
}