#include <iostream>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
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
            int t = val * num[i];
            if(val > 2147483647) continue;
            else pq.push(t);

            cout << t << endl;
        }
        cnt++;
    }
    int ans = pq.top();
    cout << ans << "\n";

    return 0;
}