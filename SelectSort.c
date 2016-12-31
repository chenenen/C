#include<stdio.h>
void Select(int a[],int sz)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	for(i = 0; i<sz-1;i++)
	{
		int min = a[i];
		for(j = i+1; j<sz; j++)
		{
			if(a[j]<min)
			{
				min = a[j];
			}
		}
		temp = min;
		min = a[i];
		a[i] = temp;  //注意这种做法最容易犯了，小心
	}

	/*int i,j,k,t;
	for(i = 0; i<sz-1; i++)
	{
		k = i;
		for(j = i+1; j<sz; j++)
		{
			if(a[j]<a[k])
			{
				k = j;
			}
		}
		t = a[k];a[k] = a[i];a[i] = t;
	}*/
}
int main()
{
	int a[10] = {1,3,2,4,7,6,5,8,9,0};
	int i = 0;
	int sz = sizeof(a)/sizeof(a[0]);
	Select(a,sz);
	for(i = 0; i<sz;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}