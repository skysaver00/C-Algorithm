#include <stdio.h>
int choice[1001][3];
int val[1001];
int col[1001];

int main() {
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d %d %d", &choice[i][0], &choice[i][1], &choice[i][2]);

    

    return 0;
}