#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<strmif.h>
#include<conio.h>
//	//{
//		/*float num;
//		float num2;
//		float v;
//		printf("hello world\n");
//		scanf_s("%f",&num);
//		scanf_s("%f", &num2);
//		v = (num + num2) / 2;
//
//		printf("二者平均值为：%f\n",v );*/
//		/*int a;
//		while (1)*/
//		//{
//		//	scanf_s("%d", &a);
//		//	if (a % 2 == 0)
//		//	{
//		//		printf("偶数\n");
//		//	}
//		//	else
//		//	{
//		//		printf("奇数\n");
//		//	}
//		//}
//		/*for (int i = 0; i < 10; i++)
//		{
//			printf("i=%d\n", i);
//		}*/
//		//int a;
//		//int b = 0;
//		//printf("请输入一个正整数\n");
//		//scanf_s("%d", &a);
//		//while (0 != a)
//		//{
//		//	b = a % 10;
//		//	a = a / 10;
//		//	printf("%d", b);
//		//}
//		//int num,b;
//		//int i = 2;
//		//printf("请输入一个整张数\n");
//		//scanf_s("%d", &num);
//		//for ( i = 2; i<num/2; i++)
//		//{
//		//	b = num % i;
//		//	if (0 == b)
//		//	{
//		//		printf("不是素数");
//		//		break;
//		//	}	
//		//}
//		//if (i >= num/2) 
//		//{
//		//	printf("是素数");
//		//}
//
//		//printf("%c\n",'\'');
//		//int a;
//		//int b = 0;
//		//int arr[50] ;
//		//int i = 0;
//		//printf("请输入一个正整数\n");
//		//scanf_s("%d", &a);
//		//while (0 != a)
//		//{
//		//	b = a % 10;
//		//	a = a / 10;
//		//	arr[i] = b;
//		//	i++;
//		//}
//		//for (; i>0 && i < 50; i--)
//		//{
//		//	printf("%d  ", arr[i-1]);
//		//}
//		//int arr[10] = { 1,5,4,3,6,7,8,0,10,9 };
//		//for (int i = 0; i < 9; i++)
//		//{
//		//	for (int j = i + 1; j < 10; j++)
//		//	{
//		//		if (arr[i] < arr[j])
//		//		{
//		//			int a = arr[i];
//		//			int b = arr[j];
//		//			arr[i] = b;
//		//			arr[j] = a;
//		//		}
//		//	}
//		//}
//		//for (int i = 0; i < 10; i++)
//		//{
//		//	printf("%d   ", arr[i]);
//		//}
//		//int arr[5][5] = { 
//		//	{4,5,8,7,6},
//		//	{1,2,3,4,5},
//		//	{7,4,6,5,1},
//		//	{0,1,3,5,4},
//		//	{3,2,5,41,5,} };
//		//int a = 0;
//		//int b = 0;
//		//for (int i = 0; i < 5; i++)
//		//{
//		//	for (int j = 0; j < 5; j++)
//		//	{
//		//		if (arr[a][b] > arr[i][j])
//		//		{
//		//			a = i;
//		//		    b = j;
//		//		}
//		//		
//		//	}
//		//}
//		//if (a > 0 && a < 4 && b>0 && b < 4)
//		//{
//		//	printf("%d\n", arr[a - 1][b - 1] + arr[a - 1][b] + arr[a - 1][b + 1] + arr[a][b - 1] + arr[a][b + 1] + arr[a + 1][b - 1] + arr[a + 1][b] + arr[a + 1][b + 1]);
//		//}
//		//else if (0 == a && 0 == b)
//		//{
//		//	printf("%d\n", arr[a + 1][b] + arr[a][b + 1] + arr[a + 1][b + 1]);
//		//}
//		//else if (0 == a && 4 == b)
//		//{
//		//	printf("%d\n", arr[a][b - 1] + arr[a - 1][b - 1] + arr[a - 1][b]);
//		//}
//		//else if (4 == a && 0 == b)
//		//{
//		//	printf("4%d\n", arr[a - 1][b] + arr[a - 1][b + 1] + arr[a][b + 1]);
//		//}
//		//else if (4 == a && 4 == b)
//		//{
//		//	printf("%d\n", arr[a - 1][b] + arr[a - 1][b - 1] + arr[a][b - 1]);
//		//}
//		//else if (0 == a)
//		//{
//		//	printf("%d\n", arr[a - 1][b] + arr[a - 1][b + 1] + arr[a][b + 1] + arr[a - 1][b] + arr[a - 1][b + 1]);
//		//}
//		//else
//		//{
//		//	printf("%d\n", arr[a - 1][b] + arr[a - 1][b - 1] + arr[a][b - 1] + arr[a + 1][b] + arr[a - 1][b - 1]);
//		//};
//		//printf( "%d  %d",a,b );
//int main()
//{
//	int x = 1, y = 2;
//	char map[15][15] = {
//		{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
//		{'#','#','@',' ',' ',' ',' ','#','#','#','#','#','#','#','#'},
//		{'#','#','#','#','#','#',' ','#','#','#','#','#','#','#','#'},
//		{'#','#','#','#','#','#',' ','#','#','#','#','#','#','#','#'},
//		{'#','#','#','#','#','#',' ','#','#','#','#','#','#','#','#'},
//		{'#','#','#','#','#','#',' ','#','#','#','#','#','#','#','#'},
//		{'#','#','#','#','#','#',' ',' ',' ',' ',' ','#','#','#','#'},
//		{'#','#','#','#','#','#','#','#','#','#',' ','#','#','#','#'},
//		{'#','#','#','#','#','#','#','#','#',' ',' ','#','#','#','#'},
//		{'#','#','#','#','#','#','#','#','#',' ','#','#','#','#','#'},
//		{'#','#','#','#','#','#','#','#','#',' ','#','#','#','#','#'},
//		{'#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#'},
//		{'#','#','#','#','#','#','#','#','#','#','#','#',' ','#','#'},
//		{'#','#','#','#','#','#','#','#','#','#','#','#',' ','#','#'},
//		{'#','#','#','#','#','#','#','#','#','#','#','#','*','#','#'},
//
//	};
//	for (;;)
//	{
//		system("cls");
//		for (int i = 0; i < 15; i++)
//		{
//			for (int j = 0; j < 15; j++)
//			{
//				printf("%c  ", map[i][j]);
//			}
//			printf("\n");
//		}
//		//system("cls");
//		int cmd = _getch();
//		if (72 == cmd && map[x - 1][y] != '#')
//		{
//			map[x][y] = ' ';
//			x = x - 1;
//			map[x][y] = '@';
//		}
//		if (80 == cmd && map[x + 1][y] != '#')
//		{
//			map[x][y] = ' ';
//			x = x + 1;
//			map[x][y] = '@';
//		}
//		if (75 == cmd && map[x][y - 1] != '#')
//		{
//			map[x][y] = ' ';
//			y = y - 1;
//			map[x][y] = '@';
//		}
//		if (77 == cmd && map[x][y + 1] != '#')
//		{
//			map[x][y] = ' ';
//			y = y + 1;
//			map[x][y] = '@';
//		}
//		if (14 == x && 12 == y)
//		{
//			printf("恭喜通关");
//			return 0;
//		}
//	}
//}
//	//int arr[10], ch = 0,ret=0;
//	//printf("请输入你的密码：》\n");
//	//scanf_s("%d", arr);
//	//while ((ch = getchar()) != '\n')
//	//{
//	//	;
//	//}
//	//printf("请确认你输入的密码：（Y or N）\n");
//	//ret = getchar();
//	//if (ret == 'Y')
//	//{
//	//	printf("确认成功\n");
//	//}
//	//else
//	//{
//	//	printf("确认失败\n");
//	//}
//	//int n,a=1;
//	//printf("请输入一个数： \n");
//	//scanf_s("%d", &n);
//	//for (int i = 1; i <= n; i++)
//	//{
//	//	a = a * i;
//	//}
//	//printf("%d", a);
//	//int a = 1;
//	//int sum = 0;
//	//for (int i = 1; i <= 3; i++) 
//	//{
//	//	a = a * i;
//	//	sum = sum + a;
//	//}
//	//    printf("%d",sum);
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int left=0, right=sz-1, mid,n;
//	//printf("请输入你要查找的数字： ");
//	//scanf_s("%d", &n);
//	//while (left < right)
//	//{
//	//	mid = (left + right) / 2;
//	//	if (arr[mid] < n)
//	//	{
//	//		left = mid+1;
//	//	}
//	//	else if(arr[mid]>n)
//	//	{
//	//		right = mid - 1;
//	//	}
//	//	else
//	//	{
//	//		printf("找到了，下标为 ：%d\n", mid);
//	//		break;
//	//	}
//	//}
//	//if (left > right)
//	//{
//	//	printf("该目标中不含有你所查找的数字");
//	//}
//	//char arr1[] = "别看了就是你这个大傻逼";
//	//char arr2[] = "看看看看看看看看看看看";
//	//int left = 0;
//	//int right = strlen(arr1) - 1;
//	//for (;left < right;left++,right--)
//	//{
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	printf("%s\n", arr2);
//	//	Sleep(1000);
//	//	system("cls");
//	//}
//	//
//	//printf("别看了就是你这个大傻逼");
//	//char arr[20] = { 0 };
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("请输入你的密码：\n");
//	//	scanf("%s", arr);
//	//	if (strcmp("1314521", arr) == 0)
//	//	{
//	//		printf("密码输入正确\n");
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		printf("密码输入错误\n");
//	//	}
//	//}
//	//if (3 == i)
//	//{
//	//	printf("输错三次，设备已锁定");
//	//}
////int a = 0;
////int b = 0;
////int c = 0;
////int tem = 0;
////printf("请输入三个数\n");
////scanf_s("%d %d %d", &a,&b,&c);
////if (a < b)
////{
////	tem = a;
////	a = b;
////	b = tem;
////}
////if (a < c)
////{
////	tem = a;
////	a = c;
////	c = tem;
////}
////if (b < c)
////{
////	tem = b;
////	b = c;
////	c = tem;
////}
////printf("你输入的数字从大到小依次为：%d  %d  %d", a, b, c);
////int a = 0;
////int i = 0;
////for (i = 0; i < 100; i++)
////{
////	a = i % 3;
////	if (0 == a)
////	{
////		printf("%d\n", i);
////	}
////}
////int a = 0;
////for (int i = 0; i < 100; i++)
////{
////	if (a < 100)
////	{
////		a += 3;
////		printf("%d\n", a);
////	}
////}
////int a, b, c;
////printf("请输入两个数; \n");
////scanf("%d%d", &a, &b);
////while (a % b )
////{
////	c = a % b;
////	a = b;
////	b = c;
////}
////printf("两数最大公约数为：%d", b);
////	return 0;
////int a = 0;
////int b = 0;
////for (a = 1000; a < 2000; a++)
////{
////	if (a % 4 == 0 && a % 100 != 0)
////	{
////		printf("%d   ", a);
////		b++;
////	}
////	else if(0==a%400)
////	{
////		printf("%d  ", a);
////		b++;
////	}
////}
////printf("%d", b);
////int i = 0;
////int j = 0;
////int count = 0;
////for (i = 100; i <= 200; i++)
////{
////	for (j = 2; j < i/2; j++)
////	{
////		if (i % j == 0)
////		{
////			break;
////		}
////	}
////	if (i/2 < j)
////	{
////		printf("%d\n", i);
////		count++;
////	}
////}
////printf("其中素数的个数为：%d", count);
////int i = 0;
////for (i = 1; i <= 9; i++)
////{
////	for (int j = 1; j <= i; j++)
////	{
////		printf("%d*%d=%-2d   ", i, j, i * j);
////	}
////	printf("\n");
////}
////int a=0;
////srand((unsigned int)time(NULL));
////do 
////{
////	jiemie();
////	printf("请选择：\n");
////	scanf("%d", &a);
////	system("cls");
////	if (1 == a)
////	{
////		game();	
////	}
////	else if (0 == a)
////	{
////		printf("退出游戏\n");
////		break;
////	}
////	else
////	{
////		printf("输入错误\n");
////	}
////} while (a);
////return 0;
////}
////jiemie()
////{
////	printf("######################");
////	printf("###1:进入游戏0:退出###");
////	printf("######################");
////}
////game()
////{
////	int b = rand()%100+1;
////	int c = 0;
////
////	while (c != b)
////	{
////		printf("请输入你猜的数字：\n");
////		scanf("%d", &c);
////		if (c > b)
////		{
////			printf("猜大了\n");
////		}
////		else if(c<b)
////		{
////			printf("猜小了\n");
////		}
////	}
////	if (c == b)
////	{
////		printf("猜对了\n");
////		printf("3s后返回主页面");
////		Sleep(1000);
////		system("cls");
////		printf("猜对了\n");
////		printf("2s后返回主页面");
////		Sleep(1000);
////		system("cls");
////		printf("猜对了\n");
////		printf("1s后返回主页面");
////		Sleep(1000);
////		system("cls");
////	}
////}
////int main()
////{
////	int input = 0;
////	int tem = 0;
////	printf("请输入数据\n");
////	scanf("%d", &input);
////
////
////
////
////
////
////	return 0;
////}

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 10");
	while (1)
	{
		printf("你的电脑将在10秒内关机，如果输入：我是猪，就取消关机\n请输入：");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("小样，你在玩火。\n");
		}
	}
	return 0;
}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int left = 0;
//	int right = 8;
//	printf("原结果为：\n");
//	for (left = 0; left <= 8; left++)
//	{
//		printf("%d  ", arr[left]);
//	}
//	printf("\n");
//	printf( "逆序输出后结果为：\n" );
//	for (right = 8; right >= 0; right--)
//	{
//		printf("%d  ", arr[right]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int two = 0;
//	int tem = 0;
//	int input = 0;
//	printf("现有数据内容为：\n");
//	for (int i=0; i < 10; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	printf("请输入你要查找的内容：\n");
//	scanf("%d", &input);
//	for (two = 0; two < 10; two++)
//	{
//		if (arr[two] == input)
//		{
//			tem = arr[two];
//			arr[two] = arr[two + 1];
//			arr[two + 1] = tem;
//			break;
//		}
//	}
//	if (10 == two)
//	{
//		printf("未查到所输数据\n");
//	}
//	else
//	{
//		printf("查到数据并进行换位后的结果为：\n");
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d  ", arr[i]);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
//#define MAXSIZE 100
//#define TRUE 1
//#define FALSE 0
//typedef struct ElemType			/*定义学生成绩表中数据元素类型*/
//{
//	char num[13];			/*学号*/
//	char name[8];			/*姓名*/
//	char classname[15];	/*专业班级*/
//	int score;				/*成绩*/
//} ElemType;
//
//typedef struct
//{
//	ElemType elem[MAXSIZE];	/*存储各学生信息的数组*/
//	int length;					/*学生数*/
//}SqList;					/*顺序表,存储学生列表*/
//void OutPut(SqList L)   /*输出顺序表*/
//{
//	int i;
//	printf("\n学号\t\t姓名\t专业班级\t成绩 \n");
//	for (i = 0; i < L.length; i++)
//		printf("%s\t%s\t%s\t\t%d \n", L.elem[i].num,
//			L.elem[i].name, L.elem[i].classname, L.elem[i].score);
//	printf("\n数据输出完毕!");
//}
//int Locate(SqList L, char number[12])
//{
//	int i;
//	for (i = 0; i < L.length; i++)
//	{
//		if (strcmp(L.elem[i].num, number) == 0)
//		{
//			return (i + 1);
//		}
//	}
//	if (i >= L.length)
//	{
//		printf("找不到该值");
//		return FALSE;
//	}
//}
//int Delete(SqList* L, int i)
//{
//	int j;
//	if (L->length == 0)
//	{
//		printf("表为空，无法删除");
//		return FALSE;
//	}
//	else if (i<1 || i>L->length)
//	{
//		printf("删除位置不合理");
//		return FALSE;
//	}
//	else
//	{
//		for (j = i; j <= L->length - 1; j++)
//		{
//			L->elem[j - 1] = L->elem[j];
//		}
//		L->length--;
//		return TRUE;
//	}
//}
//int Insert(SqList* L, int i, ElemType x)
//{
//	int a, j;
//	if (L->length == MAXSIZE)
//	{
//		printf("\n表满溢出！");
//		return FALSE;
//	}
//	else if (i<1 || i>L->length)
//	{
//		printf("\n插入位置不合法！");
//		return FALSE;
//	}
//	else
//	{
//		for (a = 0; a < L->length; a++)
//		{
//			if ( strcmp(L->elem[a].num, x.num) == 0)
//			{
//				printf("\n学号重复,不可插入！\n");
//				return FALSE;
//			}
//		}
//		for (j = L->length - 1; j >= i - 1; j--)
//		{
//			L->elem[j + 1] = L->elem[j];
//		}
//		L->elem[i - 1] = x;
//		L->length++;
//		
//		return TRUE;
//	}
//}
//int main()
//{
//	ElemType e1, e2, e3;
//
//	//张三 161班 
//	strcpy(e1.num, "201605000001");
//	strcpy(e1.name, "张三");
//	strcpy(e1.classname, "物联网161");
//	e1.score = 60;
//
//	//李四 162班 
//	strcpy(e2.num, "201605000002");
//	strcpy(e2.name, "李四");
//	strcpy(e2.classname, "物联网162");
//	e2.score = 80;
//
//	//王五 162班 
//	strcpy(e3.num, "201605000003");
//	strcpy(e3.name, "王五");
//	strcpy(e3.classname, "物联网162");
//	e3.score = 70;
//
//
//	SqList sq1;
//	sq1.elem[0] = e1;
//	sq1.elem[1] = e2;
//	sq1.elem[2] = e3;
//	sq1.length = 3;
//	SqList* sq;
//	sq = &sq1;
//	OutPut(sq1);
//
//	printf("\n\n变量位置: %d\n",Locate(sq1,e3.num));
//
//	printf("\n\n删除了第一位以后");
//	Delete(sq,1);
//	OutPut(sq1);
//
//	printf("\n\n加几个元素以后");
//	Insert(sq,1,e1);
//	Insert(sq,1,e1);
//	OutPut(sq1);
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct Link {
//	int  elem;
//	struct Link* next;
//}link;
////无头结点链表的尾插法实现函数
//link* creatLink(int* arc, int length) {
//	int i;
//	//最初状态下，头指针 H 没有任何结点，所以，插入第一个元素，就相当于是创建结点 H
//	link* H = (link*)malloc(sizeof(link));
//	H->elem = arc[0];
//	H->next = NULL;
//
//	link* temp = H;
//	//如果采用尾插法插入超过 1 个元素，则需添加到链表表尾
//	for (i = 1; i < length; i++) {
//		//创建新结点并对其进行初始化
//		link* a = (link*)malloc(sizeof(link));
//		a->elem = arc[i];
//		a->next = NULL;
//		//将新结点添加到链表的尾部
//		temp->next = a;
//		//循环过程中，temp时刻指向链表中的最后一个结点
//		temp = temp->next;
//	}
//	return H;
//}
////有头结点链表的尾插法实现函数
//link* HcreatLink(int* arc, int length) {
//	int i;
//	//创建头结点 H，其链表的头指针也是 H
//	link* H = (link*)malloc(sizeof(link));
//	H->elem = 0;
//	H->next = NULL;
//	//设置一个指针，在遍历链表时用
//	link* temp = H;
//	//采用尾插法创建链表
//	for (i = 0; i < length; i++) {
//		//创建新结点并对其进行初始化
//		link* a = (link*)malloc(sizeof(link));
//		a->elem = arc[i];
//		a->next = NULL;
//		//将新结点链接到链表的表尾
//		temp->next = a;
//		//循环过程中，temp始终指向链表表尾的结点
//		temp = temp->next;
//	}
//	return H;
//}
//////链表的输出函数
////void display(link* p) {
////	while (p) {
////		printf("%d ", p->elem);
////		p = p->next;
////	}
////	printf("\n");
////}
////int main() {
////	int a[4] = { 1,2,3,4 };
////	//采用尾插法创建无头结点链表
////	link* H = creatLink(a, 4);
////	display(H);
////	//采用尾插法创建有头结点链表
////	link* head = HcreatLink(a, 4);
//	display(head);
//	//使用完毕后，释放即可
//	free(H);
//	free(head);
//	return 0;
//}
//typedef struct LNode {
//	int data;//每个结点存放的数据元素 
//	int length;
//	struct LNode* next;//指向的下一个结点 
//}LNode, * LinkList;//均表示一个指向单链表第一个结点的指针 
////LNode 强调第一个结点 
////LinkList 强调表示的是一个单链表 
//
//LinkList AddList(LinkList L) { 
//	L = (LinkList)malloc(sizeof(LNode));//创建头结点
//	L->length = 0;
//	L->next = NULL;
//	LNode* addPoint;
//	int addNum;
//	printf("向链表输入初始值\n");
//	printf("请输入要插入的内容：");
//	scanf_s("%d", &addNum);//获取插入内容 
//	while (addNum != 99) {//当输入99时结束循环 
//		addPoint = (LNode*)malloc(sizeof(LNode));
//		L->length++;
//		addPoint->next = L->next;
//		L->next = addPoint;
//		addPoint->data = addNum;
//		printf("\n请输入要插入的内容(输入99结束)：");//继续输入新元素 
//		scanf_s("%d", &addNum);//获取插入内容 
//	}
//	return L;
//
//}
//int main()
//{
//	int arr[] = { 9,8,7,4,5,1,5,4,2,1 };
//	for (int i = 0; i < 10; i++)
//	{
//		for(int j=i+1;j<10;j++)
//			if (arr[i] < arr[j])
//			{
//				int tem = 0;
//				tem = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tem;
//			}
//		printf(" %d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,10,7,8,9,6 };
//	int i = 1;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > arr[0])
//		{
//			arr[0] = arr[i];
//		}
//	}
//	printf(" %d ", arr[0]);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf(" %d*%d=%-2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void jiemian()
//{
//	printf("*********************\n");
//	printf("****1:进入 0:退出****\n");
//	printf("*********************\n");
//}
//void game()
//{
//	int b = rand()%100+1;
//	int c = 0;
//	while (c != b)
//	{
//		printf("请输入你猜的数字：\n");
//		scanf("%d", &c);
//		if (c < b)
//		{
//			printf("猜小了\n");
//			Sleep(2000);
//			system("cls");
//		}
//		else if (c > b)
//		{
//			printf("猜大了\n");
//			Sleep(2000);
//			system("cls");
//		}
//		else
//		{
//		    printf("猜对了\n");
//			printf("3s后返回主页面");
//			Sleep(1000);
//			system("cls");
//			printf("请输入你猜的数字：\n");
//			printf("%d\n", c);
//			printf("猜对了\n");
//			printf("2s后返回主页面");
//			Sleep(1000);
//			system("cls");
//			printf("请输入你猜的数字：\n");
//			printf("%d\n", c);
//			printf("猜对了\n");
//			printf("1s后返回主页面");
//			Sleep(1000);
//			system("cls");
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	do
//	{
//		jiemian();
//		printf("请选择\n");
//		scanf("%d", &n);
//		system("cls");
//		if (1 == n)
//		{
//			game();
//		}
//		else if (0 == n)
//		{
//			break;
//		}
//		else
//		{
//			printf("输入错误请重新选择\n");
//		}
//	} while (n);
//	return 0;
//}
//void maopao(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = 0;
//				tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 5,4,2,6,8,7,9,1,3,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}



