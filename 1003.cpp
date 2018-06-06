#include <iostream>

using namespace std;

int result[41][2];

int main() {

	result[0][0] = 1;
	result[1][0] = 0;
	result[0][1] = 0;
	result[1][1] = 1;

	for (int i = 2; i < 42; i++)
	{
		result[i][0] = result[i - 1][0] + result[i - 2][0];
		result[i][1] = result[i - 1][1] + result[i - 2][1];
	}

	int tc;
	int a;

	cin >> tc;

	for (int i = 0; i < tc; i++)
	{
		cin >> a;

		cout << result[a][0] << " " << result[a][1] << endl;
	}
}