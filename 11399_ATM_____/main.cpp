#include <bits/stdc++.h>
using namespace std;

int arr[1001];
int brr[1001];
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + t);

    for(int i = 0; i < t; i++) {
        cout << arr[i];
    }

    int sum = 0;
    brr[0] = arr[0];
    sum += brr[0];
    for(int i = 1; i < t; i++) {
        brr[i] = arr[i] + arr[i - 1];
        sum += brr[i];
        cout << sum << "\n";
    }

    cout << sum;

    return 0;
}