/*����˵����
��һ���ַ����������Ϊ:"student a am i",
���㽫��������ݸ�Ϊ"i am a student".
*/

//student a am i
//i ma a tneduts
#include<stdio.h>
void reverse(char *left,char *right)
{
	while(left<=right)
	{
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

//�����ַ�������
void reverse_all(char *a)
{
	char *start = a;
	char *end = a;
	while(*end != '\0')
	{
			while((*end != ' ')&& (*end != '\0'))
		{
			end++;
		}
		end--;
		reverse(start,end);
		if(*(end+1) != '\0')
		{
			 start = end+2;
			 end = start;
		}
		else
		{
			end++;
		}

	}
	
}
int main()
{
	char arr[] = "student a am i";
	char *left = arr;
	int len = sizeof(arr)/sizeof(arr[0])-1;
	char *right = arr+len-1;
	reverse(left,right);
	reverse_all(arr);
	printf("%s\n",arr);
	return 0;
}