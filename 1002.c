#include <stdio.h>
#include <math.h>
#define r return 0; 

// 두 원의 위치관계 
// 사이 d 구하기 
// 같을 때 다를 때

int main() {

	int tc; 

	scanf("%d", &tc);

	for (int i = 0; i < tc; i++)
	{
		int x1, y1, x2, y2, r1, r2; 
		double d;
		
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
	
		d = sqrt(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0));

		if (x1 == x2 && y1 == y2)
		{
			if (r1 == r2)
			{
				printf("-1\n");
			}
			else
				printf("0\n");
		}
		else
		{
			if (d == r1 + r2)
			{
				printf("1\n");
			}
			else if (d == abs(r1 - r2))
			{
				printf("1\n");
			}
			else if (abs(r1 - r2) < d && d < r1 + r2)
			{
				printf("2\n");
			}
			else
				printf("0\n");
		}
	}

	r
}