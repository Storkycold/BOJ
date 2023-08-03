#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

bool wordcount(string t)
{
	bool alpha[26] = { false, };

	for (int i = 1; i < t.length(); i++)
	{
		if (alpha[i] == true)
		{
			return false;
		}
		else //
		{
			char temp = t[i]; 
			int index = i; 

			alpha[t[i] - 'a'] = true; 

			while (i + 1 < t.length())
			{
				if (t[i] == t[i+1])
				{
					i++;
				}
				else
					break;
			}
		}
	}
	 return true; 
}
int main() {

	int n;
	int cnt = 0;

	cin >> n; 

	for (int i = 0; i < n; i++)
	{
		string s;

		getline(cin, s);
		getchar(); 

		if (wordcount(s))
			cnt++;
	}

	cout << cnt << "\n";
}
