#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 6,7,8,9,10 };
	int arr3[] = { 0,0,0,0,0,0 };
	for(int i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = arr3[i];
	}
	for (int i = 0; i < 5; i++)
	{
		printf("arr1:%d ",arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("arr2:%d ", arr2[i]);
	}
	return 0;
}
//void maopao(int arr[],int n)
//{
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = 0; j < n -i-1; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tem=0;
//				tem = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tem;
//			}
//		}
//	}
// }
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr,n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void recech(char arr[], int left, int right)
//{
//	if (left < right)
//	{
//		char tem;
//		tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		recech(arr, left + 1, right - 1);
//	}
//}
//int main()
//{
//	char arr[]="asdf";
//	int left = 0;
//	int right = 3;
//	recech(arr,left,right);
//	printf("%s", arr);
//	return 0;
//}