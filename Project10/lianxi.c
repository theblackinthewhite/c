#define _CRT_SECURE_NO_WARNINGS
#include"xuesheng.h"
int main()
{
	int b=0;
	shuju d = { {0},{0},{0} };
	SqList L = { {0},{0} };
	jiazai(&L);
	caidan();
	while(scanf("%d", &b)&&b!=5)
	{
		system("cls");
	    int a = 0,c=0;
		char g[10] = { 0 };
		switch (b)
		{
		    case 0:
			{
				chushishuru(&L,&d);
				xianshi(&L);
				printf("��1�������˵��������˳�ϵͳ��\n");
				baocun(&L);
				scanf("%d", &c);
				system("cls");
				if (1 == c)
				{
					break;
				}
				else
				{
					return 0;
				}
			}
			case 1:
			{
				printf("���������λ��\n");
				scanf("%d", &a);
				charu(&L,a,&d);
				printf("��1�������˵��������˳�ϵͳ��\n");
				baocun(&L);
				scanf("%d", &c);
				system("cls");
				if (1 == c)
				{
					break;
				}
				else
				{
					return 0;
				}
			}
			case 2:
			{
				printf("������Ҫɾ����λ��\n");
				scanf("%d", &a);
				shanchu(&L, a);
				printf("��1�������˵��������˳�ϵͳ��\n");
				baocun(&L);
				scanf("%d", &c);
				system("cls");
				if (1 == c)
				{
					break;
				}
				else
				{
					return 0;
				}
			}
			case 3:
			{
				printf("������Ҫ���Ҷ����ѧ��\n");
				scanf("%s", &g);
				chazhao(&L,g);
				printf("��1�������˵��������˳�ϵͳ��\n");
				scanf("%d", &c);
				system("cls");
				if (1 == c)
				{
					break;
				}
				else
				{
					return 0;
				}
			}
			case 4:
			{
				xianshi(&L);
				printf("��1�������˵��������˳�ϵͳ��\n");
				scanf("%d", &c);
				system("cls");
				if (1 == c)
				{
					break;
				}
				else
				{
					return 0;
				}
			}
			case 5:
			{
				baocun(&L);
				return 0;
			}
		}
		caidan();
	} 
}