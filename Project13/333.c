#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//  snjiao(char arr[700][700], int i, int c,int y)
//{
//    if (i+2 < y)
//    {
//        if (arr[i][c - 2] != '1')
//        {
//            int k = i + 1;
//            arr[k][c - 1] = '1';
//            arr[k + 1][c - 2] = '1';
//            arr[k + 1][c] = '1';
//            arr[k + 2][c - 3] = '1';
//            arr[k + 2][c - 1] = '1';
//            arr[k + 2][c + 1] = '1';
//            snjiao(arr, k + 2, c - 3, y);
//        }
//        if (arr[i][c + 6] != '1')
//        {
//            int r = i + 1;
//            arr[r][c +5] = '1';
//            arr[r + 1][c +4] = '1';
//            arr[r + 1][c+6] = '1';
//            arr[r + 2][c +3] = '1';
//            arr[r + 2][c +5] = '1';
//            arr[r + 2][c + 7] = '1';
//            snjiao(arr, r + 2, c + 3, y);
//        } 
//    }
//}
//int main() 
//{
//    int a;
//    scanf_s("%d", &a);
//    char arr[700][700] = { '0'};
//    int y = 3 * pow(2, a - 1);
//    int c = y; 
//    int i = 0;
//    arr[i][c - 1] = '1';
//    arr[i + 1][c - 2] = '1';
//    arr[i + 1][c] = '1';
//    arr[i + 2][c - 3] = '1';
//    arr[i + 2][c - 1] = '1';
//    arr[i + 2][c + 1] = '1';  
//    snjiao(arr, i+2, c-3,y);
//    for (int i = 0; i < 2*y; i++)
//    {
//        for (int j = 0; j < 2*y; j++)
//        {
//            if (arr[i - 1][j - 1] == '1' && arr[i - 1][j + 1] == '1' && arr[i - 1][j - 3] == '1' && arr[i - 1][j + 3] == '1')
//            {
//                arr[i][j] = '0';
//                arr[i + 1][j - 1] = '0';
//                arr[i + 1][j + 1] = '0';
//                arr[i + 2][j - 1] = '0';
//                arr[i + 2][j] = '0';
//                arr[i + 2][j + 1] = '0';
//            }
//            /* if (arr[i - 1][j - 1] != '1' && arr[i - 1][j + 1] != '1' && arr[i][j] == '1')
//             {
//                 arr[i][j] = '0';
//                 arr[i + 1][j - 1] = '0';
//                 arr[i + 1][j + 1] = '0';
//                 arr[i + 2][j - 1] = '0';
//                 arr[i + 2][j] = '0';
//                 arr[i + 2][j + 1] = '0';
//             }*/
//            
//            if (arr[i][j] == '1')
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//    
//    return 0;
//}
//将现有的三角形进行整体复制
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    char arr[800][800] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    int y = 3 * pow(2, n - 1) - 1;//y表示顶点在第一行的下标值
//    arr[0][y] = '*';
//    arr[1][y - 1] = '*';
//    arr[1][y + 1] = '*';
//    arr[2][y - 2] = '*';
//    arr[2][y + 2] = '*';
//    arr[2][y] = '*';
//    //第一次循环，将[最上面的最小的三角形]赋值到对应其[左下的三角形]位置和[右下的三角形]位置
//    //如果有第二次循环，则将由[三个小三角形构成的三角形]赋值到左下和右下。
//    for (int i = 1; i < n; i++)//n表示复制n-1次
//    {
//        int rang = (3 * pow(2, i - 1) - 1);
//        for (int x1 = 0; x1 <= rang; x1++)
//        {
//            for (int y1 = y - rang; y1 <= y + rang; y1++)
//            {
//                arr[x1 + rang + 1][y1 - rang - 1] = arr[x1][y1];
//            }
//        }
//        for (int x1 = 0; x1 <= rang; x1++)
//        {
//            for (int y1 = y - rang; y1 <= y + rang; y1++)
//            {
//                arr[x1 + rang + 1][y1 + rang + 1] = arr[x1][y1];
//            }
//        }
//    }
//    //打印树叶
//    for (int i = 0; i <= 3 * pow(2, n - 1) - 1; i++)
//    {
//        for (int j = 0; j <= 3 * pow(2, n) - 2; j++)
//        {
//            if (arr[i][j] == '*')
//                printf("%c", arr[i][j]);
//            else
//                printf(" ");
//        }
//        printf("\n");
//    }
//    //打印树干
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < y; j++)
//            printf(" ");
//        printf("*\n");
//    }
//    return 0;
//}
//int main()
//{
//    int a=0;
//    int arr[10][10] = { 0 };
//    scanf("%d", &a);
//    int x = 0;
//    int y = 0;
//    int s = 2;
//    arr[0][0] = 1;
//    while (s <= a * a && a>1)
//    {
//        if (x - 1 < 0)
//        {
//            y++;
//            arr[x][y] = s++;
//            while (x + 1 <= a && y - 1 >= 0)
//            {
//                x++; y--;
//                arr[x][y] = s++;
//            }
//        }
//        if (x + 1 >= a || y - 1 < 0)
//        {
//            if (y - 1 < 0 && x + 1 < a)
//            {
//                x++;
//                arr[x][y] = s++;
//                while (x - 1 >= 0 && y + 1 < a)
//                {
//                    x--; y++;
//                    arr[x][y] = s++;
//                }
//            }
//            if (x + 1 ==a&&y+1<a)
//            {
//                y++;
//                arr[x][y] = s++;
//                while (x - 1 >= 0 && y + 1 < a)
//                {
//                    x--; y++;
//                    arr[x][y] = s++;
//                }
//            } 
//        }
//        if (y + 1 == a&&x+1<a)
//        {
//            x++;
//            arr[x][y] = s++;
//            while (x + 1 < a && y - 1 >= 0)
//            {
//                x++; y--;
//                arr[x][y] = s++;
//            }
//        }
//    }
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j < a; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int main() {
//    int a=0, b=0;
//    int k = 0;
//    int arr[10][10] = { 0};
//    scanf("%d %d",&a,&b);
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j < b; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//        // printf("\n");
//    }
//    scanf("%d", &k);
//    char c = '0';
//    int x = 0, y = 0;
//    while (k)
//    {
//        scanf(" %c %d %d", &c, &x, &y);
//        if (c == 'r')
//        {
//            int arr1[10] = { 0 };
//            for (int i = 0; i < b; i++)
//            {
//                arr1[i] = arr[x - 1][i];
//                arr[x - 1][i] = arr[y - 1][i];
//                arr[y - 1][i] = arr1[i];
//            }
//            k--;
//        }
//        else if (c == 'c')
//        {
//            int arr1[10] = { 0 };
//            for (int i = 0; i < a; i++)
//            {
//                arr1[i] = arr[i][x - 1];
//                arr[i][x - 1] = arr[i][y - 1];
//                arr[i][y - 1] = arr1[i];
//            }
//            k--;
//        }
//        else if (c != 'r' && c != 'c') {
//            k--;
//        }
//    }
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j < b; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int main() {
//    int a = 0, b = 0;
//    char arr[100];
//    scanf("%s", arr);
//    int n = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < n; i++)
//    {
//
//        if (arr[i] == 'A')
//        {
//            a++;
//        }
//        if (arr[i] == 'B')
//        {
//            b++;
//        }
//    }
//    if (a > b)
//    {
//        printf("A");
//    }
//    if (a < b)
//    {
//        printf("B");
//    }
//    if (a == b)
//    {
//        printf("E");
//    }
//    return 0;
//}
//int main() {
//    long long a;
//    scanf("%lld", &a);
//    int b = a / 10;
//    while (b)
//    {
//        a = (a * 10 + b % 10);
//        b = b / 10;
//    }
//    printf("%lld", a);
//    int f = 0;
//    for (long long i = 2; i < a / 2; i++)
//    {
//        if (a % i == 0)
//        {
//            f++;
//            break;
//        }
//    }
//    if (f == 0)
//    {
//        printf("prime");
//    }
//    else {
//        printf("noprime");
//    }
//    return 0;
//}
//int jinzhi(char* b, int n, int a)
//{
//    int sum = 0;
//    if (a <= 10 && a >= 2)
//    {
//        n = n - 1;
//        for (int i = n; i >= 0; i--)
//        {
//            sum += ((*b) - '0') * pow(a, i);
//            b++;
//        }
//        return sum;
//    }
//    if (a == 16)
//    {
//        n = n - 1;
//        for (int i = n; i >= 0; i--)
//        {
//            int k = 0;
//            if (*b >= '0' && *b <= '9')
//            {
//                k = ((*b) - '0');
//            }
//            if (*b == 'A')
//            {
//                k = 10;
//            }
//            if (*b == 'B')
//            {
//                k = 11;
//            }
//            if (*b == 'C')
//            {
//                k = 12;
//            }
//            if (*b == 'D')
//            {
//                k = 13;
//            }
//            if (*b == 'E')
//            {
//                k = 14;
//            }
//            if (*b == 'F')
//            {
//                k = 15;
//            }
//            sum += k * pow(a, i);
//            b++;
//        }
//        return sum;
//    }
//    return 0;
//}
//int daozhi(int x)
//{
//    int s = x;
//    int y = 0;
//    while (s)
//    {
//        y = y * 10 + s % 10;
//        s = s / 10;
//    }
//    return y;
//}
//int huiwei(int x)
//{
//    char str[10] = { 0 };
//    sprintf(str, "%d", x);
//    int n = strlen(str);
//    for (int i = 0, j = n - 1; i < j; i++, j--)
//    {
//        if (str[i] != str[j])
//        {
//            return 1;
//        }
//    }
//    return 0;
//}
//int cishu(int s)
//{
//    int count = 0;
//    int x = s;
//    while (x)
//    {
//        if (huiwei(x) == 0)
//        {
//            break;
//        }
//        x += daozhi(x);
//        count++;
//        if (count >= 31)
//        {
//            break;
//        }
//    }
//    return count;
//}
//int main() {
//    int a;
//    scanf("%d", &a);
//    char b[100] = { 0 };
//    scanf("%s", b);
//    int n = strlen(b);
//    int s = jinzhi(b, n, a);
//    int y = cishu(s);
//    if (y <= 30)
//    {
//        printf("%d", y);
//    }
//    else {
//        printf("Impossible!");
//    }
//    return 0;
//}
//void text(int** arr)
//{
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int arr1[] = { 1,1,1 };
//	int* arr3[2] = { arr,arr1 };
//	text(arr3);
//
//	return 0;
//
//}
int main()
{
	int a[4] = { 0 };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		a[i] = 1;
		if ((a[0] != 1) + (a[2] == 1) + (a[0] == 1 || a[3] == 1) + (a[2] == 1) == 2)
		{
			break;
		}
		a[i] = 0;
	}
	printf("%d", i);
}