#include <iostream>
#include <string>

using namespace std;

int main() {

	string s; 
	int cnt;

	while (1)
	{
		cnt = 0;
		getline(cin, s);

		if (s[0] == '#')
		{
			break;
		}
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
			{
				cnt++;
			}
		}
		cout << cnt << "\n";
		s.clear();
	}
	return 0;
}