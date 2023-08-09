#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <string>

using namespace std; 

set <string> s;
vector <string> v; 

int main() {

	int a, b; 

	cin >> a >> b; 

	for (int i = 0; i < a; i++)
	{
		string temp; 
		cin >> temp; 

		s.insert(temp);
	}
	for (int i = 0; i < b; i++)
	{
		string temp; 
		cin >> temp; 

		if (s.count(temp))
		{
			v.push_back(temp);
		}
	}
	sort(v.begin(), v.end());

	int len = v.size(); 

	cout << len << "\n";

	for (int i = 0; i < len; i++)
	{
		cout << v[i] << "\n"; 
	}
}