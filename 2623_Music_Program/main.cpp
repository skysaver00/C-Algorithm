#include <iostream>
#include <queue>
#include <vector>
using namespace std;
//vector<int> order[1001];
bool order[1001][1001];
int parent[1001];
bool visit[1001];
queue<int> topoQueue;
queue<int> ans;

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int artist; cin >> artist;
        for(int j = 0; j < artist; j++) {
            int to; cin >> to;
            int from;
            if(j == 0) {
                from = to;
                continue;
            }

            if(!order[from][to]) parent[to]++;
            order[from][to] = true;
            from = to;
        }
    }

    for(int i = 1; i <= n; i++) {
        if(parent[i] == 0) {
            topoQueue.push(i);
            visit[i] = true;
        }
    }

    while(!topoQueue.empty()) {
        int val = topoQueue.front();
        topoQueue.pop();

        ans.push(val);

        for(int i = 1; i <= n; i++) {
            if(order[val][i]) {
                parent[i]--;
                order[val][i] = false;
            }
        }

        for(int i = 1; i <= n; i++) {
            if(visit[i]) continue;
            if(parent[i] == 0) {
                topoQueue.push(i);
                visit[i] = true;
            }
        }
    }

    if(ans.size() != n) {
        cout << "0\n";
        return 0;
    }

    while(!ans.empty()) {
        cout << ans.front() << "\n";
        ans.pop();
    }
    return 0;
}