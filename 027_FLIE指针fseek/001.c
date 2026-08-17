#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

struct Student
{
	char name[20];
	int num;
	int age;
	float score;
};


int main(void)
{
	struct Student boys[3];
	struct Student boy;
	struct Student* pboys = boys;
	FILE* fp;

	fp = fopen("ceshi.txt", "wb+");

	if (fp == NULL)
	{
		printf("无法打开文件");
		getch();

		exit(1);
	}

	printf("请输入学生信息：\n");

	int i;
	for (i = 0; i < 3; i++)
	{
		scanf("%s %d %d %f",
			pboys->name,
			&pboys->num,
			&pboys->age,
			&pboys->score);

		pboys++;
	}

	fwrite(boys, sizeof(struct Student), 3, fp);

	fseek(fp, sizeof(struct Student), SEEK_SET);

	fread(&boy, sizeof(struct Student), 1, fp);

	printf("%s %d %d %.2f\n", boy.name, boy.num, boy.age, boy.score);

	fclose(fp);

	return 0;
}