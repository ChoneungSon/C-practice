#include <stdio.h>

int main(void)
{
	int x, i;
	printf("정수를 입력하세요. : ");
	scanf("%d", &x);
	printf("%d 단\n", x);
	for(i = 1; i < 10; i++)
	{
		printf("%d X %d = %d\n", x, i, x*i);
	} 
	return 0;
} 
