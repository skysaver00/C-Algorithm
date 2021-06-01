#include <iostream>
using namespace std;
int a[101];
int c[101];
int dp[10001];
int n, m;

int max(int i, int j) {
    return (i > j) ? i : j;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    int sum = 0;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) {
        cin >> c[i];
        sum += c[i];
    }

    for(int i = 1; i <= n; i++) {
        for(int j = sum; j >= c[i]; j--) {
            dp[j] = max(dp[j], dp[j])
        }
    }

    return 0;
}