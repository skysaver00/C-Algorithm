#include <stdio.h>
int arr[1001];
int check[1001];

void dfs(int n, int val) {
    if(check[n] != 0) return;
    check[n] = val;

    dfs(arr[n], val);
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        for(int i = 1; i <= n; i++) scanf("%d", &arr[i]);

        int t = 0;
        for(int i = 1; i <= n; i++) {
            if(check[i] == 0) t++;
            dfs(i, t);
        }

        printf("%d\n", t);
        for(int i = 1; i <= n; i++) check[i] = 0;
    }
    return 0;
}