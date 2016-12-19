#ifndef __TEST__
#define __TEST__
#include<stdio.h>
#include<assert.h>
#include<string.h>
#define MAX_SIZE 10
typedef int Datatype;
typedef struct SeqList
{
	Datatype array[MAX_SIZE];
	int size;  //有效元素的个数
}SeqList,*PSeqList;
//初始化静态顺序表
void InitSeqList(PSeqList pSeqList);
//打印静态顺序表
void Print(PSeqList pSeqList);
//尾插
void PushBack(PSeqList pSeqList,Datatype data);
//尾删
void PopBack(PSeqList pSeqList);
//头插
void PushFront(PSeqList pSeqList,Datatype data);
//头删
void PopFront(PSeqList pSeqList);
//找特定的元素
int Find(PSeqList pSeqList,Datatype data);
//在特定的位置插入元素
void Insert(PSeqList pSeqList,int pos,Datatype data);
//擦出特定位置的元素
void Erase(PSeqList pSeqList,int pos);
#endif


//说明：我将测试的函数放在这里，大家具体实现的时候，将下面的测试代码放到另外一个源文件中
#include"test.h"
//尾插和尾删的测试
void Funtest1(PSeqList pSeqList)
{
	InitSeqList(pSeqList);
	PushBack(pSeqList,1);
	PushBack(pSeqList,2);
	PushBack(pSeqList,3);
	PushBack(pSeqList,4);
	PushBack(pSeqList,5);
	PushBack(pSeqList,6);
	Print(pSeqList);

	printf("\n");

	PopBack(pSeqList);
	PopBack(pSeqList);
	PopBack(pSeqList);
	Print(pSeqList);
}
//测试头插头删
void Funtest2(PSeqList pSeqList)
{
	InitSeqList(pSeqList);
	PushBack(pSeqList,1);
	PushBack(pSeqList,2);
	PushBack(pSeqList,3);
	PushBack(pSeqList,4);
	PushBack(pSeqList,5);
	PushBack(pSeqList,6);
	Print(pSeqList);
	
	printf("\n");

	PushFront(pSeqList,7);
	PushFront(pSeqList,8);
	Print(pSeqList);

	printf("\n");

	PopFront(pSeqList);
	Print(pSeqList);
}
//测试查找特定元素
void Funtest3(PSeqList pSeqList)
{
	InitSeqList(pSeqList);
	PushBack(pSeqList,1);
	PushBack(pSeqList,2);
	PushBack(pSeqList,3);
	PushBack(pSeqList,4);
	PushBack(pSeqList,5);
	PushBack(pSeqList,6);
	Print(pSeqList);

	printf("\n");

	printf("%d",Find(pSeqList,3));
	printf("\n");
	printf("%d",Find(pSeqList,9));
}
//测试在特定位置插入
void Funtest4(PSeqList pSeqList)
{
	InitSeqList(pSeqList);
	PushBack(pSeqList,1);
	PushBack(pSeqList,2);
	PushBack(pSeqList,3);
	PushBack(pSeqList,4);
	PushBack(pSeqList,5);
	PushBack(pSeqList,6);
	Print(pSeqList);

	printf("\n");

	Insert(pSeqList,Find(pSeqList,3),9);
	Print(pSeqList);

	printf("\n");
}
//测试在特定位置删除
void Funtest5(PSeqList pSeqList)
{
	InitSeqList(pSeqList);
	PushBack(pSeqList,1);
	PushBack(pSeqList,2);
	PushBack(pSeqList,3);
	PushBack(pSeqList,4);
	PushBack(pSeqList,5);
	PushBack(pSeqList,6);
	Print(pSeqList);

	printf("\n");

	Erase(pSeqList,Find(pSeqList,2));
	Print(pSeqList);

	printf("\n");
}
int main()
{
	SeqList seq;
	//Funtest1(&seq);
	//Funtest2(&seq);
	//Funtest3(&seq);
	//Funtest4(&seq);
	Funtest5(&seq);
	return 0;
}





