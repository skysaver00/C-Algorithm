#include <iostream>
using namespace std;
int arr[1001];

int max(int i, int j) {
    return i > j ? i : j;
}

int main() {
    int n;
    cin >> n;

    int big = 0;
    int len = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(big < arr[i]) len = i;
        big = max(big, arr[i]);
    }
    int sum = big * (n - 1);
    for(int i = 0; i < n; i++) {
        if(len == i) continue;
        else sum += arr[i];
    }

    cout << sum << endl;
    return 0;
}