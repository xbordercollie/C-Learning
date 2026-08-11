#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	FILE* fp;
	fp = fopen("ceshi.txt", "wb+");
	int a[5];
	int b[5];
	int size = sizeof(int);
	int i;

	if (fp == NULL)
	{
		puts("wrong!");
		return 1;
	}

	for (i = 0; i < 5; i++)
	{
		scanf_s("%d",&a[i]);
	}

	fwrite(a, size, 5, fp);
	rewind(fp);
	fread(b, size, 5, fp);

	for (i = 0; i < 5; i++)
	{
		printf("%d", b[i]);
	}

	fclose(fp);

	return 0;
}