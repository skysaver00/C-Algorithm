#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    double arr[10000000];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    for(int i = 0; i < 7; i ++) {
        cout << arr[i] << "\n";
    }

    return 0;
}