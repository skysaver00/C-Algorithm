#include <bits/stdc++.h>
using namespace std;

long long range[100001];
long long city[100001];
int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n - 1; i++) {
        cin >> range[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> city[i];
    }

    long long sum = 0;
    long long rangeSum = range[0];
    long long price = city[0];
    for(int i = 1; i < n - 1; i++) {
        if(price <= city[i]) {
            rangeSum += range[i];
        } else {
            sum += rangeSum * price;
            rangeSum = range[i];
            price = city[i];
        }
    }
    sum += rangeSum * price;

    cout << sum << "\n";
}