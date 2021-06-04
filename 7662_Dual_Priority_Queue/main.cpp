#include <iostream>
#include <set>
using namespace std;

multiset<int> s;
multiset<int> ne;

int main() {
    /*ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);*/
    int t; cin >> t;

    while(t--) {
        int k; cin >> k;
        for(int i = 0; i < k; i++) {
            char c; int n;
            cin >> c >> n;

            if(c == 'I') s.insert(n);

            else if(c == 'D') {
                if(s.size() == 0) {
                    s = ne;
                    continue;
                }
                if(n == -1) {
                    auto iter = s.begin();
                    s.erase(iter);
                }
                else if(n == 1) {
                    auto iter = s.end();
                    iter--;
                    s.erase(iter);
                }
            }
        }
        if(s.size() == 0) cout << "EMPTY\n";
        else {
            cout << *s.rbegin() << " " << *s.begin() << "\n";
        }
        s = ne;
    }
    return 0;
}