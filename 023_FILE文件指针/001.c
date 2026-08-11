#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	/*FILE* fileP;

	fileP = fopen("test.txt", "w+");

	fprintf(fileP, "这是一个测试类型的文本\n");
	fputs("你好，世界！", fileP);*/

	FILE* fp;
	fp = fopen("test.txt", "w+");
	char charbuffer[255];

	fprintf(fp,"why is my dog\n");
	rewind(fp);

	fgets(charbuffer, 255, fp);
	printf("1:%s\n", charbuffer);

	fclose(fp);

	return 0;
}