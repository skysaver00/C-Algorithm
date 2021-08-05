#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> buddy[3001];
bool check[3001];
int depth[3001];

void dfs(int now) {
    if(check[now]) {
        return;
    }
    check[now] = true;

    int sz = buddy[now].size();
    for(int i = 0; i < sz; i++) {
        if(check[buddy[now][i]]) continue;
        depth[buddy[now][i]] = depth[now] + 1;

        for(int j = 0; j < 10; j++) cout << depth[j] << " ";
        cout << "\n";
        dfs(buddy[now][i]);
    }
}

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        buddy[a].push_back(b);
        buddy[b].push_back(a);
    }

    //for(int i = 0; i < n; i++) sort(buddy[i].begin(), buddy[i].end());

    for(int i = 0; i <= n; i++) {
        dfs(i);
        for(int j = 0; j <= n; j++) {
            if(depth[j] == 4) {
                cout << "1\n";
                return 0;
            }
        }

        for(int j = 0; j <= n; j++) {
            check[j] = false;
            depth[j] = 0;
        }
    }

    cout << "0\n";
    return 0;
}