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
//		printf("����ƽ��ֵΪ��%f\n",v );*/
//		/*int a;
//		while (1)*/
//		//{
//		//	scanf_s("%d", &a);
//		//	if (a % 2 == 0)
//		//	{
//		//		printf("ż��\n");
//		//	}
//		//	else
//		//	{
//		//		printf("����\n");
//		//	}
//		//}
//		/*for (int i = 0; i < 10; i++)
//		{
//			printf("i=%d\n", i);
//		}*/
//		//int a;
//		//int b = 0;
//		//printf("������һ��������\n");
//		//scanf_s("%d", &a);
//		//while (0 != a)
//		//{
//		//	b = a % 10;
//		//	a = a / 10;
//		//	printf("%d", b);
//		//}
//		//int num,b;
//		//int i = 2;
//		//printf("������һ��������\n");
//		//scanf_s("%d", &num);
//		//for ( i = 2; i<num/2; i++)
//		//{
//		//	b = num % i;
//		//	if (0 == b)
//		//	{
//		//		printf("��������");
//		//		break;
//		//	}	
//		//}
//		//if (i >= num/2) 
//		//{
//		//	printf("������");
//		//}
//
//		//printf("%c\n",'\'');
//		//int a;
//		//int b = 0;
//		//int arr[50] ;
//		//int i = 0;
//		//printf("������һ��������\n");
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
//			printf("��ϲͨ��");
//			return 0;
//		}
//	}
//}
//	//int arr[10], ch = 0,ret=0;
//	//printf("������������룺��\n");
//	//scanf_s("%d", arr);
//	//while ((ch = getchar()) != '\n')
//	//{
//	//	;
//	//}
//	//printf("��ȷ������������룺��Y or N��\n");
//	//ret = getchar();
//	//if (ret == 'Y')
//	//{
//	//	printf("ȷ�ϳɹ�\n");
//	//}
//	//else
//	//{
//	//	printf("ȷ��ʧ��\n");
//	//}
//	//int n,a=1;
//	//printf("������һ������ \n");
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
//	//printf("��������Ҫ���ҵ����֣� ");
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
//	//		printf("�ҵ��ˣ��±�Ϊ ��%d\n", mid);
//	//		break;
//	//	}
//	//}
//	//if (left > right)
//	//{
//	//	printf("��Ŀ���в������������ҵ�����");
//	//}
//	//char arr1[] = "���˾����������ɵ��";
//	//char arr2[] = "����������������������";
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
//	//printf("���˾����������ɵ��");
//	//char arr[20] = { 0 };
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("������������룺\n");
//	//	scanf("%s", arr);
//	//	if (strcmp("1314521", arr) == 0)
//	//	{
//	//		printf("����������ȷ\n");
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		printf("�����������\n");
//	//	}
//	//}
//	//if (3 == i)
//	//{
//	//	printf("������Σ��豸������");
//	//}
////int a = 0;
////int b = 0;
////int c = 0;
////int tem = 0;
////printf("������������\n");
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
////printf("����������ִӴ�С����Ϊ��%d  %d  %d", a, b, c);
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
////printf("������������; \n");
////scanf("%d%d", &a, &b);
////while (a % b )
////{
////	c = a % b;
////	a = b;
////	b = c;
////}
////printf("�������Լ��Ϊ��%d", b);
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
////printf("���������ĸ���Ϊ��%d", count);
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
////	printf("��ѡ��\n");
////	scanf("%d", &a);
////	system("cls");
////	if (1 == a)
////	{
////		game();	
////	}
////	else if (0 == a)
////	{
////		printf("�˳���Ϸ\n");
////		break;
////	}
////	else
////	{
////		printf("�������\n");
////	}
////} while (a);
////return 0;
////}
////jiemie()
////{
////	printf("######################");
////	printf("###1:������Ϸ0:�˳�###");
////	printf("######################");
////}
////game()
////{
////	int b = rand()%100+1;
////	int c = 0;
////
////	while (c != b)
////	{
////		printf("��������µ����֣�\n");
////		scanf("%d", &c);
////		if (c > b)
////		{
////			printf("�´���\n");
////		}
////		else if(c<b)
////		{
////			printf("��С��\n");
////		}
////	}
////	if (c == b)
////	{
////		printf("�¶���\n");
////		printf("3s�󷵻���ҳ��");
////		Sleep(1000);
////		system("cls");
////		printf("�¶���\n");
////		printf("2s�󷵻���ҳ��");
////		Sleep(1000);
////		system("cls");
////		printf("�¶���\n");
////		printf("1s�󷵻���ҳ��");
////		Sleep(1000);
////		system("cls");
////	}
////}
////int main()
////{
////	int input = 0;
////	int tem = 0;
////	printf("����������\n");
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
		printf("��ĵ��Խ���10���ڹػ���������룺��������ȡ���ػ�\n�����룺");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("С�����������\n");
		}
	}
	return 0;
}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int left = 0;
//	int right = 8;
//	printf("ԭ���Ϊ��\n");
//	for (left = 0; left <= 8; left++)
//	{
//		printf("%d  ", arr[left]);
//	}
//	printf("\n");
//	printf( "�����������Ϊ��\n" );
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
//	printf("������������Ϊ��\n");
//	for (int i=0; i < 10; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	printf("��������Ҫ���ҵ����ݣ�\n");
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
//		printf("δ�鵽��������\n");
//	}
//	else
//	{
//		printf("�鵽���ݲ����л�λ��Ľ��Ϊ��\n");
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
//typedef struct ElemType			/*����ѧ���ɼ���������Ԫ������*/
//{
//	char num[13];			/*ѧ��*/
//	char name[8];			/*����*/
//	char classname[15];	/*רҵ�༶*/
//	int score;				/*�ɼ�*/
//} ElemType;
//
//typedef struct
//{
//	ElemType elem[MAXSIZE];	/*�洢��ѧ����Ϣ������*/
//	int length;					/*ѧ����*/
//}SqList;					/*˳���,�洢ѧ���б�*/
//void OutPut(SqList L)   /*���˳���*/
//{
//	int i;
//	printf("\nѧ��\t\t����\tרҵ�༶\t�ɼ� \n");
//	for (i = 0; i < L.length; i++)
//		printf("%s\t%s\t%s\t\t%d \n", L.elem[i].num,
//			L.elem[i].name, L.elem[i].classname, L.elem[i].score);
//	printf("\n����������!");
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
//		printf("�Ҳ�����ֵ");
//		return FALSE;
//	}
//}
//int Delete(SqList* L, int i)
//{
//	int j;
//	if (L->length == 0)
//	{
//		printf("��Ϊ�գ��޷�ɾ��");
//		return FALSE;
//	}
//	else if (i<1 || i>L->length)
//	{
//		printf("ɾ��λ�ò�����");
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
//		printf("\n���������");
//		return FALSE;
//	}
//	else if (i<1 || i>L->length)
//	{
//		printf("\n����λ�ò��Ϸ���");
//		return FALSE;
//	}
//	else
//	{
//		for (a = 0; a < L->length; a++)
//		{
//			if ( strcmp(L->elem[a].num, x.num) == 0)
//			{
//				printf("\nѧ���ظ�,���ɲ��룡\n");
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
//	//���� 161�� 
//	strcpy(e1.num, "201605000001");
//	strcpy(e1.name, "����");
//	strcpy(e1.classname, "������161");
//	e1.score = 60;
//
//	//���� 162�� 
//	strcpy(e2.num, "201605000002");
//	strcpy(e2.name, "����");
//	strcpy(e2.classname, "������162");
//	e2.score = 80;
//
//	//���� 162�� 
//	strcpy(e3.num, "201605000003");
//	strcpy(e3.name, "����");
//	strcpy(e3.classname, "������162");
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
//	printf("\n\n����λ��: %d\n",Locate(sq1,e3.num));
//
//	printf("\n\nɾ���˵�һλ�Ժ�");
//	Delete(sq,1);
//	OutPut(sq1);
//
//	printf("\n\n�Ӽ���Ԫ���Ժ�");
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
////��ͷ��������β�巨ʵ�ֺ���
//link* creatLink(int* arc, int length) {
//	int i;
//	//���״̬�£�ͷָ�� H û���κν�㣬���ԣ������һ��Ԫ�أ����൱���Ǵ������ H
//	link* H = (link*)malloc(sizeof(link));
//	H->elem = arc[0];
//	H->next = NULL;
//
//	link* temp = H;
//	//�������β�巨���볬�� 1 ��Ԫ�أ�������ӵ������β
//	for (i = 1; i < length; i++) {
//		//�����½�㲢������г�ʼ��
//		link* a = (link*)malloc(sizeof(link));
//		a->elem = arc[i];
//		a->next = NULL;
//		//���½����ӵ������β��
//		temp->next = a;
//		//ѭ�������У�tempʱ��ָ�������е����һ�����
//		temp = temp->next;
//	}
//	return H;
//}
////��ͷ��������β�巨ʵ�ֺ���
//link* HcreatLink(int* arc, int length) {
//	int i;
//	//����ͷ��� H���������ͷָ��Ҳ�� H
//	link* H = (link*)malloc(sizeof(link));
//	H->elem = 0;
//	H->next = NULL;
//	//����һ��ָ�룬�ڱ�������ʱ��
//	link* temp = H;
//	//����β�巨��������
//	for (i = 0; i < length; i++) {
//		//�����½�㲢������г�ʼ��
//		link* a = (link*)malloc(sizeof(link));
//		a->elem = arc[i];
//		a->next = NULL;
//		//���½�����ӵ�����ı�β
//		temp->next = a;
//		//ѭ�������У�tempʼ��ָ�������β�Ľ��
//		temp = temp->next;
//	}
//	return H;
//}
//////������������
////void display(link* p) {
////	while (p) {
////		printf("%d ", p->elem);
////		p = p->next;
////	}
////	printf("\n");
////}
////int main() {
////	int a[4] = { 1,2,3,4 };
////	//����β�巨������ͷ�������
////	link* H = creatLink(a, 4);
////	display(H);
////	//����β�巨������ͷ�������
////	link* head = HcreatLink(a, 4);
//	display(head);
//	//ʹ����Ϻ��ͷż���
//	free(H);
//	free(head);
//	return 0;
//}
//typedef struct LNode {
//	int data;//ÿ������ŵ�����Ԫ�� 
//	int length;
//	struct LNode* next;//ָ�����һ����� 
//}LNode, * LinkList;//����ʾһ��ָ�������һ������ָ�� 
////LNode ǿ����һ����� 
////LinkList ǿ����ʾ����һ�������� 
//
//LinkList AddList(LinkList L) { 
//	L = (LinkList)malloc(sizeof(LNode));//����ͷ���
//	L->length = 0;
//	L->next = NULL;
//	LNode* addPoint;
//	int addNum;
//	printf("�����������ʼֵ\n");
//	printf("������Ҫ��������ݣ�");
//	scanf_s("%d", &addNum);//��ȡ�������� 
//	while (addNum != 99) {//������99ʱ����ѭ�� 
//		addPoint = (LNode*)malloc(sizeof(LNode));
//		L->length++;
//		addPoint->next = L->next;
//		L->next = addPoint;
//		addPoint->data = addNum;
//		printf("\n������Ҫ���������(����99����)��");//����������Ԫ�� 
//		scanf_s("%d", &addNum);//��ȡ�������� 
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
//	printf("****1:���� 0:�˳�****\n");
//	printf("*********************\n");
//}
//void game()
//{
//	int b = rand()%100+1;
//	int c = 0;
//	while (c != b)
//	{
//		printf("��������µ����֣�\n");
//		scanf("%d", &c);
//		if (c < b)
//		{
//			printf("��С��\n");
//			Sleep(2000);
//			system("cls");
//		}
//		else if (c > b)
//		{
//			printf("�´���\n");
//			Sleep(2000);
//			system("cls");
//		}
//		else
//		{
//		    printf("�¶���\n");
//			printf("3s�󷵻���ҳ��");
//			Sleep(1000);
//			system("cls");
//			printf("��������µ����֣�\n");
//			printf("%d\n", c);
//			printf("�¶���\n");
//			printf("2s�󷵻���ҳ��");
//			Sleep(1000);
//			system("cls");
//			printf("��������µ����֣�\n");
//			printf("%d\n", c);
//			printf("�¶���\n");
//			printf("1s�󷵻���ҳ��");
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
//		printf("��ѡ��\n");
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
//			printf("�������������ѡ��\n");
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



