#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001] = { 0, };

int main() {

	int a, b; 
	int sum = 0; 
	int p = 0; 

	cin >> a >> b; 

	for (int i = 0; p < 1000; i++)
	{
		static int n = 1; 

		for (int j = 0; j <= i; j++)
		{
			arr[p++] = n;

			if (p == 1000)
			{
				break; 
			}
		}
		n++; 
	}
	for (int i = a - 1; i <= b - 1; i++)
	{
		sum += arr[i]; 
	}
	cout << sum << "\n";
}