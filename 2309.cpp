#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
	
	int arr[9]; 
	int sum = 0; 
	int spy;
	int spy2; 
	
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		sum += arr[i]; 
	}
	sort(arr, arr + 9);

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - arr[i] - arr[j] == 100)
			{
				spy = i; 
				spy2 = j; 
			}
		}
	}

	int i = 0; 
	while (i < 9)
	{
		if (i == spy || i == spy2)
		{
			i++;
			continue;
		}
			cout << arr[i] << "\n";
			i++;
	}
}