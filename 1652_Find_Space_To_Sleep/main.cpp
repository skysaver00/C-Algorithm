#include <stdio.h>
bool arr[101][101];

int main() {
    int N;
    scanf("%d", &N);

    int x_[4] = {1, 0, -1, 0};
    int y_[4] = {0, 1, 0, -1};

    for(int i = 0 ; i < N; i++) {
        for(int j = 0; j < N; j++) {
            char X;
            scanf(" %c", &X);

            if(X == 'X') arr[i][j] = true;
        }
    }
    int xmin = -9999;
    int ymin = -9999;

    int cmp1, cmp2, ans;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            for(int k = 0; k < 4; k++) {
                cmp1 = j; cmp2 = i;
                for(int l = i; l < N - i; l++) {
                    if(arr[cmp2][cmp1] == true) {
                        ans = cmp1 - j;
                        if(xmin < ans) xmin = ans;
                        break;
                    }
                    cmp1 += x_[0], cmp2 += y_[0];
                }

                cmp1 = j; cmp2 = i;
                for(int l = j; l < N - j; l++) {
                    if(arr[cmp2][cmp1] == true) {
                        ans = cmp2 - i;
                        if(ymin < ans) ymin = ans;
                        break;
                    }
                    cmp1 += x_[1], cmp2 += y_[1];
                }

                cmp1 = j; cmp2 = i;
                for(int l = i; l > 0; l--) {
                    if(arr[cmp2][cmp1] == true) {
                        ans = cmp1 - j;
                        if(xmin < ans) xmin = ans;
                        break;
                    }
                    cmp1 += x_[0], cmp2 += y_[0];
                }

                cmp1 = j; cmp2 = i;
                for(int l = j; l > 0; l--) {
                    if(arr[cmp2][cmp1] == true) {
                        ans = cmp2 - i;
                        if(ymin < ans) ymin = ans;
                        break;
                    }
                    cmp1 += x_[1], cmp2 += y_[1];
                }
            }
        }
    }

    printf("%d %d\n", xmin, ymin);

    return 0;
}