#include <iostream>
#include <queue>
using namespace std;
priority_queue<long long, vector<long long>, greater<long long>> pq;
int num[200000];

int main() {
    int k, n; cin >> k >> n;

    for(int i = 0; i < k; i++) {
        cin >> num[i];
        pq.push(num[i]);
    }

    int cnt = 1;
    while(cnt != n) {
        long long val = pq.top();
        pq.pop();
        for(int i = 0; i < k; i++) {
            long long t = val * num[i];
            if(t > 2147483647) break;
            else {
                pq.push(t);
                if(val % num[i] == 0) break;
            }
        }
        cnt++;
    }
    int ans = pq.top();
    cout << ans << "\n";

    return 0;
}