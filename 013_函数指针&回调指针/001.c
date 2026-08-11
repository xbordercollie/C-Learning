#include <stdio.h>

int findmax(int a, int b);
int minus(int a, int b);
int plus(int a, int b);

void light_on() { printf("开灯 → 明亮！\n"); }
void light_off() { printf("关灯 → 漆黑！\n"); }

void ac_on() { printf("开空调 → 凉爽！\n"); }
void ac_off() { printf("关空调 → 闷热！\n"); }

void tv_on() { printf("开电视 → 追剧！\n"); }
void tv_off() { printf("关电视 → 安静！\n"); }

int main()
{
	/*int a, b, c;
	printf("请输入三个数：");
	scanf_s("%d %d %d", &a, &b, &c);
	int (*p)(int,int);
	p = findmax;
	int d = p(p(a, b), c);
	printf("最大的数是:%d\n", d);*/

	/*int a, b;
	int (*p)(int, int);
	char c;
	printf("请输入两个整数:\n");
	scanf_s("%d %d", &a,&b);
	printf("请输入+or-  :\n");
	scanf_s(" %c", &c,1);
	if (c == '+') p = plus;
	else if (c == '-') p = minus;
	else { return 1; }
	int d = p(a, b);
	printf("结果是：%d",d);*/

	void (*remote_btn[])(void) = {         //函数指针数组，存放不同函数名；
		light_on,  // 按钮1 → 索引0（数组从0开始，后面调整一下）
		light_off, // 按钮2 → 索引1
		ac_on,     // 按钮3 → 索引2
		ac_off,    // 按钮4 → 索引3
		tv_on,     // 按钮5 → 索引4
		tv_off     // 按钮6 → 索引5
	};

	int btn;
	printf("按按钮（1-6）：");
	scanf_s("%d", &btn);

	if (btn >= 1 && btn <= 6) {
		// 按钮编号-1 = 数组索引（比如btn=1 → 索引0 → 调用light_on）
		remote_btn[btn - 1]();  // 拨开关 → 驱动对应设备
	}
	else {
		printf("按钮无效！\n");
		return 1;
	}

	return 0;
}



int findmax(int a, int b) { return (a > b) ? a : b; }
int minus(int a, int b) { return a - b; }
int plus(int a, int b) { return a + b; }