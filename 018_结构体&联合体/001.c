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
		scanf_s("%s %c %d %c", &person[i].name, &person[i].sex, &person[i].age,&person[i].job);
		if (person[i].job == 's') {
			scanf_s("%d", &person[i].info.class);
		}
		else if (person[i].job == 't') {
			scanf_s("%s", &person[i].info.position);
		}
	}

	for (size_t i = 0; i < 2; i++)
	{
		if (person[i].job == 's') {
			printf("%s %c %d %c %d", person[i].name, person[i].sex, person[i].age, person[i].job,person[i].info.class);
		}
		else if (person[i].job == 't') {
			printf("%s %c %d %c %s", person[i].name, person[i].sex, person[i].age, person[i].job,person[i].info.position);
		}
	}
	return 0;
}

//ÕÅÈý m 18 s 108