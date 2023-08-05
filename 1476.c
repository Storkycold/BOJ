#include <stdio.h>
#define r return 0; 

int main() {

	int e, s, m; 
	int E = 1;
	int S = 1; 
	int M = 1; 
	int result = 0;

	scanf("%d %d %d", &e, &s, &m);

	while (1)
	{
		if (E == e && S == s && M == m)
			break;

		E++; 
		if (E == 16)
			E /= 16;
		S++; 
		if (S == 29)
			S /= 29; 
		M++;
		if (M == 20)
			M /= 20; 

		result++;
	}
	printf("%d\n", result + 1);


	r
}