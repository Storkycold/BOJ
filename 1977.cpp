#include <iostream>
#define INF 9999999
using namespace std;

int main() {

	int a, b; 
	int sum = 0; 
	int min = INF;

	cin >> a >> b; 

	for (int i = 1; i <= 100; i++)
	{
		if (i*i >= a && i*i <= b)
		{
			sum += i * i;
		}
		if (i*i >= a && i*i <= b && i*i < min)
		{
			min = i * i;
		}
	}
	if (!sum)
		cout << -1 << endl;
	else
		cout << sum << "\n" << min << endl; 
}