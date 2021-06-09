#include <iostream>
using namespace std;

int arr[1001];
int check[1001];

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i];

    check[1] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n; j++) {
            if(arr[j] > arr[i]) {
                if(check[j] < check[i]) check[j] = check[i] + 1;
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << check[i] << " ";
    }

    return 0;
}
