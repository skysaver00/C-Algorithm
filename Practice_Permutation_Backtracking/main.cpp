#include <iostream>
using namespace std;
int arr[50];
int res[50];

void dfs(int cnt, int max) {
    if(cnt == max) {
        for(int i = 0; i < max; i++) {
            cout << res[i] << " ";
        }cout << "\n";

        return;
    }

    
}

int main() {
    int n, m; cin >> n >> m;

    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    dfs(0, m) {

    }
}
