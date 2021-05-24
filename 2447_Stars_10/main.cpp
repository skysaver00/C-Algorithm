#include <stdio.h>

char arr[2200][2200];

void print(int n, int x, int y, int t) {
    int flag = 0;

    if(t == 5) {
        int k = n;
        for(int i = x; i < x + k; i++) {
            for(int j = y; j < y + k; j++) {
                arr[i][j] = ' ';
            }
        }
        flag = 1;
    }
    else if(n == 3) {
        for(int i = x; i < x + 3; i++) {
            for(int j = y; j < y + 3; j++) {
                if(i == x + 1 && j == y + 1) {
                    arr[i][j] = ' ';
                    continue;
                }
                arr[i][j] = '*';
            }
        }
        flag = 1;
    }

    if(flag == 0) {
        for(int i = 0; i < 3; i++) {
            for(int j = 1; j <= 3; j++) {
                print(n / 3, x + i * (n / 3), y + (j - 1) * (n / 3), (i * 3) + j);
            }
        }
        return;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if(n == 1) {
        printf("*");
        return 0;
    }

    print(n, 0, 0, 0);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%c", arr[i][j]);
        }printf("\n");
    }

    return 0;
}