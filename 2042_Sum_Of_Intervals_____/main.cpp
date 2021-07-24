#include <iostream>
using namespace std;

long long num[1000001];
long long tree[4000001];

long long init(int start, int end, int node) {
    if(start == end) return tree[node] = num[start];
    int mid = (start + end) / 2;
    return tree[node] =  (init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1));
}

long long sum(int start, int end, int node, int left, int right) {

}

long long update(int start, int end, int node, int value) {
    
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k; cin >> n >> m >> k;
    for(int i = 0; i < n; i++) cin >> num[i];

    init(0, n - 1, 1);

    return 0;
}