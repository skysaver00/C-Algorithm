#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
pair<int, int> gas[10001];
bool check[10001];
priority_queue<int> pq;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) cin >> gas[i].first >> gas[i].second;
    int x, y;
    cin >> x >> y;

    sort(gas, gas + n);
    int num = 0;
    while(y < x) {
        for (int i = 0; i < n; i++) {
            if (gas[i].first <= y && !check[i]) {
                pq.push(gas[i].second);
                check[i] = true;
            } else break;
        }
        cout << y << " " << pq.top() << endl;
        y += pq.top();
        pq.pop();
        num++;
    }

    cout << num << "\n";
    return 0;
}