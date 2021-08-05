#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> vec[300001];
queue<int> que;
int dist[300001];
bool check[300001];

void bfs(int k, int x) {
    que.push(x);

    while(!que.empty()) {
        int from = que.front();
        que.pop();

        int size = vec[from].size();
        for(int i = 0; i < size; i++) {
            if(check[vec[from][i]]) {
                dist[vec[from][i]] = dist[from] + 1;
                que.push(vec[from][i]);
                check[vec[from][i]] = true;
            }
        }
    }
}


int main() {
    int n, m, k, x; cin >> n >> m >> k >> x;

    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        vec[a].push_back(b);
    }

    bfs(k, x);

    for(int i = 1; i <= n; i++) {
        cout << dist[i] << " ";
    }cout << "\n";

    return 0;
}