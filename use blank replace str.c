/*函数说明：
请实现一个函数，把字符数组中的每个空格替换成“％20”。
例如输入“we are happy.”，则输出“we%20are%20happy.”。
*/
#include<stdio.h>


void Replace(char *a)
{
	char *str = a;
	int *end = NULL;
	int *new_end = NULL;
	int count = 0;
	while(*str != '\0')
	{
		if(*str == ' ')
		{
			count++;
		}
		str++;
	}
	end = str-1;
	new_end = count*2+end;
	while(end != new_end)
	{
		if(*end != ' ')
		{
			*new_end-- = *end--;
		}
		else
		{
			*new_end-- = '0';
			*new_end-- = '2';
			*new_end-- = '%';
			end--;
		}
	}
	
}
int main()
{
	char *a = "we are happy";
	printf("%s\n",a);
	Replace(a);
	printf("%s\n",a);
	//printf("%d\n",Blank_count(a));
	return 0;
}