#include <iostream>
#include <regex>
#include <string>
using namespace std;

void func(void)
{
    string str;
    cin >> str;

    regex pattern("(100+1+|01)+");
    cout << (regex_match(str, pattern) ? "YES" : "NO") << "\n";
}

int main()
{
    cin.tie(NULL);
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; i++)
    {
        func();
    }

    return 0;
}