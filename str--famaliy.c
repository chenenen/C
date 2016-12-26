//strcpy  原型;char* strcpy(char* dest,const char*src)
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while(*dest++ = *src++)
//	{}
//	return ret;
//}
//int main()
//{
//	char* str = "acfg";
//	char a[10] = {0}; 
//	my_strcpy(a, str);
//	printf("%s\n",a);
//	return 0;
//}

//strstr   原型;char* strstr(const char* str, const char* substr)
//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(const char*str, const char*substr)
//{
//	char* start = (char*)str;
//	char* substart = (char*)substr;
//	char* ch = (char*)str;
//	assert(start && substart);
//	while(*ch)
//	{
//		start = ch;
//		while((*start) && (*substart) && (*start = *substart))
//		{
//			start++;
//			substart++;
//		}
//		if(*substart == '\0')
//		{
//			return ch;
//		}
//		ch++;
//		substart = substr;
//	}
//	return NULL;
//	
//}
//int main()
//{
//	char str1[] = "abcdg";  //如果用的是char*str就会崩溃
//	char str2[] = "bc";
//	char* ret = my_strstr(str1,str2);
//	if(*ret != NULL)
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}


//strcat()  原型：char* strcat(char* dest,const char*src)
//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest&&src);
//	while(*dest != '\0')
//	{
//		dest++;
//	}
//	while(*dest++=*src++)
//	{}
//	return ret;
//}
//int main()
//{
//	char a[10] = "andf";
//	char b[5] = "bckl";
//	my_strcat(a,b);
//	printf("%s\n",a);
//	return 0;
//}


//strcmp  原型；int strcmp(const char* str1,const char* str2)

//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char*str1,const char*str2)
//{
//	assert(str1 && str2);
//	while(*str1 == *str2 )
//	{
//		if(*str1 =='\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if(*str1>*str2)
//	{
//		return *str1-*str2;
//	}
//	else
//		return -1;
//}
//int main()
//{
//	char* a = "abcd";
//	char* b = "abc"; 
//	printf("%d\n",my_strcmp(a,b));
//	return 0;
//}



//strncpy 原型; char* strncpy(char* dest,const char* src,size_t size)

//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//char* my_strncpy(char*dest, const char* src,size_t size)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while(size && *src)
//	{
//		*dest++=*src++;
//		size--;
//	}
//	if(size>0)
//	{
//			while(--size)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char a[20] = {0};
//	char b[5] = "abcv";
//	my_strncpy(a,b,5);
//	printf("%s\n",a);
//	return 0;
//}
//strncat 原型; char* strncat(char* dest,const char*src,size_t size)
//#include<stdio.h>
//#include<assert.h>
//char* my_strncat(char* dest,const char*src, size_t size)
//{
//	assert(dest && src);
//	while(*dest != '\0')
//	{
//		dest++;
//	}
//	while(size && *src)
//	{
//		*dest++=*src++;
//		size--;
//	}
//}
//int main()
//{
//	char a[20] = "abc";
//	char* b = "cde";
//	my_strncat(a,b,2);
//	printf("%s\n",a);
//	return 0;
//}
//memcpy  原型; void* memcpy(void* dest,const void* src,size_t size)
//#include<stdio.h>
//#include<assert.h>
//void* my_memcpy(void* dest,void* src,size_t size)
//{
//	char* pdest = (char*)dest;
//	char* psrc = (char*)src;
//	char* ret = dest;
//	assert(dest && src);
//	while(size--)
//	{
//		*pdest++ = *psrc++;
//	}
//	return ret;
//}
//int main()
//{
//	char a[10] = "a";
//	char b[] = "abxcdf";
//	my_memcpy(a,b,4);
//	printf("%s\n",a);
//	return 0;
//}
//memmove  原型;void* memcpy(void* dest,const void* src,size_t size)
#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest,const void* src,size_t size)
{
	char* pdest = (char*)dest;
	char* psrc = (char*)src;
	void* ret = dest;
	assert(dest&&src);
	if ((pdest>psrc) && (pdest<psrc+size))
	{
		while(size--)
		{
			*(pdest+size) = *(psrc+size);  //从后向前拷贝
		}
	}
	else
	{
		while(size--)
		{
			*pdest++ = *psrc++;    //从前向后拷贝
		}
	}
	return ret;
}
int main()
{
	int i = 0;
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	my_memmove(a+2,a,4*sizeof(int));
	for(i = 0; i<10; i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

