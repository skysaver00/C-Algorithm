#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<long long, vector<long long>, greater<long long>> cards;

    for(int i = 0; i < n; i++) {
        int t;

        cin >> t;
        cards.push(t);
    }

    long long sum = 0;

    while(!cards.empty()) {
        if(cards.size() == 1) {
            break;
        }

        long long a;
        a = cards.top();
        cards.pop();
        a += cards.top();
        cards.pop();
        //cout << a << "\n";
        cards.push(a);
        sum += a;
    }
    cout << sum << "\n";

    return 0;
}