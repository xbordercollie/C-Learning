#include <stdio.h>

int main(int argc,const char* argv[])
{
	int a = 1;
	int* p1;
	int** p2;
	p1 = &a;
	p2 = &p1;

	printf("%d\n", a);
	printf("%d\n", *p1);
	printf("%d\n", **p2);


	return 0;
}