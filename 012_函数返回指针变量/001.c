#include <stdio.h>
#include <time.h>
#define arraysize 10

int* getnum();

int main()
{
	int i;
	int* p;
	p = getnum();
	printf("\n\n");
	printf("%d\n", *p);
	printf("\n\n");

	for (i = 0; i < arraysize; i++) {
		printf("%d\n", *(p+i));
	}

	return 0;
}



int* getnum()
{
	//s=seed,随机种子
	srand(time(NULL));
	int i;
	static int array[arraysize];                 //如果不用static，局部变量就会被立刻释放
	for (i = 0; i < arraysize; i++) {
		array[i] = rand();
		printf("array[%d]=%d\n", i,array[i]);
	}

	return array;
}