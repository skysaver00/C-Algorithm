#include <stdio.h>
int coin[101];
int val[10001];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++) scanf("%d", &coin[i]);

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= k; j++) {
            if(coin[i] == j) val[j] += 1;
            else if(coin[i] > j) continue;
            else val[j] += val[j - coin[i]];
        }
    }

    printf("%d\n", val[k]);

    return 0;
}