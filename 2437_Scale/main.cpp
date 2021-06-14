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

    for(int i = 0; i < n; i++) {
        
    }
}