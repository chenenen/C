/*函数说明：
两个int（32位）整数m和n的二进制表达中，
有多少个位(bit)不同？ 
例如：1999 2299
输出例子:7
*/

#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int count = 0;
	int i = 0;
	printf("请输入两个整数：\n");
	scanf("%d,%d",&m,&n);
	for(i = 0; i<32; i++)
	{
		if(((m>>i)&1) != ((n>>i)&1))
		{
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}