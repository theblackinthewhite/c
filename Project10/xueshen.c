#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"xuesheng.h"
void jiazai(SqList* L)
{
	FILE* zr = fopen("texe.txt", "r");
	if (zr == NULL)
	{
		perror("zr");
		return;
	}
	else
	{
		while (!feof(zr))
		{	
			fscanf(zr, "%s %s %s ", L->s[L->length].data, L->s[L->length].name, L->s[L->length].sex);
			L->length++;
		}
	}
	fclose(zr);
	zr = NULL;
}
void baocun(SqList* L)
{
	
	FILE* bc = fopen("texe.txt", "w");
	if (bc == NULL)
	{
		perror("bc");
		return;
	}
	else
	{
		for (int i = 0; i < L->length; i++)
		{
			fprintf(bc,"%s %s %s ", L->s[i].data, L->s[i].name, L->s[i].sex);
		}
	}
	fclose(bc);
	bc = NULL;
}
void shuru(shuju* d)
{
	while (1)
	{
		printf("������ѧ��\n");
		scanf("%s", d->data);
		if (d->data[19] != 0)
		{
			printf("���ȹ�����������\n");
			for (int i = 0; i < 20; i++)
			{
				d->data[i] = 0;
			}
		}
		else
		{
			break;
		}
	}
	while (1)
	{
		printf("����������\n");
		scanf("%s", d->name);
		if (d->name[19] != '\0')
		{
			printf("���ȹ�����������\n");
			for (int i = 0; i < 20; i++)
			{
				d->name[i] = 0;
			}
		}
		else
		{
			break;
		}
	}
	while (1)
	{
		printf("�������Ա�\n");
		scanf("%s", d->sex);
		if (d->sex[4] != 0)
		{
			printf("���ȹ�����������\n");
			for (int i = 0; i < 5; i++)
			{
				d->sex[i] = 0;
			}
		}
		else
		{
			break;
		}
	}
}
void xianshi(SqList* L)
{
	for (int i = 0; i < L->length; i++)
	{
		printf("ѧ�ţ�%s  ������%s  �Ա�%s ", L->s[i].data,L->s[i].name, L->s[i].sex);
		printf("\n");
	}
	printf("\n");
}
int charu(SqList* l,int a, shuju* d)
{
	if (l->length == Maxsise)
	{
		printf("����!");
		return 0;
	}
	else if (a<1 || a>Maxsise)
	{
		printf("����λ�ò��Ϸ�\n");
		return 0;
	}
	else
	{
		for (int j = l->length-1; j >= a - 1; j--)
		{
			l->s[j+1] = l->s[j];
		}
		shuru(d);
		for (int i = 0; i < Maxsise; i++)
		{
			if (strcmp(l->s[i].data, d->data) == 0)
			{
				printf("�����ѧ����֮ǰ�������ظ�!!!������������Ϣ������\n");
				shuru(d);
			}
		}
		l->s[a-1] = *d;
		l->length++;
	}
}
int shanchu(SqList* l, int a)
{
	if (l->length == 0)
	{
		printf("���\n");
		return 0;
	}
	else if (a<1 || a>Maxsise)
	{
		printf("ɾ��λ�ò��Ϸ�\n");
		return 0;
	}
	else
	{
		l->s[a - 1] = (struct shuju){ '0','0','0' };
		for (int j = a; j <= l->length-1; j++)
		{
			l->s[j - 1] = l->s[j];
		}
		l->length--;
	}
}
void chazhao(SqList* L, char a[10])
{
	int i = 0;
	for ( i = 0; i < L->length; i++)
	{
		if (strcmp(L->s[i].data , a)==0)
		{
			printf("ѧ�ţ�%s   ������%s     �Ա�%s   ", L->s[i].data, L->s[i].name, L->s[i].sex);
			break;
		}
	}
	if (i >= L->length)
	{
		printf("δ�ҵ����ݣ�����\n");
	}
}
void chushishuru(SqList* L,shuju* d)
{
	int x = 0,i=0;
	while (1)
	{
		shuru(d);
		for (int i = 0; i < Maxsise; i++)
		{
			if (strcmp(L->s[i].data,d->data) == 0)
			{
				printf("�����ѧ����֮ǰ�������ظ�!!!������������Ϣ������\n");
				shuru(d);
			}
		}
		L->s[i] = *d;
		i++;
		L->length++;
		printf("1���������     0���˳�");
		if (scanf("%d", &x))
		{
			if (0 == x)
			{
				break;
			}
		}
	}
}
void  caidan()
{
	printf("#############################################################\n");
	printf("############            ��Ϣ����ϵͳ             ############\n");
	printf("########0:        ��ϵͳ���г�ʼ��������           ##########\n");
	printf("########1��             ����������                 ##########\n");
	printf("########2��              ɾ������                  ##########\n");
	printf("########3��              ��������                  ##########\n");
	printf("########4��            ��ʾȫ����Ϣ                ##########\n");
	printf("########5��                �˳�                    ##########\n");
	printf("#############################################################\n");
}