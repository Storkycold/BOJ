#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, x;
    int count[10001] = {
        0,
    };

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> x;
        count[x] = count[x] + 1;
    }

    for (int i = 1; i < 10001; i++)
        for (int j = 1; j <= count[i]; j++) // count된 횟수만큼 출력
        {
            cout << i << "\n";
        }

    return 0;
}