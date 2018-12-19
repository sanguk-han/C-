#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
	double dp[100001];
	double N, B, M;
	while (scanf("%lf", &N) != EOF) {
		int cnt = 0;
		cin >> B >> M;
		dp[cnt] = N;
		while (1) {
			if (dp[cnt] >= M) {
				cout << cnt << endl;
				for (int i = 0; i < cnt; i++) {
					dp[i] = 0;
				}
				break;
			}
			dp[cnt+1] = dp[cnt]+ dp[cnt] * double(B / 100.0);
			cnt++;
		}
	}
}