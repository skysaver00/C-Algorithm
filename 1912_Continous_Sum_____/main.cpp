#include <iostream>
using namespace std;
int num[100001];
int ans[100001];
int minVal = -9999;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


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
        if(minVal < val && val <= 0) minVal = val;
    }
    node++;

    ans[0] = num[0];
    for(int i = 1; i < node; i++) {
        if(ans[i - 1] + num[i] > num[i]) ans[i] = ans[i - 1] + num[i];
        else ans[i] = num[i];
    }

    int realAns = 0;
    for(int i = 0; i < node; i++) if(realAns <= ans[i]) realAns = ans[i];

    if(realAns > 0) cout << realAns << "\n";
    else cout << minVal << "\n";

    return 0;
}
