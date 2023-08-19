#include <iostream>
using namespace std;

typedef long long ll; 

int main() {

	ll n;

	cin >> n;

	ll result = 1 + 4 * n + (3 * n * (n - 1) / 2);
	result %= 45678;

	cout << result << "\n";
}