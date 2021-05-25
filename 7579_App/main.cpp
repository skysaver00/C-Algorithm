#include <cstdio>

int mem[101];
int off[101];

int dp[10001];

int max(int i, int j) {
    return i > j ? i : j;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        scanf("%d", &mem[i]);
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &off[i]);
        sum += off[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = sum; j >= off[i]; j--) {
            dp[j] = max(dp[j], dp[j - off[i]] + mem[i]);
        }

        int flag = 0;
        for(int i = 0; i <= sum; i++) {
            if(dp[i] >= m) {
                printf("%d\n", i);
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }

    return 0;
}