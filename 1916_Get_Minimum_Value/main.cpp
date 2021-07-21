#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int INF = 2147483647;

vector<pair<int, int>> vec[1001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> pq;
int val[1001];

int main() {
    int n; cin >> n;
    int m; cin >> m;

    for(int i = 1; i <= n; i++) val[i] = INF;

    for(int i = 0; i < m; i++) {
        int from, to, len; cin >> from >> to >> len;
        vec[from].push_back({to, len});
    }

    return 0;
}