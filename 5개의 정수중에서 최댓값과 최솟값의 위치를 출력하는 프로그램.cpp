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
	
	printf("가장 큰 값은 %d 입니다. 그리고 %d 번째에 있습니다.\ns", max, idx_max+1);
	printf("가장 작은 값은 %d 입니다. 그리고 %d 번째에 있습니다.", min, idx_min+1);	
	
	return 0;
}
