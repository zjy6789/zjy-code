#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
    printf("�������루�ո�ָ�����ͼ��������ÿ��ͼ�θ�����ÿ��ͼ�ε���������������ͼ����������������ͼ�μ��������");//��ʾ����
    int a, b, c, d, e, i, j, m, n, p, q;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    for (m = 1; m <= a; m++)//����ͼ������
    {
        for (i = 1; i <= (c + 1) / 2; i++)//�ϰ벿��
        {
            for (n = 1; n <= d; n++)//����ͼ����������
                printf(" ");
            for (p = 1; p <= b; p++)//����ÿ��ͼ�θ���
            {
                for (j = (c + 1) / 2 - i; j > 0; j--)
                    printf(" ");
                for (j = 1; j <= 2 * i - 1; j++)
                    printf("%c", 'A' + i - 1);
                for (j = (c + 1) / 2 - i; j > 0; j--)//��ȫ�ո�
                    printf(" ");
                for (q = 1; q <= e; q++)//��������ͼ�μ������
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

