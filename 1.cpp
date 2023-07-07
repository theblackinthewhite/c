#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define TRUE 1
#define FALSE 0
typedef struct ElemType			/*定义学生成绩表中数据元素类型*/
{
	char num[13];			/*学号*/
	char name[8];			/*姓名*/
	char classname[15];	/*专业班级*/
	int score;				/*成绩*/
} ElemType;

typedef struct
{
	ElemType elem[MAXSIZE];	/*存储各学生信息的数组*/
	int length;					/*学生数*/
}SqList;					/*顺序表,存储学生列表*/
void OutPut(SqList L)   /*输出顺序表*/
{
	int i;
	printf("\n学号\t\t姓名\t专业班级\t成绩 \n");
	for (i = 0; i < L.length; i++)
		printf("%s\t%s\t%s\t\t%d \n", L.elem[i].num,
			L.elem[i].name, L.elem[i].classname, L.elem[i].score);
	printf("\n数据输出完毕!");
}
int Locate(SqList L, char number[12])
{
	int i;
	for (i = 0; i < L.length; i++)
	{
		if (strcmp(L.elem[i].num, number) == 0)
		{
			return (i + 1);
		}
	}
	if (i >= L.length)
	{
		printf("找不到该值");
		return FALSE;
	}
}
int Delete(SqList* L, int i)
{
	int j;
	if (L->length == 0)
	{
		printf("表为空，无法删除");
		return FALSE;
	}
	else if (i<1 || i>L->length)
	{
		printf("删除位置不合理");
		return FALSE;
	}
	else
	{
		for (j = i; j <= L->length - 1; j++)
		{
			L->elem[j - 1] = L->elem[j];
		}
		L->length--;
		return TRUE;
	}
}
int Insert(SqList* L, int i, ElemType x)
{
	int a, j;
	if (L->length == MAXSIZE)
	{
		printf("\n表满溢出！");
		return FALSE;
	}
	else if (i<1 || i>L->length)
	{
		printf("\n插入位置不合法！");
		return FALSE;
	}
	else
	{
		for (a = 0; a < L->length; a++)
		{
			if (stricmp(L->elem[a].num, x.num) == 0)
			{
				printf("\n学号重复,不可插入！\n");
				return FALSE;
			}
		}
		for (j = L->length - 1; j >= i - 1; j--)
		{
			L->elem[j + 1] = L->elem[j];
		}
		L->elem[i - 1] = x;
		L->length++;
		return TRUE;
	}
}
int main()
{
	ElemType e1, e2, e3;

	//张三 161班 
	strcpy(e1.num, "201605000001");
	strcpy(e1.name, "张三");
	strcpy(e1.classname, "物联网161");
	e1.score = 60;

	//李四 162班 
	strcpy(e2.num, "201605000002");
	strcpy(e2.name, "李四");
	strcpy(e2.classname, "物联网162");
	e2.score = 80;

	//王五 162班 
	strcpy(e3.num, "201605000003");
	strcpy(e3.name, "王五");
	strcpy(e3.classname, "物联网162");
	e3.score = 70;


	SqList sq1;
	sq1.elem[0] = e1;
	sq1.elem[1] = e2;
	sq1.elem[2] = e3;
	sq1.length = 3;
	SqList* sq;
	sq = &sq1;
	OutPut(sq1);

	printf("\n\n变量位置: %d\n",Locate(sq1,e3.num));

	printf("\n\n删除了第一位以后");
	Delete(sq,1);
	OutPut(sq1);

	printf("\n\n加几个元素以后");
	Insert(sq,1,e1);
	Insert(sq,1,e1);
	OutPut(sq1);
}
