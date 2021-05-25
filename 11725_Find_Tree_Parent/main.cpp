#include <stdio.h>
int n;
int arr[100001][3];
int check[100001];
int root[100001];

void dfs(int i) {
    if(check[i] == 1) return;
    check[i] = 1;

    for(int j = 0; j < 3; j++) {
        if(arr[i][j] != 0 && check[arr[i][j]] == 0) {
            root[arr[i][j]] = i;
            dfs(arr[i][j]);
        }
        if(arr[i][j] == 0) return;
    }
}

int main() {
    scanf("%d", &n);

    for(int i = 0; i < n - 1; i++) {
        int one, two;
        scanf("%d %d", &one, &two);

        for(int j = 0; j < 3; j++) {
            if(arr[one][j] == 0) {
                arr[one][j] = two;
                break;
            }
        }

        for(int j = 0; j < 3; j++) {
            if(arr[two][j] == 0) {
                arr[two][j] = one;
                break;
            }
        }
    }
    dfs(1);
    for(int i = 2; i <= n; i++) printf("%d\n", root[i]);

    return 0;
}