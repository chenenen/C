/*����˵������дһ������
���ӱ�׼�����ȡCԴ���룬
����֤���еĻ����Ŷ���ȷ�ĳɶԳ��֡�
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
				printf("��ƥ�䣡");
			}
			else
			{
				count--;
			}
		} 

	}
	if(count ==0)
	{
		printf("ƥ��");
	}
	else
	{
		printf("��ƥ��");
	}

	return 0;
}