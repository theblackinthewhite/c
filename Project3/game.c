#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void dayingqipan(char qipan[hang][lie], int han, int li)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < han; i++)
	{
		for (j = 0; j < li; j++)
		{
			qipan[i][j] = ' ';
		}
	}
}
void dy(char qipan[hang][lie], int han, int li)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < han; i++)
	{
		for (j = 0; j < li; j++)
		{
			printf(" %c ", qipan[i][j]);
			if (j < li - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < han - 1)
		{
			for (j = 0; j < li ; j++)
			{
				printf("---");
				if (j < li - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void game()
{
	char ret;
	char qipan[hang][lie];
	dayingqipan(qipan, hang, lie);
	dy(qipan,hang,lie);
	while (1)
	{
		wanjia(qipan, hang, lie);
		dy(qipan, hang, lie);
		ret = panduan(qipan, hang, lie);
		if (ret != 'c')
		{
			if (ret == 'w')
			{
				printf("��һ�ʤ\n");
				dy(qipan, hang, lie);
				break;
			}
			if (ret == 'q')
			{
				printf("ƽ��\n");
				dy(qipan, hang, lie);
				break;
			}
		}
		diannao(qipan, hang, lie);
		dy(qipan, hang, lie);
		ret=panduan(qipan, hang, lie);
		if (ret != 'c')
		{
			if (ret == 'd')
			{
				printf("���Ի�ʤ\n");
				dy(qipan, hang, lie);
				break;
			}
			if (ret == 'q')
			{
				printf("ƽ��\n");
				dy(qipan, hang, lie);
				break;
			}
		}
	}
}
void wanjia(char qipan[hang][lie],int  han,int  li)
{
	int x=1, y=1;
	printf("�������:\n");
	while (x>=1 && x<=3 && y>=1 && y <= 3)
	{
		printf("��������Ҫ�µ�λ�����꣺");
		scanf("%d%d", &x, &y);
		if (qipan[x - 1][y - 1] == ' ')
		{
			qipan[x - 1][y - 1] = '*';
			break;
		}
		if (qipan[x - 1][y - 1] != ' ')
		{
			printf("��Ϲ�����������壬���յĵط���\n");
		}
	}
	if (x < 1 || x > 3 || y  < 1 || y > 3)
	{
		printf("���볬��\n");
	}
}
void diannao(char qipan[hang][lie], int  han, int  li)
{
	int x = 0, y = 0;
	printf("��������\n");
	
		    if (qipan[1][1] != '*'&& qipan[1][1]!='#')
			{
				qipan[1][1] = '#';
				
			}
			else if (qipan[0][0] != '*' && qipan[0][0] != '#')
			{
				qipan[0][0] = '#';
			}
			else if (qipan[0][2] != '*' && qipan[0][2] != '#')
			{
				qipan[0][2] = '#';
			}
			else if (qipan[2][0] != '*' && qipan[2][0] != '#')
			{
				qipan[2][0] = '#';
			}
			else if (qipan[2][2] != '*' && qipan[2][2] != '#')
			{
				qipan[2][2] = '#';
			}
			else
			{
				for (x = 0; x < hang; x++)
				{
					for (y = 0; y < lie; y++)
					{
						if (qipan[x][y] != '#'&& qipan[x][y] != '*')
						{
							qipan[x][y] = '#';
						}
					}
				}
					
			}
	

}
char panduan(char qipan[hang][lie], int  han, int  li)
{
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		if (qipan[i][0] == qipan[i][1] && qipan[i][1] == qipan[i][2] && qipan[i][2] == '*')
		{
			return 'w';
		}
		if (qipan[i][0] == qipan[i][1] && qipan[i][1] == qipan[i][2] && qipan[i][2] == '#')
		{
			return 'd';
		}
	}
	for (j = 0; j < 3; j++)
	{
		if (qipan[0][j] == qipan[1][j] && qipan[1][j] == qipan[2][j] && qipan[2][j] == '*')
		{
			return 'w';
		}
		if (qipan[0][j] == qipan[1][j] && qipan[1][j] == qipan[2][j] && qipan[2][j] == '#')
		{
			return 'd';
		}
	}
	if (qipan[0][0] == qipan[1][1] && qipan[1][1] == qipan[2][2] && qipan[2][2] == '*')
	{
		return 'w';
	}
	if (qipan[0][0] == qipan[1][1] && qipan[1][1] == qipan[2][2] && qipan[2][2] == '#')
	{
		return 'd';
	}
	if (qipan[0][2] == qipan[1][1] && qipan[1][1] == qipan[2][0] && qipan[2][0] == '*')
	{
		return 'w';
	}
	if (qipan[0][2] == qipan[1][1] && qipan[1][1] == qipan[2][0] && qipan[2][0] == '#')
	{
		return 'd';
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (qipan[i][j] == ' ')
			{
				return 'c';
			}
		}
	}
	if (i == 3)
	{
		return 'q';
	}
}