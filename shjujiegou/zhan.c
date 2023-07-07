#include<stdio.h>
#include<stdlib.h>
#define StackSize 100 /*假定预分配的栈空间最多为100个元素*/  
#define STACKINCREMENT 10
#define m 6
#define n 8
#define true 1
#define false 0	
typedef int DataType;/*假定栈元素的数据类型为整数*/
typedef struct
{
    int x, y, z;//定义一个结构体来存储点位和移动方向
}sepe;
typedef struct
{
    sepe stack[StackSize];//定义一个结构体存储路线
    int top;
}SeqStack;
typedef struct
{
    int x, y;//方向
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
/*判栈空*/
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
/*进栈*/
void Push(SeqStack *S, sepe x)
{
    if (S->top == StackSize-1 )
    {
        printf("栈满\n");
    }
    else
    {
        S->top++;
        S->stack[S->top] = x;
    }
}
/*出栈*/
sepe Pop(SeqStack* S)
{
    if (IsEmpty(S))
    {
        printf("\n栈空");
        exit(0);
    }
    else
    {
        S->top--;
        return S->stack[S->top+1];
    }
}
/* 取栈顶元素*/
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
        printf("此迷宫无路径\n");
    }
    else
    {
        printf("迷宫路径为:\n");
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
            printf("\n走出迷宫\n");
            while (getchar()!='0')
            {
                getchar();
                printf("请输入0，退出程序\n");
            }
        
    }
}
  