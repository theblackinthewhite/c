#include"game.h"
void chushihua(char arr[ROWS][COLS], int row, int col, char ret)
{
	for (int i = 0; i <row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = ret;
		}
	}
}
void dayin(char arr[ROWS][COLS], int row, int col)
{
	printf("-------扫雷游戏------\n");
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("-------扫雷游戏------\n");
}
void mailei(char arr[ROWS][COLS], int row, int col)
{
	int count = easy;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}
int tishi(char arr[ROWS][COLS], int x, int y)
{
	return (arr[x - 1][y - 1] + 
		    arr[x - 1][y] +
		    arr[x - 1][y + 1]+
	        arr[x][y - 1] +
		    arr[x][y + 1] +
		    arr[x + 1][y - 1] + 
		    arr[x + 1][y] +
		    arr[x + 1][y + 1] - 8 * '0');
}
void biaoji(char arr[ROWS][COLS])
{
	int z = 0;
	do
	{
		printf("你要标记雷吗(1表示要，其余数字表示不要)\n");
		scanf_s("%d", &z);
		if (1 == z)
		{
			int i = 0;
			int j = 0;
			printf("请输入你要标记的坐标\n");
			scanf_s("%d%d", &i, &j);
			arr[i][j] = '#';
			dayin(arr, ROW, COL);
		}
	} while (z == 1);
}
void pailei(char lei[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	
	while (win<row*col-easy)
	{
		
		int x;
		int y;
		biaoji(show);
		printf("请输入排雷的坐标\n");
		scanf_s("%d%d", &x, &y);
		if (x > 0 && x <= ROW && y > 0 && y <= COL)
		{
			if (show[x][y] != '*')
			{
				printf("该点你以排过雷，请勿重复排雷\n");
			}
			else
			{
				if (lei[x][y] != '1')
				{
					win++;
					int set = tishi(lei, x, y);
					show[x][y] = set + '0';
					dayin(show, ROW, COL);
					system("cls");
					dayin(show, ROW, COL);
				}
				else
				{
					printf("恭喜你被炸死了\n");
					dayin(lei, ROW, COL);
					break;
				}
			}
		}
		else
		{
			printf("输入超限制，请重新输入\n");
		}
		if (win == row * col - easy)
		{
			printf("游戏胜利！\n");
			dayin(lei, ROW, COL);
		}
	}
}
void zhankai(char lei[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int	y = 0;
	char z = '0';
	int set = tishi(lei, x, y);
	x = rand() % row + 1;
	y = rand() % col + 1;
	z = set + '0';
	while (z != '0' || lei[x][y] == 1)
	{
		 x = rand() % row + 1;
		 y = rand() % col + 1;
		 set = tishi(lei, x, y);
		 z = set + '0';
	}
	digui(lei,show,x, y);
}
void digui(char lei[ROWS][COLS], char show[ROWS][COLS],int x, int y)
{
	if (x > 0 && x <= ROW && y > 0 && y <= COL)
	{
		if (show[x][y] != ' ')
		{
			int set = tishi(lei, x, y);
			if ((set + '0') == '0')
			{
				show[x][y] = ' ';
				for (int i = x - 1; i <= x + 1; i++)
				{
					for (int j = y - 1; j <= y + 1; j++)
					{
						digui(lei, show, i, j);
					}
				}
			}
			else
			{
				show[x][y] = set + '0';
			}
		}
	}	
}
void game()
{
	char lei[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	chushihua(lei, ROWS, COLS, '0');
	chushihua(show,ROWS,COLS, '*');
	mailei(lei, ROW, COL);
	zhankai(lei,show, ROWS, COLS);
	dayin(show, ROW, COL);
	//dayin(lei, ROW,COL);
	pailei(lei,show, ROW, COL);	
}