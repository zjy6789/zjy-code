#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	float R=0;
	float V = 0;
	scanf( "%f", &R);
	V = R*R*R*3.14/3*4;
	printf("V=%f\n",V);
	return 0;
}