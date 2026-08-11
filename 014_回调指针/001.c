#include <stdio.h>
#define fixsize 5

void callback(int* array[], int size, int(*p)());
int findrandom();

int main()
{
	int myarray[fixsize];
	callback(myarray, fixsize, findrandom);
	int i;
	for (i = 0; i < fixsize; i++) {
		printf("myarray[%d]=%d\n", i, myarray[i]);
	}


	return 0;
}


void callback(int *array, int size, int(*p)())
{
	int i;
	for (i = 0; i < size; i++) {
		array[i] = p();
	}
}

int findrandom()
{
	return rand();
}