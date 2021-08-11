#include <iostream>
int arr[1001];
int inc[1001];
int des[1001];
using namespace std;

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if(arr[i] > arr[j]) {
                if(inc[i] < inc[j] + 1) inc[i] = inc[j] + 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }cout << "\n";

    return 0;
}