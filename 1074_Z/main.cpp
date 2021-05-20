#include <stdio.h>
#include <math.h>
int val = 0;

int rec (int n, int r, int c) {
    if(n == 0) return val;

    if(r < pow(2, n - 1)) {
        if(c < pow(2, n - 1)) {
            val += 0 * pow(2, 2 * (n - 1));

            return rec(n - 1, r, c);
        }
        else if(c >= pow(2, n - 1)) {
            val += 1 * pow(2, 2 * (n - 1));

            return rec(n - 1, r, c - pow(2, n - 1));
        }
    }
    else if(r >= pow(2, n - 1)) {
        if(c < pow(2, n - 1)) {
            val += 2 * pow(2, 2 * (n - 1));

            return rec(n - 1, r - pow(2, n - 1), c);
        }
        else if(c >= pow(2, n - 1)) {
            val += 3 * pow(2, 2 * (n - 1));

            return rec(n - 1, r - pow(2, n - 1), c - pow(2, n - 1));
        }
    }
}

int main() {
    int N, r, c;
    scanf("%d %d %d", &N, &r, &c);

    int t = rec(N, r, c);
    printf("%d\n", t);

    return 0;
}