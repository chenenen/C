/*����˵������10�������е����ֵ*/
#include<stdio.h>
int main()
{
	int i=0;
	int arr[10] = {0};
	int max = arr[0];
	printf("������ʮ��������");
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
	printf("ʮ���������ֵ�ǣ�%d",max);

	return 0;
}