#include <iostream>
#include <algorithm>
using namespace std;

struct edge {
    int weight;
    int from;
    int to;
};

edge edge[100001];
int parent[100001];
int cnt, sum;

int find(int x) {
    if (x == parent[x])
        return x;
    else
        return parent[x] = find(parent[x]);
}

int main() {
    int n, m; cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        edge[i].weight = c;
        edge[i].from = a;
        edge[i].to = b;
    }

    for(int i = 0; i < n; i++) parent[i] = i;
    sort(edge, edge + m);

    int a, b, c, i = 0;
    while(cnt != n - 2) {
        a = edge[i].from;
        b = edge[i].to;

        int find(int x) {
            if (x == parent[x])
                return x;
            else
                return parent[x] = find(parent[x]);
        }
    }

    return 0;
}