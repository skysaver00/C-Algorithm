#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];

int cmpMax(int one, int two) {
    return (one > two) ? one : two;
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int sum = 0;
    avgSum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];

    }

    return 0;
}