#include <stdio.h>

int main(void)
{
	int x, i;
	printf("������ �Է��ϼ���. : ");
	scanf("%d", &x);
	printf("%d ��\n", x);
	for(i = 1; i < 10; i++)
	{
		printf("%d X %d = %d\n", x, i, x*i);
	} 
	return 0;
} 
