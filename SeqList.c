#include"test.h"
//初始化静态顺序表
void InitSeqList(PSeqList pSeqList)
{
	pSeqList->size = 0;
	/*int i = 0;
	for(i = 0; i<pSeqList->size; i++)
	{
		pSeqList->array[i] = 0;
	}*/
	memset(pSeqList->array,0,sizeof(Datatype)*MAX_SIZE);
}
//打印静态顺序表
void Print(PSeqList pSeqList)
{
	int i = 0;
	assert(pSeqList);
	if(pSeqList->size <= 0)
	{
		printf("静态顺序表已空！");
		return;
	}
	for(i = 0; i<pSeqList->size; i++)
	{
		printf("%d ",pSeqList->array[i]);
	}
}
//尾插
void PushBack(PSeqList pSeqList,Datatype data)
{
	assert(pSeqList);
	if(pSeqList->size >= MAX_SIZE)
	{
		printf("静态顺序表已满，无法插入！");
	}
	pSeqList->array[pSeqList->size] = data;
	++pSeqList->size;
}
//尾删
void PopBack(PSeqList pSeqList)
{
	assert(pSeqList);
	--pSeqList->size;
}
//头插
void PushFront(PSeqList pSeqList,Datatype data)
{
	int i = 0;
	assert(pSeqList);
	if(pSeqList->size >= MAX_SIZE)
	{
		printf("静态顺序表已满，无法储存！");
	}
	for(i = pSeqList->size-1; i>=0; i--)
	{
		pSeqList->array[i+1] = pSeqList->array[i];
	}
	pSeqList->array[0] = data;
	++pSeqList->size;
}
//头删
void PopFront(PSeqList pSeqList)
{
	int i = 0;
	assert(pSeqList);
	for(i = 0; i<pSeqList->size; i++)
	{
		pSeqList->array[i] = pSeqList->array[i+1];
	}
	--pSeqList->size;
}
//找特定的元素
int Find(PSeqList pSeqList,Datatype data)
{
	int i = 0;
	assert(pSeqList);
	for(i = 0; i<pSeqList->size; i++)
	{
		if(pSeqList->array[i] == data)
		{
			return 1;
		}
	}
	return -1;
}
//在特定的位置插入元素
void Insert(PSeqList pSeqList,int pos,Datatype data)
{
	int i = 0;
	assert(pSeqList);
	if(pSeqList->size >= MAX_SIZE)
	{
		printf("静态顺序表已满，无法插入！");
	}
	for(i = pSeqList->size-1; i<=pos; i--)
	{
		pSeqList->array[i+1] = pSeqList->array[i];
	}
	pSeqList->array[pos] = data;
	++pSeqList->size;
}
//擦出特定位置的元素
void Erase(PSeqList pSeqList,int pos)
{
	int i = 0;
	assert(pSeqList);
	for(i = pos; i<pSeqList->size; i++)
	{
		pSeqList->array[i] = pSeqList->array[i+1];
	}
	--pSeqList->size;
}
