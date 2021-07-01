#include <stdio.h>

long long num[1000001];
long long tree[4000001];

long long init(int start, int end, int node) {
    if(start == end) return tree[node] = num[start];
    int mid = (start + end) / 2;
    return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

int main() {
    int n, m, k; scanf("%d %d %d", &n, &m, &k);
    for(int i = 0; i < n; i++) scanf("%lld", &num[i]);

    init(0, n - 1, 1);

    for(int i = 0; i < 4 * n; i++) printf("%lld ", tree[i]);

    return 0;
}