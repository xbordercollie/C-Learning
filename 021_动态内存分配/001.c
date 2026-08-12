//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//struct Student
//{
//	char name[10];
//	float grade;
//};
//
//int main(void)
//{
//	struct Student* stu = malloc(sizeof(struct Student));
//
//	if (stu == NULL)
//	{
//		printf("内存分配失败!\n");
//		return 1;
//	}
//
//	strcpy_s(stu->name, 7, "王瀚瑜");
//	stu->grade = 92.5f;
//
//	printf("%s\n", stu->name);
//	printf("%.1f\n", stu->grade);
//
//	free(stu);
//	stu = NULL;
//
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#pragma warning(disable : 4996)
//// 定义学生结构体（包含姓名、学号、成绩，贴近实际系统）
//typedef struct {
//    char name[20];   // 姓名（预留足够空间）
//    int id;          // 学号（唯一标识）
//    float score;     // 成绩
//} Student;
//
// * 函数1：创建批量学生（堆内存分配）
// * @param count 要创建的学生数量
// * @return 指向学生数组的指针（堆内存），失败返回NULL
// */
//Student* createStudents(int count) {
//    // 校验参数：学生数量必须大于0
//    if (count <= 0) {
//        printf("错误：学生数量必须大于0！\n");
//        return NULL;
//    }
//
//    // 分配堆内存：count个Student结构体的总字节数
//    // 核心：malloc(单个结构体大小 * 数量) → 分配连续的结构体数组
//    Student* students = malloc(count * sizeof(Student));
//    if (students == NULL) {
//        printf("错误：内存分配失败！\n");
//        return NULL;
//    }
//
//    // 初始化批量学生数据（模拟从数据库/用户输入读取）
//    char* defaultNames[] = { "王瀚瑜", "张三", "李四", "赵五", "钱六" };
//    for (int i = 0; i < count; i++) {
//        // 给每个学生赋值（指针偏移：students[i] 等价于 *(students + i)）
//        strncpy(students[i].name, defaultNames[i % 5], sizeof(students[i].name) - 1);
//        students[i].name[sizeof(students[i].name) - 1] = '\0'; // 确保字符串结束
//        students[i].id = 20260001 + i; // 学号从20260001开始递增
//        students[i].score = 80.0f + i * 2.5f; // 成绩递增（80, 82.5, 85...）
//    }
//
//    printf("成功创建 %d 个学生（堆内存）\n", count);
//    return students;
//}
//
// * 函数2：修改指定学号的学生成绩（指针传递）
// * @param students 学生数组指针（堆内存）
// * @param count 学生总数
// * @param targetId 要修改的学号
// * @param newScore 新成绩
// * @return 成功返回1，失败返回0
// */
//int updateStudentScore(Student* students, int count, int targetId, float newScore) {
//    // 校验指针和参数合法性
//    if (students == NULL || count <= 0 || newScore < 0 || newScore > 100) {
//        printf("错误：参数不合法！\n");
//        return 0;
//    }
//
//    // 遍历学生数组，查找目标学号
//    for (int i = 0; i < count; i++) {
//        if (students[i].id == targetId) {
//            students[i].score = newScore; // 指针直接操作原堆内存数据
//            printf("修改成功！学号 %d 的成绩已更新为 %.1f\n", targetId, newScore);
//            return 1;
//        }
//    }
//
//    printf("修改失败！未找到学号 %d 的学生\n", targetId);
//    return 0;
//}
//
// * 函数3：查询指定学号的学生信息（指针传递）
// * @param students 学生数组指针（堆内存）
// * @param count 学生总数
// * @param targetId 要查询的学号
// */
//void queryStudent(Student* students, int count, int targetId) {
//    if (students == NULL || count <= 0) {
//        printf("错误：学生数据不存在！\n");
//        return;
//    }
//
//    // 遍历查找目标学生
//    for (int i = 0; i < count; i++) {
//        if (students[i].id == targetId) {
//            printf("\n===== 学生信息查询结果 =====\n");
//            printf("学号：%d\n", students[i].id);
//            printf("姓名：%s\n", students[i].name);
//            printf("成绩：%.1f\n", students[i].score);
//            printf("===========================\n");
//            return;
//        }
//    }
//
//    printf("查询失败！未找到学号 %d 的学生\n", targetId);
//}
//
// * 函数4：释放学生数组的堆内存（避免内存泄漏）
// * @param students 学生数组指针
// */
//void freeStudents(Student* students) {
//    if (students != NULL) {
//        free(students);
//        students = NULL; // 置空指针，避免野指针
//        printf("\n已释放学生数据的堆内存\n");
//    }
//}
//
//// 主函数：演示完整流程
//int main(void) {
//    // 1. 创建5个学生（堆内存）
//    int studentCount = 5;
//    Student* stuArray = createStudents(studentCount);
//    if (stuArray == NULL) {
//        return 1; // 内存分配失败，退出程序
//    }
//
//    // 2. 查询学号20260001的学生（王瀚瑜）
//    queryStudent(stuArray, studentCount, 20260001);
//
//    // 3. 修改学号20260001的成绩为95.0
//    updateStudentScore(stuArray, studentCount, 20260001, 95.0f);
//
//    // 4. 再次查询，验证修改结果
//    queryStudent(stuArray, studentCount, 20260001);
//
//    // 5. 尝试修改不存在的学号（边界测试）
//    updateStudentScore(stuArray, studentCount, 20269999, 88.0f);
//
//    // 6. 释放堆内存（必做！）
//    freeStudents(stuArray);
//
//    return 0;
//}

struct Student
{
	char name[20];
	float grade;
	long long int id;
};

int main(void)
{
	struct Student* stu;
	stu = malloc(sizeof(struct Student));
	
	if (stu == NULL)
	{
		printf("no!");
		return 1;
	}

	stu->grade = 99.5;
	stu->id = 202501202060;
	strcpy_s(stu->name, 4, "why");

	printf("%lld\n", stu->id);
	printf("%s\n",stu->name);
	printf("%.2f\n",stu->grade);
	printf("%p\n",stu);
	//打印分配到的地址

	free(stu);

	return 0;
}