#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    int N;
    int ans = 0;
    cin >> N;

    vector<string> v(N);
    vector<bool> check(N, true); // 미리 컴파일 안되게 조심해야함

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j].substr(0, v[i].size()) == v[i])
            {
                check[i] = false;
                break;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (check[i] == true)
        {
            ans++;
        }
    }
    cout << ans << "\n";

    return 0;
}
