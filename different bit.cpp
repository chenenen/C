/*����˵����
����int��32λ������m��n�Ķ����Ʊ���У�
�ж��ٸ�λ(bit)��ͬ�� 
���磺1999 2299
�������:7
*/

#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int count = 0;
	int i = 0;
	printf("����������������\n");
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