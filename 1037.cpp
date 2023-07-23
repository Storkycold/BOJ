#include <iostream>
#include <algorithm>
#include <vector>
#define INF 9999999

using namespace std;

vector <int> v;

int main() {

	int n;
	int MAX = -INF;
	int MIN = INF;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		v.push_back(input);

		MAX = max(MAX, input);
		MIN = min(MIN, input);
	}
	cout << MAX * MIN << "\n";
}