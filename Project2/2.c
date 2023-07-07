#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=getmax(a, b);
//
//	printf("max=%d", max);
//	return 0;
//}
//int getmax(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
// int is_prim(int n)
//{
//	int i=0;
//	for ( i = 2; i <= n / 2; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if ( is_prim(i) == 1)
//		{
//			printf("%d  ", i);
//		}
//	}
//	return 0;
//}
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k;
//	int ret;
//	int sz = (sizeof(arr) / sizeof(arr[0])) - 1;
//	printf("请输入你要查询的数: \n");
//	scanf("%d", &k);
//	ret = binary_search(arr, k,sz);
//	if (-1 == ret)
//	{
//		printf("未找到\n");
//	}
//	else
//	{
//		printf("所查找数的下标为%d", ret);
//	}
//	return 0;
//}
//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
// }
//int str(char* st)
//{
//	if (*st != '\0')
//	{
//		return 1 + str(st+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "asd";
//	int len = str(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	printf("请输入你要计算阶乘的数：\n");
//	scanf("%d", &input);
//	ret = fac(input);
//	printf("该数的阶乘为：%d", ret);
//	return 0;
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//void move(char pos1,char pos2)
//{
//	printf(" %c->%c ", pos1,pos2);
//}
//void hanno(int n, char pos1, char pos2, char pos3)
//{
//	if (1 == n)
//	{
//		move(pos1, pos3);
//	}
//	else
//	{
//		hanno(n - 1, pos1, pos3, pos2);
//		move(pos1,pos3);
//		hanno(n - 1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	hanno(5, 'A', 'B', 'C');
//	return 0;
//}
