#include <iostream>
using namespace std;
long long arr[100001][3];

int main() {
    int t;
    cin >> t;

    arr[1][0] = 1;
    arr[2][1] = 1;
    arr[3][0] = arr[3][1] = arr[3][2] = 1;

    for(int i = 4; i <= 100000; i++) {
        arr[i][0] += arr[i - 1][1] + arr[i - 1][2];
        arr[i][1] += arr[i - 2][0] + arr[i - 2][2];
        arr[i][2] += arr[i - 3][0] + arr[i - 3][1];
        arr[i][0] %= 1000000009;
        arr[i][1] %= 1000000009;
        arr[i][2] %= 1000000009;
    }

    while(t--) {
        int n;
        cin >> n;

        long long sum = ((arr[n][0] + arr[n][1] + arr[n][2]) % 1000000009);
        cout << sum << endl;
    }

    return 0;
}
