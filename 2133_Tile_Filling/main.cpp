#include <iostream>
using namespace std;
int arr[31];

/*int main() {
    int n; cin >> n;
    if(n % 2 == 1) {
        cout << 0 << "\n";
        return 0;
    }
    arr[0] = 1;
    arr[2] = 3;
    for(int i = 4; i <= n; i += 2) {
        arr[i] = (arr[i - 2] * arr[2]);
        for(int j = 0; j <= i - 4; j += 2) {
            arr[i] += arr[j] * 2;
        }
    }

    cout << arr[n] << "\n";
    return 0;
}*/

int main() {
    int n; cin >> n;
    if(n % 2 == 1) {
        cout << 0 << "\n";
        return 0;
    }

    arr[0] = 1;
    arr[1] = 3;
    int n_2 = n / 2;
    for(int i = 2; i <= n_2; i++)
        arr[i] = 4 * arr[i - 1] - arr[i - 2];
    cout << arr[n_2] << "\n";
    return 0;
}