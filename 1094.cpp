#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int n; 
	int cnt = 0;
	int len = 64; 

	cin >> n; 

	while (n > 0)
	{
		if (len > n)
			len /= 2;
		else
		{
			cnt++; 
			n -= len; 
		}
	}
	cout << cnt << "\n";
}