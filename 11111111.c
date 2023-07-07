#include <stdio.h>
#include <stdlib.h>
#include <string.h>




typedef struct LNode {
	int data;//每个结点存放的数据元素 
	int length;
	struct LNode* next;//指向的下一个结点 
}LNode, * LinkList;//均表示一个指向单链表第一个结点的指针 
//LNode 强调第一个结点 
//LinkList 强调表示的是一个单链表 

LinkList AddList(LinkList L) { 
	L = (LinkList)malloc(sizeof(LNode));//创建头结点
	L->length = 0;
	L->next = NULL;
	LNode* addPoint;
	int addNum;
	printf("向链表输入初始值\n");
	printf("请输入要插入的内容：");
	scanf_s("%d", &addNum);//获取插入内容 
	while (addNum != 99) {//当输入99时结束循环 
		addPoint = (LNode*)malloc(sizeof(LNode));
		L->length++;
		addPoint->next = L->next;
		L->next = addPoint;
		addPoint->data = addNum;
		printf("\n请输入要插入的内容(输入99结束)：");//继续输入新元素 
		scanf_s("%d", &addNum);//获取插入内容 
	}
	return L;

}
