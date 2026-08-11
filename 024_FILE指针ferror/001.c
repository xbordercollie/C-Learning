#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	//FILE* fp;
	//char myChar;
	//fp=fopen("nihao.txt", "rt");
	//if ((fp = fopen("nihao.txt", "rt")) == NULL)
	//{
	//	printf("文件读取失败！");
	//	exit(0);   //或者是return 1  0是正常结束，1是异常结束
	//}
	//while ((myChar = fgetc(fp)) != EOF)
	//{
	//	putchar(myChar);
	//}
	
	FILE* fp;
	char ch;
	fp = fopen("nihao.txt", "rt");
	if (fp == NULL)
	{
		puts("wrong!!!");
		return 1;
	}
	if (ferror(fp))					//只是用来检验是否成功
	{
		puts("wrong!\n");
	}
	else
	{
		puts("succeed!\n");
	}

	while ((ch = fgetc(fp)) != EOF)
	{
		putchar(ch);
	}
	fclose(fp);
	return 0;
}