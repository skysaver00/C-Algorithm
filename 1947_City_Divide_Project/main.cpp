#include <iostream>
#include <algorithm>
using namespace std;

struct edge {
    int from;
    int to;
    int weight;
};
edge edge[100001];

int main() {
    int n, m; cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        edge[i].from = a;
        edge[i].to = b;
        edge[i].weight = c;
    }

    return 0;
}