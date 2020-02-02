#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
	int number;
	char title[100];
};

void showbook(struct book *p, int n)
{
	int i;
	for (i=0; i <n; i++)
	{
		printf("��ȣ %d : %s\n",(p+i)->number, (p+i)->title);
	}
}

int main(void)
{
	struct book *p;
	p = (struct book *)malloc(2 * sizeof(struct book));
	
	if (p == NULL)
	{
		printf("���� �޸� �Ҵ翡 ���� �߽��ϴ�.\n");
		exit(1);
	}
	
	p->number = 1;
	strcpy(p->title, "C programing");
	
	(p+1)->number = 2;
	strcpy((p+1)->title, "Data structure");
	
	showbook(p, 2);
	free(p);
	
	return 0;
}
