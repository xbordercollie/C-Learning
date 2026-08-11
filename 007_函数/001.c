#include<stdio.h>
#include<math.h>


//调用函数
void nihao();
int bijiao(int a, int b);
void separate();
float average(float a[]);
int facto(int n);


//主体
int main(void)
{
	/*nihao();
	int a = 10;
	int b = 20;
	bijiao(a, b);*/

	//separate();

	/*float score[10];
	int i;
	printf("请输入学生成绩：\n");
	for (i = 0; i < 10; i++) {
		scanf_s("%f", &score[i]);
	}
	float aver = average(score);
	printf("学生的平均分是：%.2f", aver);*/

	/*int i;
	int n = 1;
	printf("你想打印多少阶乘表？:");
	scanf_s("%d", &n);
	for (i = 1; i < n + 1; i++) {
		printf("%d!=%d\n", i, facto(i));
	}*/

	int x = 1;
	int n = 1;
	while (x <= 2) 
	{
		scanf_s("%d", &n);
		printf("%d!=%d\n", n, Facto(n));
		x++;
	}
	//scanf_s("%d", &n);
	//printf("%d!=%d\n", n, Facto(n));

	return 0;
}




//下面是函数

void nihao()
{
	printf("hello world!\n");
}

int bijiao(int a, int b)//局部变量
{
	int max = (a > b) ? a : b;
	printf("%d更大\n", max);
	return 0;
}

void separate()
{
	printf("*****************************************************************\n");
}

float average(float a[])
{
	float aver = 0;
	float sum = 0;
	int i;
	for (i = 0; i < 10; i++) {
		sum += a[i];
	}
	aver = sum / 10;

	return aver;
}

int facto(int n)
{
	static int a = 1;     //将上一次计算的结果保留到程序结束；
	a *= n;
	return a;
}

int Facto(int n)
{
	register f = 1;     //用寄存器能更好压榨cpu硬件性能
	int i;
	for (i = 1; i < n + 1; i++) {
		f *= i;
	}
	return f;
}