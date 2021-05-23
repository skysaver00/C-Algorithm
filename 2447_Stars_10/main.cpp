#include <stdio.h>
#include <math.h>

char arr[2200][2200];

void print(int n, int x, int y, int t) {
    if(t == 5) {
        int k = pow(3, n);
        for(int i = 0; i < k; i++) {
            for(int j = 0; j < k; j++) {
                printf(" ");
            }printf("\n");
        }
    }
    if(n == 1) {
        for(int i = 0; i < 3; i++) {

        }
    }
    else {
        for(int i = 0; i < 3; i++) {
            for(int j = 1; j <= 3; j++) {
                printf("%d %d\n", n, t);
                print(n - 1, (i * 3) + j);
            }
        }
        return;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    print(n, 0, 0, 1);
}