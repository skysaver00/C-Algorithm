#include <iostream>

using namespace std;

long long arr[10001];

int main() {
    int t;
    cin >> t;

    for(int i = 1; i <= 10000; i++) {
        arr[i] = i * i * i;
    }

    while(t--) {
        long long x;
        cin >> x;

        for(int i = 1; i <= 10000; i++) {
            for(int j = 1; j <= 10000; j++) {
                if(x == arr[j]) {
                    cout << "NO\n";
                    continue;
                }
                if(x == arr[i] + arr[j]) {
                    cout << "YES\n";
                    continue;
                }
            }
        }
        cout << "NO\n";
    }

    return 0;
}