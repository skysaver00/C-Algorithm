#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int INF = 2147483647;

vector<pair<int, int>> vec[801];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
int val[801];
bool check[801];

void path(int k) {
    val[k] = 0;
    check[k] = true;
    pq.push({0, k});

    while(!pq.empty()) {
        int curr = pq.top().second;
        int dist = pq.top().first;
        check[curr] = true;
        pq.pop();

        if(val[curr] < dist) continue;

        int sz = vec[curr].size();
        for(int i = 0; i < sz; i++) {
            int next = vec[curr][i].second;
            int nextDist = vec[curr][i].first + dist;

            if(nextDist < val[next] && !check[next]) {
                val[next] = nextDist;
                pq.push({nextDist, next});
            }
        }
    }
}

int main() {
    int n, e; cin >> n >> e;
    for(int i = 0; i < e; i++) {
        int a, b, c; cin >> a >> b >> c;
        vec[a].push_back({c, b});
        vec[b].push_back({c, a});
    }

    for(int i = 1; i <= n; i++) val[i] = INF;

    for(int i = 1; i <= n; i++)
        sort(vec[i].begin(), vec[i].end());

    int v1, v2; cin >> v1 >> v2;
    int ans1, ans2;
    ans1 = ans2 = 0;

    path(1);
    ans1 += val[v1];
    ans2 += val[v2];

    for(int i = 1; i <= n; i++) {
        val[i] = INF;
        check[i] = false;
    }

    path(v1);
    ans1 += val[v2];
    ans2 += val[v2];

    ans2 += val[n];
    for(int i = 1; i <= n; i++) {
        val[i] = INF;
        check[i] = false;
    }
    path(v2);
    ans1 += val[n];

    if()



    return 0;
}