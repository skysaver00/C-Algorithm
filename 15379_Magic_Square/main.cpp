#include <stdio.h>
int arr[101][101];
bool check[10001];

bool vertical(int n) {
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) sum += arr[j][i];
        if(sum != (n * (n * n + 1)) / 2) return false;
    }
    return true;
}

bool horizontal(int n) {
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) sum += arr[i][j];
        if(sum != (n * (n * n + 1)) / 2) return false;
    }
    return true;
}

bool diagonal(int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i][i];
    if(sum != (n * (n * n + 1)) / 2) return false;
    sum = 0;
    for(int i = 0; i < n; i++) sum += arr[n - 1 - i][i];
    if(sum != (n * (n * n + 1)) / 2) return false;
    return true;
}

int main() {
    int t; scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        for(int j = 0; j < t; j++) {
            scanf("%d", &arr[i][j]);
            if(check[arr[i][j]]) {
                printf("FALSE\n");
                return 0;
            }
            check[arr[i][j]] = true;
        }
    }
    bool first = vertical(t);
    bool second = horizontal(t);
    bool third = diagonal(t);

    if(first && second && third) printf("TRUE\n");
    else printf("FALSE\n");

    return 0;
}