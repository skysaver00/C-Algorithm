#include <bits/stdc++.h>
using namespace std;
int arr2[101];

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int a;
        int arr[101];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            arr2[arr[i]]++;
        }

        for(int i = 0; i < n - 1; i++){
            if(arr[i] != arr[i + 1]) {
                if(arr2[arr[i]] == 1) {
                    cout << i + 1 << endl;
                }
                else {
                    cout << i + 2 << endl;
                }
                break;
            }
        }

        for(int i = 0; i < n; i++) {
            arr2[i] = 0;
        }
    }

    return 0;
}