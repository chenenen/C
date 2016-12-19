#ifndef __TEST__
#define __TEST__
#include<stdio.h>
#include<assert.h>
typedef int Datatype;
typedef struct SeqListdD
{
	Datetype* array;
	int size;         //有效元素的个数
	int capacity;     //空间的总容量
}SeqListD,*PSeqListD;
//初始化动态顺序表
void InitpSeqList(PSeqListD pSeqListD);
//打印动态顺序表
void Print(PSeqListD pSeqListD);
//判断动态顺的序表的空间是否已满，满的话进行扩容
int CheckCapacity(PSeqListD pSeqListD);
//尾插
void PushBack(PSeqListD pSeqListD,Datatype data);
//尾删
void PopBack(PSeqListD pSeqListD);
//头插
void PushFront(PSeqListD pSeqListD,Datatype data);
//头删
void PopFront(PSeqListD pSeqListD);
//在特定的位置插入元素
void Insert(PSeqListD pSeqListD,int pos,Datatype data);
//在特定的位置删除元素
void Erase(PSeqListD pSeqListD,int pos);
//查找特定元素
int Find(PSeqListD pSeqListD,Datatype data);
//求动态顺序表的长度
int Size(PSeqListD pSeqListD);
//求动态顺序表的容量
int Capacity(PSeqListD pSeqListD);
//清空动态顺序表
void Clear(PSeqListD pSeqListD);
//求动态顺序表的长度
int Size(PSeqListD pSeqListD);
//求动态顺序表的容量
int Capacity(PSeqListD pSeqListD);
//清空动态顺序表
void Clear(PSeqListD pSeqListD);
//去除特定元素
int Remove(PSeqListD pSeqListD,Datatype data);
//去除动态顺序表中所有相同的元素
void RemoveAll(PSeqListD pSeqListD,Datatype data);
//冒泡排序
void BubbleSort(PSeqList pSeqList);
//选择法排序
void SelectSort(PSeqList pSeqList);
//二分查找
int BinarySearch(PSeqList pSeqList, DataType data);
//二分递归查找




//销毁动态顺序表
void Destroy(PSeqListD pSeqListD);



#endif