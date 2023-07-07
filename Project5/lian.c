#include<stdio.h>
#include<math.h>
#include<Windows.h>
#include<stdlib.h>
//int fie(int n)
//{
//	if (2 == n)
//	{
//		return 2;
//	}
//	if (1 == n)
//	{
//		return 1;
//	}
//	else
//	{
//		return fie(n - 1) + fie(n - 2);
//	}
//}
//int main()
//{
//	int a = 0;
//	int s = 0;
//	scanf_s("%d", &a);
//	s=fie(a);
//	printf("%d", s);
//}
//int main()
//{
//	int arr[50] = { 0 };
//	int a = 0;
//	int cut = 0;
//	int j = 0;
//	scanf_s("%d", &a);
//	for (int i = 0; i < a;i++)
//	{
//		int s = 0;
//		scanf_s("%d", &s);
//		arr[i] = s;
//	}
//	scanf_s("%d", &cut);
//	for (int i = 0; i < a; i++)
//	{
//		if (i != cut)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//int main()
//{
//	int a = 0;
//	int min =100;
//	int max = 0;
//	int s = 0;
//	int arr[100] = { 0 };
//	scanf_s("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		scanf_s("%d", &s);
//		arr[i] = s;
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d", max - min);
//	return 0;
//}
//int main()
//{
//	for (int i = 10000; i < 99999; i++)
//	{
//		int sum = 0;
//		for (int j = 1; j <= 4; j++)
//		{
//			int k = (int)pow(10, j);
//			sum += (i % k) * (i / k);
//		}
//		if (i == sum)
//		{
//			printf(" %d ", i);
//		}
//	}
// return 0;
//}
//int jishu(unsigned int n)
//{
//	int count = 0;
//	while (n>0)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数: \n");
//	scanf_s("%d", &n);
//	int count = jishu(n);
//	printf("该数的二进制形式中1的个数为：%d\n", count);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数：\n");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j || (i + j == n - 1))
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	while (1)
//	{
//		char arr[10][13] = {0};
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < 13; j++)
//			{
//				arr[i][j] = ' ';
//			}
//		}
//		system("color 04");
//		int x = 3;
//		int y = 6;
//		arr[x][y] = '*';
//		int a = y;
//		int b = y;
//		for (x = 2; x >= 0; x--)
//		{
//			arr[x][--a] = '*';
//			arr[x][++b] = '*';
//		}
//		for (x = 1; x <= 3; x++)
//		{
//			arr[x][--a] = '*';
//			arr[x][++b] = '*';	
//		}
//		for (x = 4; x < 10; x++)
//		{
//			arr[x][++a] = '*';
//			arr[x][--b] = '*';
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < 13; j++)
//			{
//				printf("%c ", arr[i][j]);
//			}
//			printf("\n");
//		}
//		Sleep(500);
//		system("cls");
//		//Sleep(500);
//		
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < 13; j++)
//			{
//				arr[i][j] = ' ';
//			}
//		}
//		system("color 05");
//		arr[4][6] = '*';
//		for (x = 3; x >= 2; x--)
//		{
//			arr[x][--a] = '*';
//			arr[x][++b] = '*';
//		}
//		for (x = 3; x <= 4; x++)
//		{
//			arr[x][--a] = '*';
//			arr[x][++b] = '*';
//		}
//		for (x = 5; x < 9; x++)
//		{
//			arr[x][++a] = '*';
//			arr[x][--b] = '*';
//		}
//		for (int i = 0; i < 9; i++)
//		{
//			for (int j = 0; j < 13; j++)
//			{
//				printf("%c ", arr[i][j]);
//			}
//			printf("\n");
//		}
//		Sleep(500);
//		system("cls");
//		//Sleep(500);
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < 13; j++)
//			{
//				arr[i][j] = ' ';
//			}
//		}
//		system("color 06");
//		arr[5][6] = '*';
//		for (x = 4; x >3; x--)
//		{
//			arr[x][--a] = '*';
//			arr[x][++b] = '*';
//		}
//		for (x = 5; x <6; x++)
//		{
//			arr[x][--a] = '*';
//			arr[x][++b] = '*';
//		}
//		for (x = 6; x <8; x++)
//		{
//			arr[x][++a] = '*';
//			arr[x][--b] = '*';
//		}
//		for (int i = 0; i < 9; i++)
//		{
//			for (int j = 0; j < 13; j++)
//			{	
//				printf("%c ", arr[i][j]);
//			}
//			printf("\n");
//		}
//		Sleep(500);
//		system("cls");
//		//Sleep(500);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	printf("请输入两个数:\n");
//	scanf_s("%d%d", &a, &b);
//	if (a >= b)
//	{
//		c = a;
//	}
//	else
//	{
//		c = b;
//	}
//	for (; c <= a * b; c++)
//	{
//		if (c % a == 0 && c % b == 0)
//		{
//			break;
//		}
//	}
//	printf("两数最小公倍数为: %d", c);
//	return 0;
//}
//
//int main()
//{
//	int arr[3] = { 0 };
//	printf("璇疯緭鍏ヤ笁鍜屾暣鏁癨n");
//	for (int i = 0; i < 3; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = i + 1; j < 3; j++)
//		{
//			int tem = 0;
//			if (arr[i] > arr[j])
//			{
//				tem = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tem;
//			}
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("浠庡皬鍒板ぇ椤哄簭涓?%d ", arr[i]);
//	}
//	return 0;
//}
//int mystrlen(char* arr)
//{
//	int count = 0;
//	while (*arr)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int mystrcmp(char* arr, char* a1)
//{
//	while (*arr != '\0' || *a1 != '\0')
//	{
//		if (*arr != *a1)
//		{	
//			return -1;
//		}
//		arr++;
//		a1++;
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] =  "asdfghkl" ;
//	char arr1[] = "asdfghkl" ;
//	int a=mystrcmp(arr, arr1);
//	//int a=mystrlen(arr);
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 8,3,2,2,5,6,7,8,8,9 };
//	int left = 0;
//	int right = 9;
//	while (left < right)
//	{
//		while (arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		int tem = 0;
//		if (left < right)
//		{
//			tem = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tem;
//			left++;
//			right--;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
int main()
{
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	int arr3[2000] = { 0 };
	printf("请输入两个数字分别代表两组数的个数。\n");
	int m, n;
	scanf_s("%d%d", &m, &n);
	printf("请输入第一组数据：\n");
	for (int i = 0; i < m; i++)
	{
		scanf_s("%d", &arr1[i]);
	}
	printf("请输入第二组数据：\n");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr2[i]);
	}
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < m && j < n)
	{
		if (arr1[i] < arr2[j])
		{
			arr3[k] = arr1[i];
			i++;
			k++;
		}
		else
		{
			arr3[k] = arr2[j];
			j++;
			k++;
		}
	}
	if (i !=m)
	{
		while (i < m)
		{
			arr3[k] = arr1[i];
			k++;
			i++;
		}
	}
	if (j != n )
	{
		while (j < n)
		{
			arr3[k] = arr2[j];
			k++;
			j++;
		}
	}
	k = 0;
	for (k = 0; k < m + n; k++)
	{
		printf("%d ", arr3[k]);
	}
	return 0;
}