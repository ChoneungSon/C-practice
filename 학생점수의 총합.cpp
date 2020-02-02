#include <stdio.h>

int main(void) 
{
	int scores[5][2];
	int total[2] = {0, };
	int i;
	
	for (i=0;i<5;i++)
	{
		printf("%d번 학생의 수학, 영어 점수 : ", i + 1);
		scanf("%d %d", &scores[i][0], &scores[i][1]);
	}
	
	for (i=0;i<5;i++)
	{
		total[0] += scores[i][0];
		total[1] += scores[i][1];
	}
	
	printf("\n\n5명의 수학 점수 합계 : %d\n", total[0]);
	printf("5명의 영어 점수 함계 : %d", total[1]);
	
	return 0;
}
