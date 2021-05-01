#include <stdio.h>
bool check[100001];
int coin[101];
int price[10001];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int t = 0;
    for(int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);

        if(check[value]) continue;
        else {
            check[value] = true;
            coin[t] = value;
            t++;
        }
    }

    for(int i = 0; i < t; i++) {
        printf("%d\n", coin[i]);
    }

    return 0;
}