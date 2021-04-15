#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];

int cmpMax(int one, int two) {
    return one > two ? one : two;
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int ans = 0;
    int k = 1;
    int len = 0;
    for(int i = n - 1; i >= 0; i--) {
        int sum = arr[i] * (k);
        ans = cmpMax(ans, sum);
        k++;
    }

    cout << ans << endl;

    return 0;
}