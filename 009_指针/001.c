#include <stdio.h>

int main()
{
	/*int a[10] = { 1,3,5,7,9,2,4,6,8,10, };
	int* p = a;
	int i;*/
	//for (i = 0; i < 10; i++) {
	//	printf("%d\t", *p);   //p是地址！！可以直接理解指针就是地址
	//	p++;				  //*p就是顺着地址去找对应内容！！
	
	//char* name[] = { "你好","sadkfj","???????" };  //name本身就是一个指针，放了3个地址/指针数组只能存地址！！！
	//char** p;									   //**p是指向name的指针，所以才用二级指针
	//int i;
	//for (i = 0; i < 3; i++) {
	//	p = name + i;
	//	printf("%s\n", *p);
	//}

	/*int a = 1;
	int* p = &a;
	printf("a的地址是:%p\n", p);
	printf("a的值是:%d\n", *p);*/

	const int arraymax = 4;
	int array[] = {1,2,3,3,4};
	int* p;
	p = array;
	while (p <= &array[arraymax])
	{
		printf("%d 的地址是 %p\n", *p, p);
		p++;
	}

	return 0;
}