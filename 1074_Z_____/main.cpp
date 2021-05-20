#include <stdio.h>
#include <math.h>
int n, r, c;
int total = 0;

int solve(int n, int r, int c) {
    //printf("%d %d %d %d\n", total, n, r, c);
    if(n == 0) return total;
    if(r < pow(2, n - 1) && c < pow(2, n - 1)) {
        total += 0;
        solve(n - 1, r, c);
    } else if(r < pow(2, n - 1) && c >= pow(2, n - 1)) {
        total += int(pow(2, (n - 1) * 2));
        solve(n - 1, r, c - int(pow(2, n - 1)));
    } else if(r >= pow(2, n - 1) && c < pow(2, n - 1)) {
        total += (2 * int(pow(2, (n - 1) * 2)));
        solve(n - 1, r - int(pow(2, n - 1)), c);
    } else if(r >= pow(2, n - 1) && c >= pow(2, n - 1)) {
        total += (3 * int(pow(2, (n - 1) * 2)));
        solve(n - 1, r - int(pow(2, n - 1)), c - int(pow(2, n - 1)));
    }
}

int main() {
    scanf("%d %d %d", &n, &r, &c);

    solve(n, r, c);
    printf("%d\n", total);
}