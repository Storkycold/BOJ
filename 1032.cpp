#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {

	int tc; 

	cin >> tc; 

	string* str = new string[tc]; // 동적 할당

	for (int i = 0; i < tc; i++)
	{
		cin >> str[i]; 
	}
	if (tc == 1)
	{
		cout << str[0]; 
		return 0; 
	}
	int len = str[0].size(); //
	vector <char> ans; 

	for (int i = 0; i < len; i++)
	{
		bool flag = false;
		char c; 

		for (int j = 0; j < tc - 1; j++)
		{
			c = str[j][i]; 

			if (str[j][i] == str[j + 1][i])
			{
				flag = true;
			}
			else
			{
				flag = false; 
				break;
			}
		}
		if (flag)
			ans.push_back(c);
		else
			ans.push_back('?');
	}
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i]; 
	}
}