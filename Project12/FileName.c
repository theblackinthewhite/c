//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct link
{
    int date;
    struct link* next;
}link, * linklist;
void chushihua(linklist l)
{
    l->date = 0;
    l->next = NULL;
}
linklist dayin(const linklist h)
{
    linklist p;
    p=h;
    printf("表内元素为：\n");
    while (p->next)
    {
        p = p->next;
        if (p != NULL)
        {
            printf("%d ", p->date);
        }       
    }
    printf("\n");
    return p;
}
linklist jianbiao(linklist l)
{
    linklist p = NULL;
    l = (linklist)malloc(sizeof(link));
    p = l;
    return p;
}
void charu(linklist h,int i,int y)
{
    int j = 0;
    linklist p,s;
    p = NULL;
    s = NULL;
    p = h;
    while (p && j < i - 1)
    {
        p = p->next;
        j++;
    }
    s= (linklist)malloc(sizeof(link));
    s->date = y;
    s->next = p->next;
    p->next = s;
}
void shanshu(const linklist h,int i)
{
    int j = 0;
    linklist p, q;
    p = NULL;
    q = NULL;
    q = h;
    while (q && j < i - 1)
    {
        q = q->next;
        j++;
    }
    p = q->next;
    q->next = p->next;
    free(p);
}
void shanchuwei(const linklist h, linklist p)
{
    p = h;
    while (p->next->next)
    {
        p = p->next;
    }
    free(p->next->next);
    p->next = NULL;
}
void weijia(linklist p)
{
    int a = 0;
    fflush(stdout);
    printf("请输入在p处加入的元素\n");
    scanf_s("%d", &a);
    p->next = (linklist)malloc(sizeof(link));
    p = p->next;
    p->date = a;
    p->next = NULL;
}
int main()
{
    int x=0,c=0,b=0,d=4;
    link l;
    linklist p,h;
    chushihua(&l);
    p=jianbiao(&l);
    h = p;
    printf("尾插法插入元素，请输入插入元素(输入非整型自动退出输入):\n");
    while (d)
    {
        scanf_s("%d", &b);
        p->next = (linklist)malloc(sizeof(link));
        p = p->next;
        p->date = b;
        d--;
    }
    p->next=NULL;
    p=dayin(h);
    printf("删除p位置元素后");
    shanchuwei(h, p);
    p=dayin(h);
    weijia(p);
    printf("在p处加一个元素后");
    p=dayin(h);
    printf("请输入要插入的节点位置，以及要插入的元素：\n");
    fflush(stdout);
    scanf_s("%d%d",&x,&c);
    charu(h,x,c);
    p = dayin(h);
    printf("请输入要删除的节点位置\n");
    fflush(stdout);
    scanf_s("%d", &x);
    shanshu(h, x);
    printf("删除后");
    p = dayin(h);
    return 0;
}