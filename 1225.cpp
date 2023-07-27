#include <iostream>
#include <vector>
#include <cstring>
#include <cstdio>

using namespace std;

typedef long long ll;
char av[10001]; 
char bv[10001]; 

int main() {

	ll a, b; 
	ll sum = 0; 
	// ll c, d; 

	cin >> av;
	cin.ignore();
	cin >> bv; 
	
	a = strlen(av);
	b = strlen(bv);

	for (ll i = 0; i < a; i++)
	{
		for (ll j = 0; j < b; j++)
		{
			sum += (av[i] - '0') * (bv[j] - '0');
		}
	}
	cout << sum << endl;
}