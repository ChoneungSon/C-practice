#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};

int main(void)
{
	struct rect r;
	int w, h, area, per1;
	
	printf("ù��° ���� ��ǥ�� �Է����ּ���. :");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("�ι�° ���� ��ǥ�� �Է����ּ���. :");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w = abs(r.p1.x - r.p2.x);
	h = abs(r.p1.y - r.p2.y);
	area = w * h;
	per1 = 2 * (w + h);
	
	printf("�簢���� ���̴� %d �̰�, �ѷ��� ���̴� %d �Դϴ�.", area, per1);
	
	return 0;
}
