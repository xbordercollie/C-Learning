#include<stdio.h>

int main(void)		//下面讲的都是二进制的数字
{
	int a = 9;
	int b = 5;
	int c,d,e,f,g,h;
	c = a & b;  //都为1才是1，否则是0
	d = a | b;  //有一个是1就是1
	e = a ^ b;  //两个不同时为1，否则为0
	f = ~a;		//取反，0->1,1->0
	g = a << 4;	//左移4位，相当于放大
	h = a >> 4;	//右移4为，相当于变小

	printf("9&5=%d\n", c);
	printf("9|5=%d\n", d);
	printf("9^5=%d\n", e);
	printf("~9=%d\n", f);
	printf("9<<4=%d\n", g);
	printf("9>>4=%d\n", h);

	return 0;
}