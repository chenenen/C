#include"test.h"

//��ʼ����̬˳���
void InitpSeqList(PSeqListD pSeqListD)
{
	assert(pSeqListD);
	pSeqListD->capacity = 5;
	pSeqListD->size = 0;
	pSeqListD->array = (Datatype*)malloc(sizeof(Datatype)*capacity);
}
//��ӡ��̬˳���
void Print(PSeqListD pSeqListD)
{
	int i = 0;
	assert(pSeqListD);
	if(pSeqListD->size<=0)
	{
		printf("�˶�̬˳���Ϊ�գ��޷���ӡ��");
		return;
	}
	for(i = 0; i<pSeqListD->size; i++)
	{
		printf("%d ",pSeqListD->array[i]);
	}
	printf("\n");
}
//�ж϶�̬˳�����Ŀռ��Ƿ����������Ļ���������
int CheckCapacity(PSeqListD pSeqListD) 
{
	assert(pSeqListD);
	if(pSeqListD->size >= pSeqListD->capacity)
	{
		Datatype* ptemp = pSeqListD->array;
		pSeqListD->array = (Datatype*)relloc(pSeqListD->array,
			sizeof(Datatype)*(capacity*2));
		if(pSeqListD->array == NULL)
		{
			printf("����ʧ�ܣ�");
			pSeqListD->array = ptemp;
			return -1;
		}
		else
		{
			pSeqListD->capacity = pSeqListD->capacity *2;
		}
	}
	return 1;
}
//β��
void PushBack(PSeqListD pSeqListD,Datatype data)
{
	assert(pSeqListD);
	if(1 == CheckCapacity(pSeqListD))
	{
		pSeqListD->array[size] = data;
	}
	++pSeqListD->size;

}
//βɾ
void PopBack(PSeqListD pSeqListD)
{
	assert(pSeqListD);
	if(pSeqListD->size == 0)
	{
		printf("��̬˳���Ϊ�գ��޷�ɾ����");
	}
	--pSeqListD->size;
}
//ͷ��
void PushFront(PSeqListD pSeqListD,Datatype data)
{
	int i = 0;
	assert(pSeqListD);
	if(1 == CheckCapacity(pSeqListD))
	{
		for(i = pSeqListD->size-1; i>=0; i--)
		{
			pSeqListD->array[i+1] = pSeqListD->array[i];
		}
		pSeqListD->array[0] = data;
	}
	++pSeqListD->size;
}
//ͷɾ
void PopFront(PSeqListD pSeqListD)
{
	int i = 0;
	assert(pSeqListD);
	if(pSeqListD->size == 0)
	{
		printf("��̬˳���Ϊ��,�޷�ɾ����");
	}
	for(i = 1; i<pSeqListD->size-1; i++)
	{
		pSeqListD->array[i] = pSeqListD->array[i+1];
	}
	--pSeqListD->size;
}

