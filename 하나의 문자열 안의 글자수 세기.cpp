#include <stdio.h>

int main(void)
{
	char input[1001];
	gets(input);
	int count = 0;
	while(input[count] != '\0')
	{
		count++;
	}
	printf("입력한 문자열의 길이는 %d 입니다.\n", count);
	printf("입력한 문자열은 %s 입니다.\n", input);
	return 0;
}
