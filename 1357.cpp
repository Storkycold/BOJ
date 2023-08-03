#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int rev(int n)
{
	int a, b, c, d;

	if (n >= 1000)
	{
		a = n / 1000;
		b = (n - (a * 1000)) / 100;
		c = (n - (a * 1000) - (b * 100)) / 10;
		d = n % 10;

		return d * 1000 + c * 100 + b * 10 + a;
	}
	else if (100 <= n && n < 1000)
	{
		b = n / 100;
		c = (n - b * 100) / 10;
		d = n % 10;

		return d * 100 + c * 10 + b;
	}
	else if (10 <= n && n < 100)
	{
		c = n / 10;
		d = n - (c * 10);

		return d * 10 + c;
	}
	else
		return n; 
}
int main() {

	int a, b;

	cin >> a >> b; 

	if (a > 1000 || b > 1000)
		return 0; 

	printf("%d\n", rev(rev(a) + rev(b)));

	return 0; 
}