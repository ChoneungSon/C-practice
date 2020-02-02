#include <stdio.h>
#define number 5 

int main(void)
{
	int i, max_odd, max_even, idx_odd, idx_even;
	int array[number];
	max_odd = 0;
	max_even = 0;
	idx_odd = 0;
	idx_even = 0;
	
	for(i=0;i<number;i++)
	{
		scanf("%d", &array[i]);
		
		if(array[i]%2==0 & max_even < array[i])
		{
			max_even = array[i];
			idx_even = i;
		}
		else if(array[i]%2 != 0 & max_odd < array[i])
		{
			max_odd = array[i];
			idx_odd = i;
		}
	}
		
	printf("짝수 중에 가장 큰 수는 %d 이고, %d 번째에 위치해 있습니다.\n", max_even, idx_even+1);
	printf("홀수 중에 가장 큰 수는 %d 이고, %d 번째에 위치해 있습니다.", max_odd, idx_odd+1);
	
	return 0;
}
