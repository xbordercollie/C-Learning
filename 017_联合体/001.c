#include<stdio.h>
#include<string.h>

union Data
{
	int size;
	int score;
	char c;
}data1,data2;
int main(void)
{
	union Data;
	data1.c = 'c';
	data2.c = 'b';

	
	printf("%c\n", data1);
	printf("%c\n", data2);
	printf("%d\n", sizeof(data2));
	printf("%d\n", sizeof(&data2));

	return 0;
}