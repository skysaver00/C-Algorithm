#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

pair<int, int> pa[300001];
priority_queue<int> que;
int bag[300001];

int main() {
    int n, k; cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> pa[i].first >> pa[i].second;
    for(int i = 0; i < k; i++) cin >> bag[i];

    sort(pa, pa + n);
    sort(bag, bag + k);

    long long sum = 0;
    int now = 0;
    for(int i = 0; i < k; i++) {
        while(now < n && bag[i] >= pa[now].first) {
            que.push(pa[now].second);
            now++;
        }

        if(!que.empty()) {
            sum += que.top();
            que.pop();
        }
    }

    cout << sum << endl;

    return 0;
}