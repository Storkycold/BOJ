#include <iostream>
#include <string>
using namespace std;

int main() {

	int max = 0; 
	int alpha[26] = { 0, };
	string s; 

	while (cin >> s)
	{
		for (int i = 0; i < s.length(); i++)
		{
			alpha[s[i] - 'a']++; 
		}
		s = "";
	}
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] > max)
			max = alpha[i]; 
	}
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] == max)
			cout << (char)('a' + i);
	}
	cout << "\n";
}