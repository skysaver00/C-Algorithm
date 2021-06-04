#include <iostream>
#include <set>
using namespace std;

set<int> s;

int main() {
    int t; cin >> t;

    while(t--) {
        int k; cin >> k;
        for(int i = 0; i < k; i++) {
            char c; int n;
            cin >> c >> n;

            s.insert(n);
            for(auto i : s) cout << i << " ";
            cout << "\n";
        }
    }

    return 0;
}