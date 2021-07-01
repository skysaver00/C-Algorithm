#include <stdio.h>

long long num[1000001];
long long tree[4000001];

long long init(int start, int end, int node) {
    if(start == end) return tree[node] = num[start];
    int mid = (start + end) / 2;
    return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

long long sum(int start, int end, int node, int left, int right) {
    if(left > end || right < start) return 0;
    if(left <= start && end <= right) return tree[node];
    int mid = (start + end) / 2;
    return sum(start, mid, node * 2, left, right) + sum(mid + 1, end, node * 2 + 1, left, right);
}

int main() {
    int n, m, k; scanf("%d %d %d", &n, &m, &k);
    for(int i = 0; i < n; i++) scanf("%lld", &num[i]);

    init(0, n - 1, 1);

    int a, b, c;
    for(int i = 0; i < m + k; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if(a == 1) {

        } else if(a == 2) {
            long long val = sum(0, n - 1, 1, b, c);
            printf("%lld\n", val);
        }
    }

    for(int i = 0; i < 4 * n; i++) printf("%lld ", tree[i]);

    return 0;
}