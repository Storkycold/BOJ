#include <stdio.h>
#define r return 0; 

int main() {

	int a;
	int tc;
	int result = 0;

	scanf("%d", &tc);

	for (int i = 0; i < tc; i++)
	{
		scanf("%d", &a);

		result += a; 
	}
	printf("%d\n", result - tc + 1);


	r
}