#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> graph[1001];
bool check[1001][1001];

void startDFS(int v) {
}

void startBFS(int v) {

}

int main() {
    int n, m, v; cin >> n >> m >> v;

    for(int i = 0; i < m; i++) {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    for(int i = 0; i < n; i++)
        sort(graph[i].begin(), graph[i].end());

    startDFS(v);
    startBFS(v);

    return 0;
}