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
	
	printf("첫번째 점의 좌표를 입력해주세요. :");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("두번째 점의 좌표를 입력해주세요. :");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w = abs(r.p1.x - r.p2.x);
	h = abs(r.p1.y - r.p2.y);
	area = w * h;
	per1 = 2 * (w + h);
	
	printf("사각형의 넓이는 %d 이고, 둘레의 길이는 %d 입니다.", area, per1);
	
	return 0;
}
