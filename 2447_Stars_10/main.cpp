#include <stdio.h>
#include <math.h>

char arr[2200][2200];

void print(int n, int x, int y, int t) {
    if(t == 5) {
        int k = n;
        for(int i = x; i < x + k; i++) {
            for(int j = y; j < y + k; j++) {
                arr[i][j] = ' ';
            }
        }
    }
    if(n == 3) {
        for(int i = x; i < x + 3; i++) {
            for(int j = y; j < y + 3; j++) {
                if(i == x + 1 && j == y + 1) {
                    arr[i][j] = ' ';
                    continue;
                }
                arr[i][j] = '*';
            }
        }
    }
    else {
        for(int i = 0; i < 3; i++) {
            for(int j = 1; j <= 3; j++) {
                printf("%d %d %d %d\n", n, x + i * (n / 3), (j - 1) * (n / 3), t);
                print(n / 3, x + i * (n / 3), (j - 1) * (n / 3), (i * 3) + j);
            }
        }
        return;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    print(n, 0, 0, 0);
}