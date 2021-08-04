#include <iostream>
#include <vector>
using namespace std;

vector<int> vec[300001];
int arr[300001];

void bfs(int x) {

}


int main() {
    int n, m, k, x; cin >> n >> m >> k >> x;

    for(int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        vec[a].push_back(b);
    }

    

    return 0;
}