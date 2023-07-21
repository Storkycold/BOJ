#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>
using namespace std;

int R, C, K;
int ans = 0;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0}; // 상하우좌
char map[6][6];
int check[6][6];

void dfs(int x, int y, int distance)
{
    if (distance == K && x == 0 && y == C - 1)
    {
        ans++;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (map[nx][ny] == 'T')
            continue; // 안되는 조건 추가
        if (nx < 0 || nx >= R || ny < 0 || ny >= C)
            continue;
        //
        if (check[nx][ny])
            continue; // 이미 방문한 경우
        check[nx][ny] = 1;
        dfs(nx, ny, distance + 1);
        check[nx][ny] = 0;
    }
}
int main()
{
    cin >> R >> C >> K;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> map[i][j];
        }
    }
    check[R - 1][0] = 1;
    dfs(R - 1, 0, 1);
    cout << ans << "\n";
    return 0;
}
