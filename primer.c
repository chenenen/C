/*说明：打印100-200之间的素数*/

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(i= 100; i<=200; i++)
//	{
//		for(j = 2; j<i; j++)
//		{
//			if(i%j != 0)
//			{
//				printf("%d ",i);
//				
//			}
//			break;
//		}
//		
//	}
//	printf("\n");
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(i = 101; i<=200; i+=2)
//	{
//		for(j = 2; j<i; j++)
//		{
//			if(i%j != 0)
//			{
//				printf("%d ",i);
//			}
//			break;
//		}
//		
//	}
//	return 0;
//}

#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int j = 0;
	for( i = 101; i<=200; i+=2)
	{
		for(j = 2; j<sqrt(i); j++)
		{
			if(i%j != 0)
			{
				printf("%d ",i);
			}
			break;
		}
	}
	return 0;
}