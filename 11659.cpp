#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    cin.tie(nullptr);

    int n, m;

    cin >> n >> m;

    vector<int> a(n + 1);
    vector<int> s(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }

    while (m--)
    {
        int x, y;

        cin >> x >> y;

        cout << s[y] - s[x - 1] << "\n";
    }

    return 0;
}