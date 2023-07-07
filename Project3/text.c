#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
#include<stdlib.h>
void jiemie()
{
	printf("****************************\n");
	printf("\n");
	printf("*****1:play       0:esc*****\n");
	printf("\n");
	printf("****************************\n");
	printf("\n");
}
int main()
{
	int input = 0;
	do
	{
		jiemie();
		printf("请选择:\n");
		scanf("%d", &input);
		if (1 == input)
		{
			game();
		}
		else if (0 == input)
		{
			break;
		}
		else
		{
			printf("输入错误请重新输入\n");
		}
	} while (input);
	return 0;
}