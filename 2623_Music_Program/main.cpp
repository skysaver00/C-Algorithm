#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> order[1001];
int parent[1001];
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

            order[from].push_back(to);
            parent[to]++;
            from = to;
        }
    }

    for(int i = 1; i <= n; i++) if(parent[i] == 0) topoQueue.push(i);

    while(!topoQueue.empty()) {
        int val = topoQueue.front();
        topoQueue.pop();

        ans.push(val);
        for(int i = 0; i < order[val].size(); i++) {
            
        }
    }


    return 0;
}