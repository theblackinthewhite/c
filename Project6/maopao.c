#include <stdio.h>
#include <string.h>
int cmp(const void* e1, const void* e2)
{
	return (*((int*)e1) - *((int*)e2));
}
Swap(char* a, char* b, int  width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tem = *a;
		*a = *b;
		*b = tem;
		a++;
		b++;
	}
}
void maopao(void* arr, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)arr + j * width, (char*)arr + (j + 1) * width)>0)
			{
				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width,width);
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	maopao(arr,sz,width,cmp);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}