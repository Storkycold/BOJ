#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int alpha[26] = { 0, };

int main() {

	string basket; 
	int flag = 0; 
	int tc;

	cin >> tc;

	for(int i = 0; i < tc; i++)
	{
		cin >> basket; 
		alpha[basket[0] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] >= 5)
		{
			printf("%c", (i + 'a'));
			flag = 1; 
		}
	}
	
	if (flag == 0)
	{
		cout << "PREDAJA" << endl;
	}
}