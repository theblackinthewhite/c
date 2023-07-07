#include<stdio.h>
#include<stdlib.h>
#define StackSize 100 /*�ٶ�Ԥ�����ջ�ռ����Ϊ100��Ԫ��*/  
#define STACKINCREMENT 10
#define m 6
#define n 8
#define true 1
#define false 0	
typedef int DataType;/*�ٶ�ջԪ�ص���������Ϊ����*/
typedef struct
{
    int x, y, z;//����һ���ṹ�����洢��λ���ƶ�����
}sepe;
typedef struct
{
    sepe stack[StackSize];//����һ���ṹ��洢·��
    int top;
}SeqStack;
typedef struct
{
    int x, y;//����
}item;
sepe xx = { -1,-1,-1 };
int maze[m + 2][n + 2] =
{
    {1,1,1,1,1,1,1,1,1,1},
    {1,0,1,1,1,0,1,1,1,1},
    {1,1,0,1,0,1,1,1,1,1},
    {1,0,1,0,0,0,0,0,1,1},
    {1,0,1,1,1,0,1,1,1,1},
    {1,1,0,0,1,1,0,0,0,1},
    {1,0,1,1,0,0,1,1,0,1},
    {1,1,1,1,1,1,1,1,1,1},
};
item move[8] =
{
    {0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1}
};
/*��ջ��*/
int IsEmpty(SeqStack* S)
{
    if (S->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
/*��ջ*/
void Push(SeqStack *S, sepe x)
{
    if (S->top == StackSize-1 )
    {
        printf("ջ��\n");
    }
    else
    {
        S->top++;
        S->stack[S->top] = x;
    }
}
/*��ջ*/
sepe Pop(SeqStack* S)
{
    if (IsEmpty(S))
    {
        printf("\nջ��");
        exit(0);
    }
    else
    {
        S->top--;
        return S->stack[S->top+1];
    }
}
/* ȡջ��Ԫ��*/
sepe Top(SeqStack* S)
{
    if (S->top == -1)
    {
        return xx;
    }
    else
    {
        return S->stack[S->top];
    }
}
int* onepath(int maze[m + 2][n + 2], item move[8], SeqStack *s)
{
    int x, y, d, i, j, dd;
    sepe temp;
    temp.x = 1;
    temp.y = 1;
    temp.z = -1;
    Push(s, temp);
    maze[temp.x][temp.y] = -1; dd = 0;
    while (!IsEmpty(s))
    {
        temp = Top(s);
        x = temp.x; y = temp.y;
        d = dd;
        while (d < 8)
        {
            i = x + move[d].x; j = y + move[d].y;
            if (maze[i][j] == 0)
            {
                temp.x = i; temp.y = j; temp.z = d;
                Push(s, temp);
                dd = 0;
                maze[i][j] = -1;
                if (i == m && j == n)
                {
                    return 0;
                } 
                break;
            }
            else
            {
                d = d + 1;
            }
        }
        if (d == 8)
        {
            temp = Pop(s);
            dd = temp.z + 1;
        }
    }
    return 0;
}
void main()
{
    sepe temp;
    sepe pmet;
    SeqStack* s;
    SeqStack* l;
    s = (SeqStack*)malloc(sizeof(SeqStack));
    l = (SeqStack*)malloc(sizeof(SeqStack));
    if (!s)
    {
        exit(0);
    }
    else
    {
        s->top = -1;
    }
    if (!l)
    {
        exit(0);
    }
    else
    {
        l->top = -1;
    }
    onepath(maze, move, s);
    if (s->top == -1)
    {
        printf("���Թ���·��\n");
    }
    else
    {
        printf("�Թ�·��Ϊ:\n");
        while (!IsEmpty(s))
        {
            Push(l, Pop(s));
        }
        while (!IsEmpty(l))
        {
            pmet = Pop(l);
            if (l->top == -1)
            {
                printf("(%d,%d)", pmet.x, pmet.y);
            }
            else
            {
                printf("(%d,%d)-", pmet.x, pmet.y);
            }
        }
            printf("\n�߳��Թ�\n");
            while (getchar()!='0')
            {
                getchar();
                printf("������0���˳�����\n");
            }
        
    }
}
  