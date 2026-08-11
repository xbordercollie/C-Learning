#include <stdio.h>
#include <string.h>

struct Student
{
	int id;
	char name[30];
	float score;
	char address[30];
};

struct Date
{
	int year;
	int month;
	int day;
};

int main()
{
	struct Student student;
	student.id = 202501202060;
	//student.name = "张三";   这是错误写法！
	strcpy_s(student.name,7, "李子扬");
	student.score = 99.2;
	strcpy_s(student.address, 13, "广东省中山市");

	printf("%s\n", student.name);
	printf("%s\n", student.address);
	printf("%.2f\n", student.score);
	return 0;
}