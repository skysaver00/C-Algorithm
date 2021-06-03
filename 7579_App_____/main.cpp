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

    int min = 10001;
    for(int i = 1; i <= n; i++) {
        for(int j = c[i]; j <= sum; j++) {
            dp[j] = max(dp[j], dp[j - c[i]] + a[i]);
        }
        for(int j = 0; j <= sum; j++) {
            if(dp[i] > m && i < min) min = i;
        }
    }
    printf("%d\n", min);
    return 0;
}