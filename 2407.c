#include <stdio.h>
#define r return 0; 
typedef long long ll; 

ll com(ll, ll);
ll factorial(ll);

int main() {

	ll a, b; 

	scanf("%ld %ld", &a, &b);

	printf("%ld\n", com(a, b));


	r
}
ll factorial(ll x)
{
	if (x == 1)
		return 1;
	else
		return x * factorial(x - 1);
}
ll com(ll x, ll y)
{
	return factorial(x) / (factorial(x - y) * factorial(y));
}