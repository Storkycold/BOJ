#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M;
    vector<int> v1;
    vector<int> v2;

    cin >> T;

    while (T--)
    {
        int x, y;
        int cnt = 0;

        scanf("%d %d", &N, &M);

        v1 = vector<int>(N);
        v2 = vector<int>(M);

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &v1[i]);
        }
        for (int i = 0; i < M; i++)
        {
            scanf("%d", &v2[i]);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        for (int i = 0; i < N; i++)
        {
            int left = 0;
            int right = M;

            while (left + 1 < right)
            {
                int mid = (left + right) / 2;
                if (v1[i] > v2[mid])
                    left = mid;
                else
                    right = mid;
            }

            cnt += left;
            if (v1[i] > v2[left])
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}