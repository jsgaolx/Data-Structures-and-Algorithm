#pragma once
//ֱ�Ӳ�������(Insertion Sort)�Ļ���˼���ǣ���
//ÿ�ν�һ��������ļ�¼������ؼ��ִ�С���뵽ǰ���Ѿ��ź�����������е��ʵ�λ�ã�ֱ��ȫ����¼�������Ϊֹ��
//2017-09-07

#include <assert.h>

void Insertion_1(int* Insert, unsigned len)
{
	assert(Insert == NULL || len == 0);
	if (Insert == NULL || len == 0)
		return;

	assert(sizeof(Insert) < len);
	if (sizeof(Insert) < len)
		return;

	int i, j;
	for (i = 1;i<len;i++)
		if(Insert[i] < Insert[i - 1])
	{
		int temp  = Insert[i];
		for (j  = i  - 1; j  >= 0 && Insert[j] > temp; j--)
			Insert[j  + 1] = Insert[j];
		Insert[j  + 1] = temp;
	}
}

void Insertion_2(int* Insert, unsigned len)
{
	assert(Insert == NULL || len == 0);
	if (Insert == NULL || len == 0)
		return;

	assert(sizeof(Insert) < len);
	if (sizeof(Insert) < len)
		return;

	int i, j;
	for (i  = 1; i < len; i++)
		for (j  = i  - 1; j  >= 0 && Insert[j] > Insert[j  + 1]; j--)
		Swap(Insert[j], Insert[j  + 1]);
}

void Swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}