#include <stdio.h>

int main(void) 
{
	int scores[5][2];
	int total[2] = {0, };
	int i;
	
	for (i=0;i<5;i++)
	{
		printf("%d�� �л��� ����, ���� ���� : ", i + 1);
		scanf("%d %d", &scores[i][0], &scores[i][1]);
	}
	
	for (i=0;i<5;i++)
	{
		total[0] += scores[i][0];
		total[1] += scores[i][1];
	}
	
	printf("\n\n5���� ���� ���� �հ� : %d\n", total[0]);
	printf("5���� ���� ���� �԰� : %d", total[1]);
	
	return 0;
}
