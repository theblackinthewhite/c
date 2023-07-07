#include<stdio.h>
//int may_strcmp(const char* str1, const char* str2)
//{
//	int set = 0;
//	while (*str1)
//	{
//		if (*str1 < *str2)
//		{
//			set = -1;
//			break;
//		}
//		if (*str1 > *str2)
//		{
//			set = 1;
//			break;
//		}
//		if (*str1 == *str2)
//		{
//			str1++;
//			str2++;
//		}
//	}
//	if (*str1 == '\0' && *str2 == '\0')
//	{
//		set = 0;
//	}
//	return set;
//}
//int main()
//{
//	/*int arr[10][10] = { 0 };
//	int a = 1;
//	int b = 1;
//	for (a = 0; a < 10; a++)
//	{
//		for (b = 0; b <= a; b++)
//		{
//			arr[a][0] = 1;
//			if (a == b)
//			{
//				arr[a][b] = 1;
//			}
//			if (a > 1 && b >= 1)
//			{
//				arr[a][b] = arr[a - 1][b - 1] + arr[a - 1][b];
//			}
//			printf("%d ", arr[a][b]);
//		}
//		printf("\n");
//	}*/
//	char arr[] = "asdfcg";
//	char arr1[] = "asdfgg";
//	int set = may_strcmp(arr, arr1);
//	printf("%d ", set);
//	return 0;
//}
//取出一个整数的第 k 位
//问题描述：即将一个数的二进制数的从右数起的第
//k 为二进制数字输出。
int main()
{
	int i = 0;
	int k = 0;
	printf("请输入你要操作的数字\n");
	scanf_s("%d", &i);
	printf("输入要取的位数\n");
	scanf_s("%d", &k);
	i >>= k - 1;
	int j = i & 1;
	printf("%d ", j);
	return 0;
}