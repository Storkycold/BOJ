#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int N, k;
    vector<int> v;
    cin >> N >> k;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // sort
    sort(v.begin(), v.end());

    // k번째 상
    cout << v[N - k] << endl;

    return 0;
}