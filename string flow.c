//welcome to bit!
//##############
//w############!
#include<stdio.h>
#include<windows.h>
int main()
{
	char a[] = "welcome to bit!";
	char b[] = "##############";
	int i = 0;
	int j = sizeof(a)/sizeof(a[0])-1;
	while(i<j)
	{
		b[i] = a[i];
		b[j] = a[j];
		printf("%s\n",b);
		Sleep(1000);
		i++;
		j--;
	}
	return 0;
}