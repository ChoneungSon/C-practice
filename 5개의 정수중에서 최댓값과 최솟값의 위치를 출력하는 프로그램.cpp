#include <stdio.h>
#include <limits.h>
#define number 5 

int main(void)
{
	int i, max, min, idx_max, idx_min;
	int array[number];
	max = 0;
	min = INT_MAX;
	idx_min = 0;
	idx_max = 0;
	
	for(i=0; i<number; i++)
	{
		scanf("%d", &array[i]);
		if (max < array[i])
		{
			max = array[i];
			idx_max = i;
		}
		if (min > array[i])
		{
			min = array[i];
			idx_min = i;
		}
	}
	
	printf("���� ū ���� %d �Դϴ�. �׸��� %d ��°�� �ֽ��ϴ�.\ns", max, idx_max+1);
	printf("���� ���� ���� %d �Դϴ�. �׸��� %d ��°�� �ֽ��ϴ�.", min, idx_min+1);	
	
	return 0;
}
