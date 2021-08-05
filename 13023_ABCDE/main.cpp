#include <iostream>
#include <vector>
using namespace std;

int depth;
vector<int> buddy[2001];
bool check[2001];

void dfs(int now) {
    if(check[now]) {
        depth--;
        return;
    }

    int sz = buddy[now].size();
    for(int i = 0; i < sz; i++) {
        
    }
}

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        buddy[a].push_back(b);
        buddy[b].push_back(a);
    }

    for(int i = 1; i <= n; i++) {
        dfs(i);
        for(int j = 1; j <= n; j++) check[j] = false;
    }

    return 0;
}