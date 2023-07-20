#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    string s;
    // vector v;

    cin >> s;

    int len = s.length();
    int cnt0 = 0;
    int cnt1 = 0;
    int result;

    // for (int i = 0; i < len - 1; i++)
    //     cout << s[i];

    // 처음에 연속된 숫자 계산하기
    if (s[0] == '1')
        cnt0++;
    else
        cnt1++;

    for (int i = 0; i < len - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            if (s[i + 1] == '1')
                cnt0++;
            else
                cnt1++;
        }
    }

    // min 계산하기

    if (cnt0 < cnt1)
        result = cnt0;
    else if (cnt0 > cnt1)
        result = cnt1;
    else
        result = cnt0;

    cout << result << endl;

    return 0;
}