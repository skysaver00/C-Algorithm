#include <stdio.h>
bool check[100001];
int coin[101];
int price[10001];

int min(int i, int j) {
    return (i < j) ?i:j;
}

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

    for(int i = 1; i <= k; i++) price[i] = 99999999;

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= k; j++) {
            if(j == coin[i]) price[j] = 1;
            else if(j < coin[i]) continue;
            else {
                price[j] = min(price[j], price[j - coin[i]] + 1);
            }
        }

        /*for(int j = 1; j <= k; j++) {
            printf("%d\n", price[j]);
        } printf("\n");*/
    }

    if(price[k] == 99999999) printf("-1\n");
    else printf("%d\n", price[k]);

    return 0;
}