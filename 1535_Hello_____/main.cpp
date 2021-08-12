#include <iostream>
#include <algorithm>
using namespace std;
int N;
int dp[22][103]; //i번째 사람의 j 체력일때의 행복 최댓값
int happy[22];
int health[22];

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> health[i];
    for (int i = 1; i <= N; i++) cin >> happy[i];
    int maxnum = -1e8;
    for (int i = 1; i <= N; i++) {
        for (int j = 100; j >= 0; j--) {
            if (j - health[i] >= 1) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - health[i]] + happy[i]);
            else dp[i][j] = dp[i - 1][j];
            maxnum = max(maxnum, dp[i][j]);
        }
    }
    cout << maxnum << "\n";
}
[출처] [백준] 1535번 안녕 c++|작성자 류리