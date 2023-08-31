#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<utility>
using namespace std;
typedef pair<int, int> p;

int N;
int M;
int map[101][101];
bool visited[101][101];
int result[101][101];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0, 1, 0, -1 };


//(x, y)를 방문하는 함수
void visit(int x, int y) {
	visited[y][x] = true;
}

// (x,y)를 시작으로 bfs
void bfs(int x, int y) {
	//큐에 먼저 시작점을 넣고, (x,y)를 방문처리
	queue<p> q;
	q.push(p(x, y));
	visit(x, y);

	//큐에 뭐가 있을때까지(갈수 있는 곳이 있을때까지)
	while (!q.empty()) {

		//큐에서 처음꺼 빼고 좌표 저장
		p cur = q.front();
		q.pop();

		int copyx = cur.first;
		int copyy = cur.second;

		//(copyx copyy)에 인접한 좌표 탐색
		for (int k = 0; k < 4; k++) {
			int x_ = copyx + dx[k];
			int y_ = copyy + dy[k];

			//인덱스 넘어가는 기저사례
			if (!(x_ > 0 && x_ < M + 1 && y_ > 0 && y_ < N + 1)) continue;

			//지금까지 방문 안했고 갈수 있는 길일경우 큐에 넣고 방문처리
			if (!visited[y_][x_] && map[y_][x_]) {
				q.push(p(x_, y_));
				visit(x_, y_);

				result[y_][x_] = result[copyy][copyx] + 1;
			}
		}
	}
}

int main() {
	cin >> N >> M;


	string s;
	for (int a = 1; a < N + 1; a++) {
		cin >> s;
		for (int b = 0; b < M; b++) {
			map[a][b + 1] = s[b] - '0';
		}
	}
	bfs(1, 1);
	cout << result[N][M] + 1;
}