//���ض���λ�ò���Ԫ��
void Insert(PSeqListD pSeqListD,int pos,Datatype data)
{
	int i = 0;
	assert(pSeqListD);
	if(1 == CheckCapacity(pSeqListD))
	{
		for(i = pSeqListD->size-1; i>=pos; i--)
		{
			pSeqListD->array[i+1] = pSeqListD->array[i];
		}
		pSeqListD->array[pos] = data;
	}
	++pSeqListD->size;
}
//���ض���λ��ɾ��Ԫ��
void Erase(PSeqListD pSeqListD,int pos)
{
	int i = 0;
	assert(pSeqListD);
	for(i = pos; i<pSeqListD->size; i++)
	{
		pSeqListD->array[i] = pSeqListD->array[i+1];
	}
	--pSeqListD->size;

}
//�����ض�Ԫ��
int Find(PSeqListD pSeqListD,Datatype data)
{
	int i = 0;
	assert(pSeqListD);
	for(i = 0; i<pSeqListD->size; i++)
	{
		if(pSeqListD->array[i] == data)
			return 1;
	}
	return -1;
}
//��̬˳���ĳ���
int Size(PSeqListD pSeqListD)
{
	return pSeqListD->size;
}
//��̬˳��������
int Capacity(PSeqListD pSeqListD)
{
	return pSeqListD->capacity;
}
//��ն�̬˳���
void Clear(PSeqListD pSeqListD)
{
	/*int i = 0;
	assert(pSeqListD);
	for(i = 0; i<pSeqListD->size; i++)
	{
		PopBack(pSeqListD);
	}*/
	assert(pSeqListD);
	pSeqListD->size = 0;
}
//���ٶ�̬˳���
void Destroy(PSeqListD pSeqListD)
{
	pSeqListD->size = 0;
	pSeqListD->capacity = 0;
	free pSeqListD->array;
}
//ȥ���ض�Ԫ��
int Remove(PSeqListD pSeqListD,Datatype data)
{
	int i = 0;
	assert(pSeqListD);
	for(i = 0; i<pSeqListD->size; i++)
	{
		if(pSeqListD->array[i] == data)
			return 1;
	}
	return -1;
}
//ȥ����̬˳�����������ͬ��Ԫ��
void RemoveAll(PSeqListD pSeqListD,Datatype data)
{
	int count = 0;
	int i = 0;
	assert(pSeqListD);
	for(i = 0; i<pSeqListD->size; i++)
	{
		if(pSeqListD->array[i] == data)
		{
			count++;     //��count����¼Ҫɾ����Ԫ�س��ֵĴ���
		}
		else      //����������Ҫɾ����Ԫ��ʱ������Ԫ����ǰŲ��count��
		{
			while(--count)
			{
				pSeqListD->array[i] = pSeqListD->array[i+1];
			}
		}
	}
}
//ð������
void BubbleSort(PSeqList pSeqList)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	assert(pSeqListD);
	for(i = 0; i<pSeqListD->size-1; i++)
	{ 
		for(j = 0; j<pSeqListD->size-i-1; j++)
		{
			if(pSeqListD->array[j]>pSeqList->array[j+1])
			{
				temp = pSeqListD->array[j];
				pSeqListD->array[j] = pSeqList->array[j+1];
				pSeqList->array[j+1] = temp;
			}
		}
	}

}
//ѡ������
void SelectSort(PSeqList pSeqList)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	assert(pSeqListD);
	for(i = 0; i<pSeqListD->size; i++)
	{
		int minpos = i;
		for(j = 0; j<pSeqListD-1; j++)
		{
			if(pSeqListD->array[j]<pSeqListD->array[minpos])
			{
				minpos = j;
			}
		}
		temp = pSeqListD->array[minpos];
		pSeqListD->array[minpos] = pSeqListD->array[i];
		pSeqListD->array[i] = t;
	}
}
//���ֲ���
int BinarySearch(PSeqList pSeqList, DataType data)
{
	assert(pSeqListD);
	int left = 0;
	int right = pSeqListD->size-1;
	int mid = 0;
	while(left<=right)
	{
		mid = left-((left-right)>>1);
		if(pSeqListD->array[mid] == data)
		{
			return mid;
		}
		else if(pSeqListD->array[mid] > data)
		{
			right = mid--;
		}
		else
		{
			left = mid++;
		}
	}
	return -1;	
}
//���ֵݹ����

int BinarySearch(PSeqListD pSeqListD,int left,int right,Datatype data)
{
	assert(pSeqListD);
	int mid = left-((left-right)>>1);
	if(pSeqListD->array[mid] == data)
		return mid;
	else if(pSeqListD->array[mid] > data)
	{
		BinarySearch(pSeqListD,left,mid--,data);
	}
	else(pSeqListD->array[mid] > data)
	{
		BinarySearch(pSeqListD,left,mid--,data);
	}
	return 0;	
}