#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        long long n, m, x;
        scanf("%lld %lld %lld", &n, &m, &x);

        long long left_right = (x - 1) / n;
        long long up_down = (x - 1) % n;

        long long ans = (up_down * m) + (left_right + 1);
        printf("%lld\n", ans);
    }
}