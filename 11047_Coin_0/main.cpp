#include <cstdio>
int coin[11];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++) scanf("%d", &coin[i]);

    int num = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(k < coin[i]) continue;
        else {
            int t = k / coin[i];
            num += t;
            k -= coin[i] * t;
        }
    }

    printf("%d\n", num);

    return 0;
}