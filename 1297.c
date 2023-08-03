#include <stdio.h>
#include <math.h>

int main() {

	int a, m, n;
	double b, x, y;

	scanf("%d %d %d", &a, &n, &m);

	int k = (n*n + m*m);

	b = sqrt(k);

	x = ((n*a) / b);
	y = ((m*a) / b);

	printf("%d %d\n", (int)x, (int)y);

	return 0; 
}