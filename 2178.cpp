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


//(x, y)�� �湮�ϴ� �Լ�
void visit(int x, int y) {
	visited[y][x] = true;
}

// (x,y)�� �������� bfs
void bfs(int x, int y) {
	//ť�� ���� �������� �ְ�, (x,y)�� �湮ó��
	queue<p> q;
	q.push(p(x, y));
	visit(x, y);

	//ť�� ���� ����������(���� �ִ� ���� ����������)
	while (!q.empty()) {

		//ť���� ó���� ���� ��ǥ ����
		p cur = q.front();
		q.pop();

		int copyx = cur.first;
		int copyy = cur.second;

		//(copyx copyy)�� ������ ��ǥ Ž��
		for (int k = 0; k < 4; k++) {
			int x_ = copyx + dx[k];
			int y_ = copyy + dy[k];

			//�ε��� �Ѿ�� �������
			if (!(x_ > 0 && x_ < M + 1 && y_ > 0 && y_ < N + 1)) continue;

			//���ݱ��� �湮 ���߰� ���� �ִ� ���ϰ�� ť�� �ְ� �湮ó��
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