#include <stdio.h>
int choice[1001][3];
int val[1001][3];

int min(int i, int j) {
    return i < j ? i : j;
}

int main() {
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d %d %d", &choice[i][0], &choice[i][1], &choice[i][2]);

    int minimum = 99999999;
    for(int v = 0; v < 3; v++) {
        for(int i = 0; i < 3; i++) {
            if(v == i) val[0][i] = choice[0][i];
            else val[0][i] = 99999999;
        }

        for(int i = 1; i < n; i++) {
            val[i][0] = min(val[i - 1][1], val[i - 1][2]) + choice[i][0];
            val[i][1] = min(val[i - 1][0], val[i - 1][2]) + choice[i][1];
            val[i][2] = min(val[i - 1][0], val[i - 1][1]) + choice[i][2];
        }

        for(int i = 0; i < 3; i++) {
            if(i == v) continue;
            else minimum = min(minimum, val[n - 1][i]);
        }
    }

    printf("%d\n", minimum);
    return 0;
}