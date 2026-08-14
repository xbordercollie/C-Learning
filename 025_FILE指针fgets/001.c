#include<stdio.h>
#pragma warning(disable:4996)
#include<string.h>

int main(void)
{
	/*FILE* fp;
	char str[100];

	fp = fopen("wenben.txt", "rt");

	if (fp == NULL)
	{
		puts("wrong!");
		return 1;
	}
	
	while (fgets(str,100,fp)!=NULL)
	{
		printf("%s", str);
	}

	fclose(fp);*/

	FILE* fp;
	char temp[100];
	char str[200] = { 0 };
	
	fp = fopen("wenben.txt", "at+");
	if (fp == NULL)
	{
		puts("wrong!");
		return 1;
	}

	printf("请输入文本：\n");

	//gets(temp);  已弃用，最多输入99字符，多了直接程序崩溃
	fgets(temp, sizeof(temp), stdin);
	temp[strcspn(temp, "\n")] = '\0';	//用于去掉回车后的换行

	strcat(str, temp);

	fputs(str, fp);

	fclose(fp);
	return 0;
}