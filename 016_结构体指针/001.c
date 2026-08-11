#include<stdio.h>
#include<string.h>

void Printstruct(struct Student* pstudent);

struct Student
{
	char name[20];
	int age;
	char address[30];
	char phonenum[25];
};


int main(void)

{
	//struct Student stu;
	//struct Student* pstudent = &stu;

	//pstudent->age = 18;
	//
	//strcpy_s(pstudent->address, 13, "广东省中山市");
	//strcpy_s(pstudent->name, 7, "李子扬");

	//printf("%s\n", pstudent->name);
	//printf("%d\n", pstudent->age);
	//printf("%s\n", pstudent->address);
	////printf("%s\n", pstudent->phonenum);

	struct Student stu1;
	stu1.age = 18;
	strcpy_s(stu1.address, 13, "中山市三乡镇");
	strcpy_s(stu1.name, 7, "李子扬");

	Printstruct(&stu1);             //取地址？是因为stu1只是名称，不是数组名或者指针！！

	return 0;
}


void Printstruct(struct Student* pstudent)
{
	printf("姓名: %s\n", pstudent->name);
	printf("年龄: %d\n", pstudent->age);
	printf("地址: %s\n", pstudent->address);
}