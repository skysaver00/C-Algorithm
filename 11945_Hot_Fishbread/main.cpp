#include <stdio.h>
char arr[11][11];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        scanf("%d", arr[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = m - 1; j >= 0; j--) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}