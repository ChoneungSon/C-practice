#include <stdio.h>

// 반복함수를 이용하여 숫자 피라미드를 출력
int print(int a)
{
	int i, j;
	for(i=1; i<=a; i++)
	{
		for(j=1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	
} 

int main(void)
{
	int x;
	scanf("%d", &x);
	print(x);
	return 0;	
}

