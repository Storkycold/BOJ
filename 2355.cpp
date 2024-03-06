#include <iostream>

using namespace std;

typedef long long ll;

int main() {

	cin.tie(NULL);

	ll i, j; 

	cin >> i >> j; 

	if (j >= i)
	{
		cout << ((j - i + 1) * (i + j)) / 2 << "\n";
	}
	else
		cout << ((i - j + 1) * (i + j)) / 2 << "\n";
}