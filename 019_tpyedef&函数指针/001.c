#include<stdio.h>

typedef int (*pcalcfun)(int, int);

int plus(int a, int b);
int minus(int a, int b);

int main(void)
{
	pcalcfun func;

	char c;
	int a = 2;
	int b = 5;
	c = getchar();
	if (c == '+')
	{
		func = plus;
		printf("a+b=%d\n", func(a, b));
	}
	else if (c == '-')
	{
		func = minus;
		printf("a-b=%d\n", func(a, b));
	}

	return 0;
}

int plus(int a, int b) { return a + b; }

int minus(int a, int b) { return a - b; }