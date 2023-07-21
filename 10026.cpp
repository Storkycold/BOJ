#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int n = 0;
int cnt = 0;
char photo[100][100];
bool isVisited[100][100] = {false};

int dx[4] = {0, 0, -1, 1}; // 격자에서 방향 상하좌우 설정해주는 역할
int dy[4] = {-1, 1, 0, 0};

void dfs(int x, int y)
{
    isVisited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
            continue;
        if (!isVisited[nx][ny] && photo[x][y] == photo[nx][ny])
            dfs(nx, ny);
    }
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> photo[i];

    // 적록색맹 X
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (!isVisited[i][j])
            {
                dfs(i, j);
                cnt++;
            }
        }
    cout << cnt << " ";

    cnt = 0;
    // 적록색맹
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (photo[i][j] == 'G')
                photo[i][j] = 'R';
            else
                photo[i][j] = photo[i][j];
        }
    }

    memset(isVisited, false, sizeof(isVisited));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (!isVisited[i][j])
            {
                dfs(i, j);
                cnt++;
            }
        }
    cout << cnt << endl;

    return 0;
}