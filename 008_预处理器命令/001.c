#include <stdio.h>
#include <math.h>

#define F(x) x*x+2*x+1
#define Max(a,b) (a>b)?a:b   //提前定义函数
#define LETTER 1  //0&1就是转向小写或大写的开关

int main(void)
{
	/*int k = F(2);
	printf("%d", k);
	return 0;*/
	
	/*int x, y, max;
	scanf_s("%d %d", &x, &y);
	max = Max(x, y);
	printf("%d",max);*/

	char array[] = "hello world";
	int i=0;
	char c;
	while ((c = array[i]) != '\0')
	{
		i++;
#if LETTER  //选择性编译
		if (c >= 'a' && c <= 'z')
			c -= 32;
#else
		if (c >= 'A' && c <= 'Z')
			c += 32;
#endif
		printf("%c", c);
	}
	printf("\n");
	return 0;
}