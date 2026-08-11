#include<stdio.h>

int main()
{
	#define HIGHT 3
	#define WIDTH 4
	#define ENTER '\n'

	int area;
	area = WIDTH * HIGHT;
	printf("area=width * hight=%d", area);
	printf("%s %s", ENTER, ENTER);


	return 0;
}
