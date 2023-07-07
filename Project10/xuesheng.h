#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define Maxsise 10
typedef struct shuju
{
	char data[20];
	char name[20];
	char sex[5];
}shuju;
typedef struct
{
	shuju s[Maxsise];
	int length;
}SqList;
void xianshi(SqList* L);
int charu(SqList* l, int a,shuju* d);
int shanchu(SqList* l, int a);
void chazhao(SqList* L, char a[10]);
void  caidan();
void chushishuru(SqList* L,shuju* d);
void jiazai(SqList* L);
void baocun(SqList* L);
void shuru(shuju* d);
