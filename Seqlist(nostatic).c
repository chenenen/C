#include"test.h"

//初始化动态顺序表
void InitpSeqList(PSeqListD pSeqListD)
{
	assert(pSeqListD);
	pSeqListD->capacity = 5;
	pSeqListD->size = 0;
	pSeqListD->array = (Datatype*)malloc(sizeof(Datatype)*capacity);
}
//打印动态顺序表
void Print(PSeqListD pSeqListD)
{
	int i = 0;
	assert(pSeqListD);
	if(pSeqListD->size<=0)
	{
		printf("此动态顺序表为空！无法打印！");
		return;
	}
	for(i = 0; i<pSeqListD->size; i++)
	{
		printf("%d ",pSeqListD->array[i]);
	}
	printf("\n");
}
//判断动态顺的序表的空间是否已满，满的话进行扩容
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
			printf("扩容失败！");
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
//尾插
void PushBack(PSeqListD pSeqListD,Datatype data)
{
	assert(pSeqListD);
	if(1 == CheckCapacity(pSeqListD))
	{
		pSeqListD->array[size] = data;
	}
	++pSeqListD->size;

}
//尾删
void PopBack(PSeqListD pSeqListD)
{
	assert(pSeqListD);
	if(pSeqListD->size == 0)
	{
		printf("动态顺序表为空，无法删除！");
	}
	--pSeqListD->size;
}
//头插
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
//头删
void PopFront(PSeqListD pSeqListD)
{
	int i = 0;
	assert(pSeqListD);
	if(pSeqListD->size == 0)
	{
		printf("动态顺序表为空,无法删除！");
	}
	for(i = 1; i<pSeqListD->size-1; i++)
	{
		pSeqListD->array[i] = pSeqListD->array[i+1];
	}
	--pSeqListD->size;
}

//在特定的位置插入元素
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
//在特定的位置删除元素
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
//查找特定元素
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
//求动态顺序表的长度
int Size(PSeqListD pSeqListD)
{
	return pSeqListD->size;
}
//求动态顺序表的容量
int Capacity(PSeqListD pSeqListD)
{
	return pSeqListD->capacity;
}
//清空动态顺序表
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
//销毁动态顺序表
void Destroy(PSeqListD pSeqListD)
{
	pSeqListD->size = 0;
	pSeqListD->capacity = 0;
	free pSeqListD->array;
}
//去除特定元素
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
//去除动态顺序表中所有相同的元素
void RemoveAll(PSeqListD pSeqListD,Datatype data)
{
	int count = 0;
	int i = 0;
	assert(pSeqListD);
	for(i = 0; i<pSeqListD->size; i++)
	{
		if(pSeqListD->array[i] == data)
		{
			count++;     //用count来记录要删除的元素出现的次数
		}
		else      //当碰到不是要删除的元素时，将此元素向前挪动count步
		{
			while(--count)
			{
				pSeqListD->array[i] = pSeqListD->array[i+1];
			}
		}
	}
}
//冒泡排序
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
//选择法排序
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
//二分查找
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
//二分递归查找

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