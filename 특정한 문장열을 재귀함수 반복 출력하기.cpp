#include <stdio.h>

void print(int count)
{
	if(count == 0)
	{
		return;
	}
	else
	{
		printf("문자열을 출력합니다.\n");
		print(count - 1);
	}
}
 
 int main(void)
 {
 	int numbers;
 	printf("문자열을 몇개 출력할까요?\n");
 	scanf("%d\n", &numbers);
 	print(numbers)
 	return 0;
 }
