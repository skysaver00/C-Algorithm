#include <stdio.h>
char store[1001];
int dp[1001][3];

int Max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        scanf(" %c", &store[i]);
    }

    int check = 0;
    int cnt = 0;
    for(int i = 0; i < t; i++) {
        if(store[i] == '0' && check == 0) {
            check = 1;
            cnt++;
        }
        if(store[i] == '1' && check == 1) {
            check = 2;
            cnt++;
        }
        if(store[i] == '2' && check == 2) {
            check = 0;
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}