#include <iostream>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
int num[200000];

int main() {
    int k, n; cin >> k >> n;

    for(int i = 0; i < n; i++) {
        cin >> num[i];
        pq.push(num[i]);
    }

    int cnt = 1;
    while(cnt != n) {
        long long val = pq.top();
        pq.pop();

        for(int i = 0; i < k; i++) {
            val = val * num[i];
            if(val > 2147483647) continue;
            else pq.push(val);
        }
        cnt++;
    }

    int ans = pq.top();
    printf("%d\n", )
}