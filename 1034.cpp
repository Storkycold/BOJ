#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int width, height;
    int ans = -1;
    string arr[50];

    cin >> height >> width;

    for (int i = 0; i < height; i++)
        cin >> arr[i];

    int k;
    cin >> k;

    for (int i = 0; i < height; i++)
    {
        int cnt = 0;

        for (int j = 0; j < width; j++)
        {
            if (arr[i][j] == '0')
                cnt++;
        }
        int sum = 0;

        if (cnt <= k && cnt % 2 == k % 2)
        {
            for (int y = 0; y < height; y++)
            {
                if (arr[i] == arr[y])
                {
                    sum++;
                }
            }
        }
        ans = max(sum, ans);
    }
    cout << ans << "\n";
    return 0;
}