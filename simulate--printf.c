/*����˵����
ģ��ʵ��һ��printf��
��������ʵ��my_printf("s ccc.","hello", 'b','i','t');
*/
#include<stdio.h>
#include<stdarg.h>
void my_printf(char* format,...)
{
	va_list arg;
	va_start(arg,format);  //ע���ʼ����ʱ��Ҫ��*
	while(*format)
	{
		
		switch(*format)
		{
			case 's':
				{
					char *str = va_arg(arg,char*);
					/*while(*str)
					{
						putchar(*str);
						str++;
					}*/
					puts(str);
				}
					break;
			case'c':
				{
					char ch = va_arg(arg,char);
					putchar(ch);
				}
					break;
			default:
				putchar(*format);
				break;
			
			}
		format++;	
	}
}
int main()
{
	my_printf("s ccc.","hello", 'b','i','t');
	return 0;
}