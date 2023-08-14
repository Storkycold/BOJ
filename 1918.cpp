#include <iostream>
#include <stack>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	stack <int> s;
	char str[100];

	scanf("%s", str);
	int len = sizeof(str) / sizeof(str[0]);

	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			cout << str[i];
		}
		else if (str[i] == '(')
		{
			s.push('(');
		}
		else if (str[i] == '*' || str[i] == '/')
		{
			while (!s.empty() && (s.top() == '*' || s.top() == '/'))
			{
				cout << s.top();
				s.pop();
			}
			s.push(str[i]);
		}
		else if (str[i] == '+' || str[i] == '-')
		{
			while (!s.empty() && s.top != '(')
			{
				cout << s.top();
				s.pop();
			}
			s.push(str[i]);
		}
		else if (str[i] == ')')
		{
			while (!s.empty() && s.top() != '(')
			{
				cout << s.top();
				s.pop();
			}
			s.pop();
		}
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}
