#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long cnt[1001];
long long sum = 0;
long long ans;

int main()
{

    cin.tie(0);
    int n, m;

    vector<int> s(n + 1);
    vector<int> a(n + 1);

    cin >> n >> m;

    for (int i = 1; i <= n; i++) // A1
    {
        int x;
        cin >> x;
        sum += x;

        cnt[sum % m]++;
    }

    for (int i = 0; i < 1000; i++)
    {
        ans += cnt[i] * (cnt[i] - 1) / 2;
    }

    cout << ans + cnt[0] << "\n";

    return 0;
}