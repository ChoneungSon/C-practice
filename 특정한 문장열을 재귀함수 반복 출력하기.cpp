#include <stdio.h>

void print(int count)
{
	if(count == 0)
	{
		return;
	}
	else
	{
		printf("���ڿ��� ����մϴ�.\n");
		print(count - 1);
	}
}
 
 int main(void)
 {
 	int numbers;
 	printf("���ڿ��� � ����ұ��?\n");
 	scanf("%d\n", &numbers);
 	print(numbers)
 	return 0;
 }
