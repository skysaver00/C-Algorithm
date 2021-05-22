#include <cstdio>

int arr[65][65];

void solve(int y, int x, int n) {
    int check = arr[y][x];
    for(int i = y; i < y + n; i++) {
        for(int j = x; j < x + n; j++) {
            if(check == 0 && arr[y][x] == 1) check = 2;
            else if(check == 1 && arr[y][x] == 0) check = 2;
        }

        if(check == 2) {
            solve(y, x, n / 2);
            solve(y, x + (n / 2), n / 2);
            solve(y + (n / 2), x, n / 2);
            solve(y + (n / 2), x + (n / 2), n / 2);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    solve(0, 0, n);

    return 0;
}