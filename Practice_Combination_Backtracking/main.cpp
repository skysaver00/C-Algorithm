#include <iostream>
using namespace std;
int arr[50];
int res[50];
bool visit[50];

void dfs(int cnt, int max, int size, int now);

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) arr[i] = i + 1;

    dfs(0, m, n, 1);
    return 0;
}
