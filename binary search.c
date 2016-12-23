#include<stdio.h>
int Binary_search(int arr[], int key, int left, int right)
{
	int mid = 0;
	while(left<=right)
	{
		mid = left-((left-right)>>1);
		if(arr[mid] < key)
		{
			left = mid+1;
		}
		else if(arr[mid] >key)
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	int key = 4;
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;
	int ret = Binary_search(arr,key,left,right);
	printf("%d ",ret);
	return 0;
}