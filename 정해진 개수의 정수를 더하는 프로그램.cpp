#include <stdio.h>

int main(void)
{
	int number, x, i, sum = 0;
	printf("������ ������ �Է��ϼ��� : ");
	scanf("%d", &number);
	getchar();
	for(i = 0; i < number; i++)
	{
		printf("������ ���� �Է��ϼ���. : ");
		scanf("%d", &x);
		sum += x;
		getchar();
	} 
	printf("��ü ������ ���� %d �Դϴ�.", sum);
}
