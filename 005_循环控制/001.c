#include <stdio.h>   //goto—≠ª∑

int main(void)
{
	/*int i=0;
	int sum = 0;

loop:if (i <= 100)
{
	sum += i;
	i++;
	goto loop;
}
printf("%d\n", sum);*/

//============================continueøÿ÷∆—≠ª∑============================


	int i;
	for (i = 10; i <= 20; i++) {
		if (i % 3 == 0) {
			continue;
		}
		printf("%d", i);
		printf("\t");
	}
return 0;
}