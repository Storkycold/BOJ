#include <iostream>
#include <cstdio>
#include <stdio.h>

using namespace std;

int answer = 0;
int map[5][5] = {
    0,
};
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
// 위 오 아 왼
bool isVisited[1000000] = {false};

void input()
{
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> map[i][j];
}

void dfs(int x, int y, int sum, int cnt)
{
    if (cnt == 5)
    {
        if (!isVisited[sum])
        {
            isVisited[sum] = true;
            answer++;
        }
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < 5 && ny < 5)
        {
            dfs(nx, ny, sum * 10 + map[nx][ny], cnt + 1);
        }
    }
    return;
}

void sol()
{
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            dfs(i, j, map[i][j], 0);
        }
    cout << answer << endl;
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    input();
    sol();

    return 0;
}