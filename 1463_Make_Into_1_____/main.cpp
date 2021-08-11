#include <iostream>
using namespace std;

int arr[1000001];

int max(int i, int j) {
    return (i > j) ? i : j;
}

int main() {
    int n; cin >> n;

    for(int i = n - 1; i >= 1; i--) {
        arr[i] = arr[i + 1] + 1;
        if(i <= (n / 2)) arr[i] = arr[i * 2] + 1;
        if(i <= (n / 3)) arr[i] = arr[i * 3] + 1;
    }

    
    return 0;
}
