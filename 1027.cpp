#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>
using namespace std;

int N;
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    cin >> N;
    vector<int> height(N);

    for (int i = 0; i < N; i++)
        cin >> height[i];
    // 입력

    vector<int> count(N, 0); // count vector 0으로 초기화하기

    for (int i = 0; i < N; i++)
    {
        double max = -10000000;

        for (int j = i + 1; j < N; j++)
        {
            double a = (double)height[j] - height[i];
            double b = (double)j - i;
            double c = (a * 1.0) / b;

            if (c <= max)
                continue;

            max = c;
            count[i]++;
            count[j]++;
        }
        for (int j = i - 1; j >= 0; j--)
        {
        }
    }
    int ans = *max_element(count.begin(), count.end());
    cout << ans << "\n";

    return 0;
}