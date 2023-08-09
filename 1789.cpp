#include <iostream>

using namespace std;

typedef long long ll;

int main() {

	ll count = 1; 
	ll sum = 0; 
	ll n; 

	cin >> n; 
	
	while (1)
	{
		sum += count; 

		count++; 

		if (sum > n)
			break;
	}
	cout << count - 2 << endl;

}