#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> cards;

    for(int i = 0; i < n; i++) {
        int t;

        cin >> t;
        cards.push(t);
    }

    long long sum = 0;

    long long preCard = cards.top();
    if(cards.size() == 1) {
        cout << preCard << "\n";
        return 0;
    }
    cards.pop();
    preCard += cards.top();
    cards.pop();

    sum = preCard;
    cout << sum << "\n";

    int len = cards.size();
    for(int i = 0; i < len; i++) {
        int nextCard = preCard + cards.top();
        cards.pop();
        sum += nextCard;
        preCard = nextCard;
        cout << sum << "\n";
    }
    cout << sum << "\n";

    return 0;
}