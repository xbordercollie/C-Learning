#include<stdio.h>

enum Week
{
	Mon=1,
	Tue,
	Thu,
	Wed,
	Fri,
	Sat,
	Sun
}today;

int main(void)
{
	today = Tue;
	printf("%d\n", today);

	return 0;
}