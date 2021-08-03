#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> vec[10001];

int main() {
    int v, e; cin >> v >> e;
    for(int i = 0; i < e; i++) {
        int a, b, c; cin >> a >> b >> c;
        vec[a].push_back({b, c});
    }
    return 0;
}
