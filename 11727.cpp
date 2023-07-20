#include <iostream>
using namespace std;

int DP[1001] = {0, 1, 3};
// DP[1] = 1
// DP[2] = 3

int f(int n)
{
    if (DP[n])
        return DP[n];
    else
        return DP[n] = (f(n - 1) % 10007 + 2 * f(n - 2) % 10007) % 10007;
}

int main()
{
    int n;
    cin >> n;

    f(n);

    cout << f(n) << '\n';
    return 0;
}
