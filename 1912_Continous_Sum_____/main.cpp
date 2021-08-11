#include <iostream>
using namespace std;
int sum[100001];

int main() {
    int n; cin >> n;

    int node = 0;
    bool ck = true;
    for(int i = 0; i < n; i++) {
        int val; cin >> val;
        if(val >= 0 && ck == true) {
            sum[node] += val;
        } else if(val >= 0 && ck == false) {
            node++;
            ck = true;
            sum[node] += val;
        } else if(val <= 0 && ck == false) {
            sum[node] += val;
        } else {
            node++;
            ck = false;
            sum[node] += val;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << sum[i] << " ";
    }cout << "\n";

    return 0;
}
