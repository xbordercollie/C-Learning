#include<stdio.h>
#include<string.h>

struct Person
{
	char name[12];
	char sex;
	int age;
	char job;
	union persondata
	{
		int class;
		char position[20];
	}info;
};

int main(void)
{
	struct Person person[2];
	int i;
	for (i = 0; i < 2; i++)
	{
		// 修正：%s传缓冲区大小12；char变量加&，并传大小1
		scanf_s("%s %c %d %c",
			person[i].name, 12,
			&person[i].sex, 1,
			&person[i].age,
			&person[i].job, 1);

		if (person[i].job == 's')
		{
			scanf_s("%d", &person[i].info.class);
		}
		else if (person[i].job == 't')
		{
			scanf_s("%s", person[i].info.position, 20);
		}
	}

	for (i = 0; i < 2; i++)
	{
		if (person[i].job == 's')
		{
			printf("%s %c %d %c %d\n",
				person[i].name, person[i].sex, person[i].age, person[i].job, person[i].info.class);
		}
		else if (person[i].job == 't')
		{
			printf("%s %c %d %c %s\n",
				person[i].name, person[i].sex, person[i].age, person[i].job, person[i].info.position);
		}
	}

	return 0;
}