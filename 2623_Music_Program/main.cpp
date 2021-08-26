#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> order[1001];

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int artist; cin >> artist;
        for(int j = 0; j < artist; j++) {
            int val; cin >> val;
            int from;
            if(j == 0) {
                from = val;
                continue;
            }

            order[from].push_back(val);
        }
    }

    return 0;
}