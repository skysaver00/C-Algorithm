#include <stdio.h>
int dp[101][100001];
int val[1001];
int wei[1001];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i = 1; i<= n; i++) scanf("%d %d", &wei[i], &val[i]);
    

    return 0;
}