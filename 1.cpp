#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define TRUE 1
#define FALSE 0
typedef struct ElemType			/*����ѧ���ɼ���������Ԫ������*/
{
	char num[13];			/*ѧ��*/
	char name[8];			/*����*/
	char classname[15];	/*רҵ�༶*/
	int score;				/*�ɼ�*/
} ElemType;

typedef struct
{
	ElemType elem[MAXSIZE];	/*�洢��ѧ����Ϣ������*/
	int length;					/*ѧ����*/
}SqList;					/*˳���,�洢ѧ���б�*/
void OutPut(SqList L)   /*���˳���*/
{
	int i;
	printf("\nѧ��\t\t����\tרҵ�༶\t�ɼ� \n");
	for (i = 0; i < L.length; i++)
		printf("%s\t%s\t%s\t\t%d \n", L.elem[i].num,
			L.elem[i].name, L.elem[i].classname, L.elem[i].score);
	printf("\n����������!");
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
		printf("�Ҳ�����ֵ");
		return FALSE;
	}
}
int Delete(SqList* L, int i)
{
	int j;
	if (L->length == 0)
	{
		printf("��Ϊ�գ��޷�ɾ��");
		return FALSE;
	}
	else if (i<1 || i>L->length)
	{
		printf("ɾ��λ�ò�����");
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
		printf("\n���������");
		return FALSE;
	}
	else if (i<1 || i>L->length)
	{
		printf("\n����λ�ò��Ϸ���");
		return FALSE;
	}
	else
	{
		for (a = 0; a < L->length; a++)
		{
			if (stricmp(L->elem[a].num, x.num) == 0)
			{
				printf("\nѧ���ظ�,���ɲ��룡\n");
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

	//���� 161�� 
	strcpy(e1.num, "201605000001");
	strcpy(e1.name, "����");
	strcpy(e1.classname, "������161");
	e1.score = 60;

	//���� 162�� 
	strcpy(e2.num, "201605000002");
	strcpy(e2.name, "����");
	strcpy(e2.classname, "������162");
	e2.score = 80;

	//���� 162�� 
	strcpy(e3.num, "201605000003");
	strcpy(e3.name, "����");
	strcpy(e3.classname, "������162");
	e3.score = 70;


	SqList sq1;
	sq1.elem[0] = e1;
	sq1.elem[1] = e2;
	sq1.elem[2] = e3;
	sq1.length = 3;
	SqList* sq;
	sq = &sq1;
	OutPut(sq1);

	printf("\n\n����λ��: %d\n",Locate(sq1,e3.num));

	printf("\n\nɾ���˵�һλ�Ժ�");
	Delete(sq,1);
	OutPut(sq1);

	printf("\n\n�Ӽ���Ԫ���Ժ�");
	Insert(sq,1,e1);
	Insert(sq,1,e1);
	OutPut(sq1);
}
