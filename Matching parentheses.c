/*函数说明：编写一个程序，
它从标准输入读取C源代码，
并验证所有的花括号都正确的成对出现。
*/

//{}   {{}}  {    }{}   }

#include<stdio.h>
int main()
{
	int count = 0;
	char ch = 0;
	while((ch = getchar())!=EOF)
	{
		if(ch == '{')
		{
			count++;
		}
		else if(ch == '}')
		{
			if(count == 0)
			{
				printf("不匹配！");
			}
			else
			{
				count--;
			}
		} 

	}
	if(count ==0)
	{
		printf("匹配");
	}
	else
	{
		printf("不匹配");
	}

	return 0;
}