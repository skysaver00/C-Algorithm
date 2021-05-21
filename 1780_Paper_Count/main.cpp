#include <stdio.h>
int arr[2190][2190];
int one, zero, minus;

void solve(int y, int x, int n) {
    int check = arr[y][x];
    int flag = 0;
    for(int i = y; i < n; i++) {
        for(int j = x; j < n; j++) {
            if(check == 0 && (arr[i][j] == 1 || arr[i][j] == -1)) {
                check = 2;
                flag = 1;
                break;
            } else if(check == 1 && (arr[i][j] == 0 || arr[i][j] == -1)) {
                check = 2;
                flag = 1;
                break;
            } else if(check == -1 && (arr[i][j] == 0 || arr[i][j] == 1)) {
                check = 2;
                flag = 1;
                break;
            }
        }
        if(flag == 1) {
            break;
        }
    }

    if(check == 2) {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                solve(y + (i * (n /3)), x + (i * (n / 3)), n / 3);
            }
        }
    }

    if(check == 1) one++;
    else if(check == 0) zero++;
    else if(check == -1) minus++;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    solve(0, 0, n);
    

    return 0;
}