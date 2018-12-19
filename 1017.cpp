#include <iostream>
#include <string.h>
using namespace std;

int mat[51][51]; //���� ũ��
int visit[51][51]; //���� ������ ��ġ���� �湮����
int T, M, N, K; //T�� �ݺ�Ƚ��, M�� ���α���, N�� ���α���, K�� ������ ����
int dx[] = { 1,-1,0,0 }; //�¿�
int dy[] = { 0,0,-1,1 }; //����
int cnt; //���߹��� ������

void dfs(int x, int y) {
	visit[x][y] = 1; //(x,y)�湮ó��
	for (int i = 0; i < 4; i++) { //4������ for������ ó��
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (0 <= nx && nx < N && 0 <= ny && ny < M && !visit[nx][ny] && mat[nx][ny] == 1) {
			visit[nx][ny] = 1;
			dfs(nx, ny);
		}
	}
}

int main() {
	cin >> T;
	while (T--) {
		cin >> M >> N >> K;
		while (K--) {
			int a, b;
			cin >> a >> b;
			mat[b][a] = 1;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (!visit[i][j] && mat[i][j] == 1) {
					dfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
		memset(mat, 0, sizeof(mat));
		memset(visit, 0, sizeof(visit));
		cnt = 0;
	}
}