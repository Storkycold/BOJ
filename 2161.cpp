#include <iostream>
#include <deque>
using namespace std;

int main() {

	deque <int> d;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		d.push_back(i);
	} // 1 2 3 4 5 6 7 ют╥б 
	for (int i = 0; i < n - 1; i++)
	{
		cout << d.front() << " ";
		d.pop_front();
		d.push_back(d.front());
		d.pop_front();
	}
	cout << d.front() << "\n";
}