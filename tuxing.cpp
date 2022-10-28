#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
    printf("依次输入（空格分隔）：图形行数，每行图形个数，每个图形的行数（奇数），图形右移列数，两个图形间隔列数：");//提示输入
    int a, b, c, d, e, i, j, m, n, p, q;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    for (m = 1; m <= a; m++)//控制图形行数
    {
        for (i = 1; i <= (c + 1) / 2; i++)//上半部分
        {
            for (n = 1; n <= d; n++)//控制图形右移列数
                printf(" ");
            for (p = 1; p <= b; p++)//控制每行图形个数
            {
                for (j = (c + 1) / 2 - i; j > 0; j--)
                    printf(" ");
                for (j = 1; j <= 2 * i - 1; j++)
                    printf("%c", 'A' + i - 1);
                for (j = (c + 1) / 2 - i; j > 0; j--)//补全空格
                    printf(" ");
                for (q = 1; q <= e; q++)//控制两个图形间隔列数
                    printf(" ");
            }
            printf("\n");
        }
        for (i = 1; i <= (c - 1) / 2; i++)
        {
            for (n = 1; n <= d; n++)
                printf(" ");
            for (p = 1; p <= b; p++)
            {
                for (j = 1; j <= i; j++)
                    printf(" ");
                for (j = c - 2 * i; j > 0; j--)
                    printf("%c", 'A' + (c - 1) / 2 - i);
                for (j = 1; j <= i; j++)
                    printf(" ");
                for (q = 1; q <= e; q++)
                    printf(" ");
            }
            printf("\n");
        }
    }
}

