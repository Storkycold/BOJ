#include <stdio.h>

typedef long long ll; 

int main() {
	
	ll A, B, C; 

	scanf("%lld %lld %lld", &A, &B, &C);

	if (C - B <= 0)
		printf("-1\n");
	else
		printf("%lld\n", A / (C - B) + 1);

	return 0; 
}