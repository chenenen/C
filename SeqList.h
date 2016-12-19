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
	int size;  //��ЧԪ�صĸ���
}SeqList,*PSeqList;
//��ʼ����̬˳���
void InitSeqList(PSeqList pSeqList);
//��ӡ��̬˳���
void Print(PSeqList pSeqList);
//β��
void PushBack(PSeqList pSeqList,Datatype data);
//βɾ
void PopBack(PSeqList pSeqList);
//ͷ��
void PushFront(PSeqList pSeqList,Datatype data);
//ͷɾ
void PopFront(PSeqList pSeqList);
//���ض���Ԫ��
int Find(PSeqList pSeqList,Datatype data);
//���ض���λ�ò���Ԫ��
void Insert(PSeqList pSeqList,int pos,Datatype data);
//�����ض�λ�õ�Ԫ��
void Erase(PSeqList pSeqList,int pos);
#endif


//˵�����ҽ����Եĺ������������Ҿ���ʵ�ֵ�ʱ�򣬽�����Ĳ��Դ���ŵ�����һ��Դ�ļ���
#include"test.h"
//β���βɾ�Ĳ���
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
//����ͷ��ͷɾ
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
//���Բ����ض�Ԫ��
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
//�������ض�λ�ò���
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
//�������ض�λ��ɾ��
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





