#include <iostream>
using namespace std;

int arr[31];

int main() {
    int n; cin >> n;
    if(n % 2 == 1) {
        cout << 0 << "\n";
        return 0;
    }
    arr[0] = 1;
    arr[2] = 3;
    for(int i = 4; i <= n; i += 2) {
        arr[i] = (arr[i - 2] * arr[2]);
        for(int j = 0; j <= i - 2; j += 2) {
            arr[i] += arr[j] * 2;
        }

        cout << arr[i] << "\n";
    }

    return 0;
}
