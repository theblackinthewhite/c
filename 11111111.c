#include <stdio.h>
#include <stdlib.h>
#include <string.h>




typedef struct LNode {
	int data;//ÿ������ŵ�����Ԫ�� 
	int length;
	struct LNode* next;//ָ�����һ����� 
}LNode, * LinkList;//����ʾһ��ָ�������һ������ָ�� 
//LNode ǿ����һ����� 
//LinkList ǿ����ʾ����һ�������� 

LinkList AddList(LinkList L) { 
	L = (LinkList)malloc(sizeof(LNode));//����ͷ���
	L->length = 0;
	L->next = NULL;
	LNode* addPoint;
	int addNum;
	printf("�����������ʼֵ\n");
	printf("������Ҫ��������ݣ�");
	scanf_s("%d", &addNum);//��ȡ�������� 
	while (addNum != 99) {//������99ʱ����ѭ�� 
		addPoint = (LNode*)malloc(sizeof(LNode));
		L->length++;
		addPoint->next = L->next;
		L->next = addPoint;
		addPoint->data = addNum;
		printf("\n������Ҫ���������(����99����)��");//����������Ԫ�� 
		scanf_s("%d", &addNum);//��ȡ�������� 
	}
	return L;

}
