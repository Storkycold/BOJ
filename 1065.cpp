#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	int cnt = 99; 

	cin >> n; 

	if (n < 100)
	{
		cout << n << "\n";
		return 0; 
	}
	if (n == 1000)
		n = 999;

	for (int i = 111; i <= n; i++)
	{
		string s = to_string(i);

		if (s[1] - s[0] == s[2] - s[1])
			cnt++;
	}
	cout << cnt << "\n";
}