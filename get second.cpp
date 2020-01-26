#include <stdio.h>
#define MINUTE_PER_SECOND 60

int main(void)
{
	int input = 1000;
	int minute = input / MINUTE_PER_SECOND;
	int second = input % MINUTE_PER_SECOND;
	printf("%d초는 %d분 %d초 입니다.",input,minute,second);
	return 0;
}
