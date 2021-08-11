#include <iostream>
using namespace std;
int num[100001];
int ans[100001];

int main() {
    int n; cin >> n;

    int node = 0;
    bool ck = true;
    for(int i = 0; i < n; i++) {
        int val; cin >> val;
        if(val >= 0 && ck == true) {
            num[node] += val;
        } else if(val >= 0 && ck == false) {
            node++;
            ck = true;
            num[node] += val;
        } else if(val <= 0 && ck == false) {
            num[node] += val;
        } else {
            if(i == 0) num[node] += val;
            node++;
            ck = false;
            num[node] += val;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }cout << "\n";

    ans[0] = num[0];
    for(int i = 1; i < n; i++) {
        if(ans[i - 1] + num[i] > num[i]) ans[i] = ans[i - 1] + num[i];
        else ans[i] = num[i];
    }

    for(int i = 0; i < n; i++) cout << ans[i] << " ";

    int realAns = -1001;
    for(int i = 0; i < n; i++) {
        cout << ans[i] << "\n";
        if(realAns < ans[i]) {
            realAns = ans[i];
            cout << 'flag!\n"';
        }
    }
    cout << realAns << "\n";

    return 0;
}
