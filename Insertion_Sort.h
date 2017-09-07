#pragma once
//直接插入排序(Insertion Sort)的基本思想是：、
//每次将一个待排序的记录，按其关键字大小插入到前面已经排好序的子序列中的适当位置，直到全部记录插入完成为止。
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