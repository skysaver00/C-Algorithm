#include <stdio.h>
int arr[1000001];

int getParent(int x) {
    if(arr[x] == x) return x;
    return arr[x] = getParent(arr[x]);
}

void unionParent(int a, int b) {
    a = getParent(a);
    b = getParent(b);
    if(a < b) arr[b] = a;
    else arr[a] = b;
}

int main() {
    int n, m; scanf("%d %d", &n, &m);

    for(int i = 0; i <= n; i++) arr[i] = i;

    for(int i = 0; i < m; i++) {
        int zec, a, b;
        scanf("%d %d %d", &zec, &a, &b);

        if(zec == 0) {
            unionParent(a, b);
        } else if(zec == 1) {
            int one = getParent(a);
            int two = getParent(b);
            printf("%d %d\n", one, two);
            if(one == two) printf("YES\n");
            else printf("NO\n");
        }
    }

    return 0;
}