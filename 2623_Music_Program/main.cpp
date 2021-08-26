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
        for(int j = 1; j <= n; j++) {
            cout << order[i][j] << " ";
        }cout << "\n";
    }

    for(int i = 1; i <= n; i++) {
        if(parent[i] == 0) {
            topoQueue.push(i);
            visit[i] = true;
        } cout << parent[i] << " ";
    } cout <<"\n";

    while(!topoQueue.empty()) {
        int val = topoQueue.front();
        topoQueue.pop();

        ans.push(val);

        for(int i = 1; i <= n; i++) {
            if(order[val][i]) {
                parent[order[val][i]]--;
                order[val][i] = false;
            }
        }

        for(int i = 1; i <= n; i++) {
            cout << parent[i] << " ";
            if(visit[i]) continue;
            if(parent[i] == 0) {
                topoQueue.push(i);
                visit[i] = true;
            }
        } cout <<"\n";
    }

    while(!ans.empty()) {
        cout << ans.front() << "\n";
        ans.pop();
    }

    return 0;
}