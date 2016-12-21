/*函数功能说明：
编写代码实现，模拟用户登录情景，并且只能登录三次。
只允许输入三次密码，
如果密码正确则提示登录成，
如果三次均输入错误，则退出程序。
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char password[]= "123456";
	char word[] ={0};
	int i = 0;
	for(i = 0; i<3; i++)
	{
		printf("请输入密码：\n");
		scanf("%s",word);
		if(strcmp(word,password) == 0)
		{
			printf("密码输入正确！");
			break;
		}
		else 
		{
			printf("密码输入错误，请重新输入！");
		}
	}
	if(i==3)
	{
		printf("三次登录失败，退出程序！");
	}
	else
	{
		printf("登录成功！");
	}
	return 0;
}