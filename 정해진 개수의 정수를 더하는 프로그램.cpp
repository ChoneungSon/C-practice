#include <stdio.h>

int main(void)
{
	int number, x, i, sum = 0;
	printf("정수의 개수를 입력하세요 : ");
	scanf("%d", &number);
	getchar();
	for(i = 0; i < number; i++)
	{
		printf("정수의 값을 입력하세요. : ");
		scanf("%d", &x);
		sum += x;
		getchar();
	} 
	printf("전체 정수의 합은 %d 입니다.", sum);
}
