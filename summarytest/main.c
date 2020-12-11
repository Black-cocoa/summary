#include <stdio.h>
#include <stdlib.h>
#include "mathfuncs.h"
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int a = 32;
	printf("add: 1+2 = %d\n", add(1, 2));
	printf("sub: 1+2 = %d\n", sub(2, 1));
	printf("mul: 4*8 = %d   a = %d\n",mul(4,8),a);
	system("pause");
}