#include <stdio.h>

int arr[100001];
int minTree[400001];
int maxTree[400001];

int min(int i, int j) {
    return i < j ? i : j;
}

int max(int i, int j) {
    return i > j ? i : j;
}

int init(int start, int end, int node, int flag) {
    if(flag == 1) {
        if(start == end) return minTree[node] = arr[start];
        int mid = (start + end) / 2;
        return minTree[node] = min(init(start, mid, node * 2, 1), init(mid + 1, end, node * 2 + 1, 1));
    } else {
        if(start == end) return maxTree[node] = arr[start];
        int mid = (start + end) / 2;
        return maxTree[node] = max(init(start, mid, node * 2, 2), init(mid + 1, end, node * 2 + 1, 2));
    }
}

int ans(int start, int end, int node, int left, int right) {

}

int main() {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    init(0, n - 1, 1, 1);
    init(0, n - 1, 1, 2);

    

    return 0;
}