#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001][3];

int main()
{
    int N;
    int cost[3];
    int MIN;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> cost[0] >> cost[1] >> cost[2];
        arr[i][0] = min(arr[i - 1][1], arr[i - 1][2]) + cost[0];
        arr[i][1] = min(arr[i - 1][2], arr[i - 1][0]) + cost[1];
        arr[i][2] = min(arr[i - 1][0], arr[i - 1][1]) + cost[2];
    }

    MIN = min(arr[N][2], min(arr[N][0], arr[N][1]));

    cout << MIN << endl;
    return 0;
}