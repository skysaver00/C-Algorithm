#include <iostream>
using namespace std;

int arr[1001][2];
int solve[1001][2];

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n ; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    return 0;
}