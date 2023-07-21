#include <iostream>
#include <string>
#include <cstdio>
#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;

int ans = -1;
int n, m;
int chart[10][10];

bool check(int num)
{
    int root = (int)sqrt(num);
    return (root * root == num);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &chart[i][j]);
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int x = -n; x < n; x++)
            {
                for (int y = -m; y < m; y++)
                {
                    if (!x && !y)
                        continue;
                    int r = i, c = j, num = 0;

                    while (0 <= r && r < n && 0 <= c && c < m)
                    {
                        num *= 10;
                        num += chart[r][c];
                        r += x, c += y;
                        if (check(num))
                            ans = max(ans, num);
                    }
                }
            }
        }
    }
    cout << ans << "\n";
    return 0;
}