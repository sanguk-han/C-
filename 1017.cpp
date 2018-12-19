#include <iostream>
#include <string.h>
using namespace std;

int mat[51][51]; //밭의 크기
int visit[51][51]; //밭의 각각의 위치마다 방문여부
int T, M, N, K; //T는 반복횟수, M은 가로길이, N은 세로길이, K는 배추의 갯수
int dx[] = { 1,-1,0,0 }; //좌우
int dy[] = { 0,0,-1,1 }; //상하
int cnt; //배추벌레 마릿수

void dfs(int x, int y) {
	visit[x][y] = 1; //(x,y)방문처리
	for (int i = 0; i < 4; i++) { //4방향을 for문으로 처리
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