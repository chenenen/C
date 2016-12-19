#ifndef __TEST__
#define __TEST__
#include<stdio.h>
#include<assert.h>
typedef int Datatype;
typedef struct SeqListdD
{
	Datetype* array;
	int size;         //��ЧԪ�صĸ���
	int capacity;     //�ռ��������
}SeqListD,*PSeqListD;
//��ʼ����̬˳���
void InitpSeqList(PSeqListD pSeqListD);
//��ӡ��̬˳���
void Print(PSeqListD pSeqListD);
//�ж϶�̬˳�����Ŀռ��Ƿ����������Ļ���������
int CheckCapacity(PSeqListD pSeqListD);
//β��
void PushBack(PSeqListD pSeqListD,Datatype data);
//βɾ
void PopBack(PSeqListD pSeqListD);
//ͷ��
void PushFront(PSeqListD pSeqListD,Datatype data);
//ͷɾ
void PopFront(PSeqListD pSeqListD);
//���ض���λ�ò���Ԫ��
void Insert(PSeqListD pSeqListD,int pos,Datatype data);
//���ض���λ��ɾ��Ԫ��
void Erase(PSeqListD pSeqListD,int pos);
//�����ض�Ԫ��
int Find(PSeqListD pSeqListD,Datatype data);
//��̬˳���ĳ���
int Size(PSeqListD pSeqListD);
//��̬˳��������
int Capacity(PSeqListD pSeqListD);
//��ն�̬˳���
void Clear(PSeqListD pSeqListD);
//��̬˳���ĳ���
int Size(PSeqListD pSeqListD);
//��̬˳��������
int Capacity(PSeqListD pSeqListD);
//��ն�̬˳���
void Clear(PSeqListD pSeqListD);
//ȥ���ض�Ԫ��
int Remove(PSeqListD pSeqListD,Datatype data);
//ȥ����̬˳�����������ͬ��Ԫ��
void RemoveAll(PSeqListD pSeqListD,Datatype data);
//ð������
void BubbleSort(PSeqList pSeqList);
//ѡ������
void SelectSort(PSeqList pSeqList);
//���ֲ���
int BinarySearch(PSeqList pSeqList, DataType data);
//���ֵݹ����




//���ٶ�̬˳���
void Destroy(PSeqListD pSeqListD);



#endif