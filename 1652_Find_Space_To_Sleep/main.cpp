#include <stdio.h>

bool arr[101][101];

int main() {
    int N;
    scanf("%d", &N);

    int x_[4] = {1, 0};
    int y_[4] = {0, 1};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            char X;
            scanf(" %c", &X);

            if (X == '.') arr[i][j] = true;
        }
    }
    int xmin = -9999;
    int ymin = -9999;

    int cmp1, cmp2, ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cmp1 = j, cmp2 = i;
            for (int l = j; l <= N; l++) {
                if (arr[cmp2][cmp1] == 0) {
                    if (xmin < ans) xmin = ans;
                    break;
                }

                ans++;
                cmp1 += 1, cmp2 += 0;
            }
            ans = 0;
            cmp1 = j, cmp2 = i;
            for (int l = i; l <= N; l++) {
                if (arr[cmp2][cmp1] == 0) {;
                    if (ymin < ans) ymin = ans;
                    break;
                }

                ans++;
                cmp1 += 0, cmp2 += 1;
            }
            ans = 0;
        }
    }

    printf("%d %d\n", xmin, ymin);

    return 0;
}