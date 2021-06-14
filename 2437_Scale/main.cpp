#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
int wei[1001];
int sumWei[1001];

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> wei[i];
        pq.push(wei[i]);
    }
    sort(wei, wei + n);

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += pq.top();
        pq.pop();
        sumWei[i] = sum;
    }

    if(wei[0] > 1) {
        cout << 1 << "\n";
        return 0;
    } else {
        int max = sumWei[0] + 1;
        for(int i = 1; i < n; i++) {
            if(max >= wei[i]) max = sumWei[i] + 1;
            else {
                cout << max << "\n";
                return 0;
            }
        }
        cout << max << "\n";
    }

    return 0;
}