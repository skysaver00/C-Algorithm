#include <stdio.h>

int arr[2190][2190];
int one, zero, minus;

void solve(int y, int x, int n) {
    int check = arr[y][x];
    for (int i = y; i < y + n; i++) {
        for (int j = x; j < x + n; j++) {
            if (check == 0 && (arr[i][j] == 1 || arr[i][j] == -1)) check = 2;
            else if (check == 1 && (arr[i][j] == 0 || arr[i][j] == -1)) check = 2;
            else if (check == -1 && (arr[i][j] == 0 || arr[i][j] == 1)) check = 2;
        }
        if (check == 2) {
            for (int a = 0; a < 3; a++) {
                for (int b = 0; b < 3; b++) {
                    solve(y + (a * (n / 3)), x + (b * (n / 3)), n / 3);
                }
            }
            return;
        }
    }


    printf("%d %d %d\n", y, x, n);

    if (check == 1) one++;
    else if (check == 0) zero++;
    else if (check == -1) minus++;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    solve(0, 0, n);
    printf("%d %d %d\n", one, zero, minus);

    return 0;
}