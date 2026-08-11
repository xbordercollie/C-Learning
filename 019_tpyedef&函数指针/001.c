#include<stdio.h>
#include <windows.h>

typedef int (*pcalcfun)(int, int);
// 含义：pcalcfun 是一个指针，指向“返回值为int、接收2个int参数”的函数; typedef 作用就是起别名

int plus(int a, int b);
int minus(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(void)
{
	pcalcfun func;
	SetConsoleOutputCP(65001);

	char c;
	int a = 2;
	int b = 5;
	printf("a = %d, b = %d\n请选择运算法则: ", a, b);
	c = getchar();
	

	if (c == '+')
	{
		func = plus;
		printf("a + b = %d\n", func(a, b));
	}
	else if (c == '-')
	{
		func = minus;
		printf("a - b = %d\n", func(a, b));
	}
	else if (c == '*')
	{
		func = multiply;
		printf("a * b = %d\n", func(a, b));
	}
	else if (c == '%')
	{
		func = divide;
		printf("a %% b = %d\n", func(a, b));
	}
	else
	{
		printf("暂时没有这个运算法则/n");
		return 1;
	}
	return 0;
}

int plus(int a, int b) { return a + b; }

int minus(int a, int b) { return a - b; }

int multiply(int a, int b) { return a * b; }

int divide(int a, int b) { return a % b; }