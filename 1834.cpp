#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

int main() {

	cin.tie(NULL);
	ll n; 
	ll sum = 0;

	cin >> n;

	if (n > 2000000 && n < 0)
		return 0; 
	if (n == 1)
		cout << 0 << "\n";

	for (ll i = 1; i < n; i++)
	{
		sum += (n + 1) * i; 
	}
	cout << sum << "\n";
}