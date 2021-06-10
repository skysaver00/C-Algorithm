#include <iostream>
using namespace std;

int arr[1001];
int check[1001];

int ans[1001];

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i];

    check[1] = 0;
    for(int i = 2; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            if(arr[i] > arr[j]) {
                if(check[i] <= check[j]) check[i] = check[j] + 1;
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << check[i] << " ";
    }cout << "\n";

    int max = 0;
    for(int i = 1; i <= n; i++) {
        if(max < check[i]) max = check[i];
        ans[i] = 99999999;
    }

    int p = max + 1;
    while(max != -1) {
        for(int i = n; i >= 1; i--) {
            if(check[i] == max) {
                ans[max + 1] = arr[i];
                break;
            }
        }
        max--;
    }

    cout << p << endl;
    for(int i = 1; i <= p; i++) {
        cout << ans[i] << " ";
    }cout << "\n";

    return 0;
}
