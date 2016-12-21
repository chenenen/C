
#include<stdio.h>
int main() 
{
	int i = 0;
	int j = 0;
	int t = 0;
	int a[5] = {2,3,4,5,6};
	int b[5] = {1,7,8,9,0};
	
	printf("交换前：");
	for(i = 0; i<5; i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	for(j = 0; j<5; j++)
	{
		printf("%d",b[j]);
	}
	for(i = 0; i<5; i++)
	{
		for(j = 0; j<5; j++)
		{
			t = a[i];
			a[i] = b[j];
			b[j] = t;
		}
		
	}
	printf("交换完后：");
	for(i = 0; i<5; i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	for(j = 0; j<5; j++)
	{
		printf("%d",b[j]);
	}
	printf("\n");
	return 0;
}