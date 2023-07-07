#define  CRT_SECURE_NO_WARNINGS
#include "game.h"
void caidan()
{
	printf("*************************************\n");
	printf("******          1:play         ******\n");
	printf("******          0:Esc          ******\n");
	printf("*************************************\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		caidan();
		printf("请输入你的选择\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误请重新输入\n");
		}
	} while (input);
	return 0;
}