#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N, a = 0, b = 0, c = 0, d = 0, e = 0, i;
	int g[1000] = { 0 };
	scanf("%d", &N);
	for (i = 1;i <= N;i++)
	{
		scanf("%d", &g[i]);
		if (g[i] >= 90)
			a++;
		else if (g[i] >= 80 && g[i] < 90)
			b++;
		else if (g[i] >= 70 && g[i] < 80)
			c++;
		else if (g[i] >= 60 && g[i] < 70)
			d++;
		else e++;

	}
	printf("%d %d %d %d %d", a, b, c, d, e);
	return 0;
}