#include <stdio.h>
#define arraysize 3

void Pointerfunction(long int* p);
float findavg(float* array, int size);

int main(void)
{
	/*long int second;
	Pointerfunction(&second);
	printf("%d\n", second);*/
	
	float student[arraysize] = { 12,14,18 };
	float avg = findavg(student, arraysize);
	printf("%.2f", avg);


	return 0;
}



void Pointerfunction(long int *p)
{
	*p = time(NULL);
}

float findavg(float* array, int size)
{
	int i;
	float sum = 0;
	for (i = 0; i < size; i++) {
		sum += array[i];
	}
	float avg = sum / size;
	return avg;
}