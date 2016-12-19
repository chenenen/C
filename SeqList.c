#include"test.h"
//��ʼ����̬˳���
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
//��ӡ��̬˳���
void Print(PSeqList pSeqList)
{
	int i = 0;
	assert(pSeqList);
	if(pSeqList->size <= 0)
	{
		printf("��̬˳����ѿգ�");
		return;
	}
	for(i = 0; i<pSeqList->size; i++)
	{
		printf("%d ",pSeqList->array[i]);
	}
}
//β��
void PushBack(PSeqList pSeqList,Datatype data)
{
	assert(pSeqList);
	if(pSeqList->size >= MAX_SIZE)
	{
		printf("��̬˳����������޷����룡");
	}
	pSeqList->array[pSeqList->size] = data;
	++pSeqList->size;
}
//βɾ
void PopBack(PSeqList pSeqList)
{
	assert(pSeqList);
	--pSeqList->size;
}
//ͷ��
void PushFront(PSeqList pSeqList,Datatype data)
{
	int i = 0;
	assert(pSeqList);
	if(pSeqList->size >= MAX_SIZE)
	{
		printf("��̬˳����������޷����棡");
	}
	for(i = pSeqList->size-1; i>=0; i--)
	{
		pSeqList->array[i+1] = pSeqList->array[i];
	}
	pSeqList->array[0] = data;
	++pSeqList->size;
}
//ͷɾ
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
//���ض���Ԫ��
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
//���ض���λ�ò���Ԫ��
void Insert(PSeqList pSeqList,int pos,Datatype data)
{
	int i = 0;
	assert(pSeqList);
	if(pSeqList->size >= MAX_SIZE)
	{
		printf("��̬˳����������޷����룡");
	}
	for(i = pSeqList->size-1; i<=pos; i--)
	{
		pSeqList->array[i+1] = pSeqList->array[i];
	}
	pSeqList->array[pos] = data;
	++pSeqList->size;
}
//�����ض�λ�õ�Ԫ��
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
