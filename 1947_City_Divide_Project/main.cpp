#include <iostream>
#include <algorithm>
using namespace std;

struct edge {
    int weight;
    int from;
    int to;
};

bool operator<(const edge& e1, const edge& e2) {
    return e1.weight < e2.weight;
}

edge edge[1000001];
int parent[1000001];
int cnt, sum;

int find(int x) {
    if (x == parent[x])
        return x;
    else
        return parent[x] = find(parent[x]);
}

void unite(int x, int y) {
    x = parent[x];
    y = parent[y];
    parent[x] = y;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m; cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        edge[i].weight = c;
        edge[i].from = a;
        edge[i].to = b;
    }

    for(int i = 0; i < n; i++) parent[i] = i;
    sort(edge, edge + m);

    int a, b, i = 0;
    while(cnt != n - 2) {
        a = edge[i].from;
        b = edge[i].to;

        if (find(a) != find(b)) {
            unite(a, b);
            cnt++;
            sum += edge[i].weight;
        }
        i++;
    }
    printf("%d", sum);
    return 0;
}