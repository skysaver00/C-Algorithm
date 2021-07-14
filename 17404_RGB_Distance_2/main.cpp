#include <stdio.h>
int choice[1001][3];
int val[1001];
int col[1001];

int min(int i, int j) {
    return i < j ? i : j;
}

int main() {
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d %d %d", &choice[i][0], &choice[i][1], &choice[i][2]);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < n; j++) col[j] = val[j] = 0;

        col[0] = i;
        val[0] = choice[0][i];
        for(int j = 1; j < n - 1; j++) {
            if(col[j - 1] == 0) {
                val[j] = min(choice[j][1], choice[j][2]);
            } else if(col[j - 1] == 1) {
                val[j] = min(choice[j][0], choice[j][2]);
            } else if(col[i - 2] == 2) {
                val[j] = min(choice[j][0], choice[j][1]);
            }

            if(val[j] == choice[j][0]) col[j] = 0;
            else if(val[j] == choice[j][1]) col[j] = 1;
            else col[j] = 2;
        }

        int sum = 0;
        for(int j = 0; j < n; j++) sum += val[j];
        printf("%d\n", sum);
    }

    return 0;
}