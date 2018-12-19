#include <iostream>
using namespace std;

int visit1[1001][1001];
int visit2[1001][1001];
int mat[1001][1001];
int dx[] = { 1,0 };
int dy[] = { 0,1 };
int cnt;
int N;

void dfs_milk_found(int x, int y) {
	visit2[x][y] = 1;
	for (int i = 0; i < 2; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (1 <= nx && nx <= N && 1 <= ny && ny <= N && !visit2[nx][ny]) {
			if (mat[x][y] == 0) {
				if (mat[nx][ny] == 1){
					cnt++;
				}
			}
			else if(mat[x][y] == 1) {
				if (mat[nx][ny] == 2) {
					cnt++;
				}
			}
			else if(mat[x][y] == 2) {
				if (mat[nx][ny] == 0) {
					cnt++;
				}
			}
			dfs_milk_found(nx, ny);
		}
	}
}

void dfs_found_zero(int x, int y) {
	visit1[x][y] = 1;
	if (mat[x][y] == 0) {
		dfs_milk_found(x, y);
		return;
	}
	for (int i = 0; i < 2; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (1 <= nx && nx <= N && 1 <= ny && ny <= N && !visit1[nx][ny]) {
			dfs_found_zero(nx, ny);
		}
	}
}

int main() {
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> mat[i][j];
		}
	}

	dfs_found_zero(1,1);
	cout << cnt;
}