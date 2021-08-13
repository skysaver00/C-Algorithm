#include <iostream>
using namespace std;
int arr[11];

int main() {
    int n; cin >> n;
    arr[1] = 1, arr[2] = 2, arr[3] = 4;
    for(int i = 4; i <= 10; i++) arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];

    while(n--) {
        int k; cin >> k;
        cout << arr[k] << "\n";
    }

    return 0;
}