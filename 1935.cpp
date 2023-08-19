#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <cstdio>
using namespace std;

int main() {

	stack <double> s; 
	string str;
	int N;

	cin >> N;
	double* arr = new double[N];
	cin.ignore(); 
	cin >> str;

	for(int i = 0; i < N; i++)
	{
		cin >> arr[i]; 
	}
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			s.push(str[i]);
		}
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
		{
			double a, b;
			char cur = str[i]; 

			a = s.top(); 
			s.pop(); 
			b = s.top(); 
			s.pop(); 

			switch (cur)
			{
			case '+':
				s.push(b + a);
				break;
			case '-':
				s.push(b - a);
				break;
			case '*':
				s.push(b * a);
				break;
			case '/':
				s.push(b / a);
				break;
			}
		}
		else 
			s.push(arr[str[i] - 'A']);
	}
	printf("%.2lf\n", s.top());
	
}