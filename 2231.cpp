#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 1; i < N; i++)
    {
        int num = i;
        int temp = i;

        while (temp > 0)
        {
            num += temp % 10;
            temp /= 10;
        }
        if (num == N)
        {
            cout << i << endl;
            N = 0;
            break;
        }
    }
    if (N != 0)
        cout << "0" << endl;

    return 0;
}