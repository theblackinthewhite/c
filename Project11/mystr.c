#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////int my_strcmp(const char* arr1,const* arr2,int a)
////{
////	char* p = arr1;
////	char* p1 = arr2;
////	while (*p == *p1 && a != 0)
////	{
////		p++;
////		p1++;
////		a--;
////	}
////	if (0 == a)
////	{
////		return 0;
////	}
////	else if (*p > *p1)
////	{
////		return 1;
////	}
////	else
////	{
////		return -1;
////	}
////}
//char* my_strstr(const char* arr1, const char* arr2)
//{
//	char* p = arr1;
//	char* p1 = arr2;
//	char* p2 = arr1;
//	while (*p2)
//	{
//		while(*p == *p1&& *p1 != '\0')
//		{
//			p++; p1++;
//		}
//		if (*p1 == '\0')
//		{
//			return p2;
//		}
//		else
//		{
//			p1 = arr2;
//			p2++;
//			p = p2;
//		}
//	}
//		return NULL;
//}
//int main()
//{
//	char arr1[30] = "asdsdfff";
//	char arr2[30] = "ff";
//	/*int ret = my_strcmp(arr1, arr2, 3);
//	if (0 == ret)
//	{
//		printf("=\n");
//	}
//	else if (ret < 0)
//	{
//		printf("<\n");
//	}
//	else if ("ret>0")
//	{
//		printf(">\n");
//	}*/
//	char* p = my_strstr(arr1, arr2);
//	if (p == NULL)
//	{
//		printf("ÎÞ¸Ã×Ó´®\n");
//	}
//	else
//	{
//		printf("%s", p);
//	}
//	return 0;
//}
int main()
{
	int a = -35;
	unsigned int b = 50;
	printf("%u", a + b);
	return 0;
}
