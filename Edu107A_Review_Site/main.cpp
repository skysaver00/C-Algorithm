#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int up, down, fun;
        up = down = fun = 0;
        for(int i = 0; i < n; i++) {
            int r;
            cin >> r;

            if(r == 1) up++;
            else if(r == 2) down++;
            else {
                up++;
            }
        }
        cout << up << endl;
    }

    return 0;
}