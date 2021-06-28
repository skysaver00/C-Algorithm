#include <iostream>
using namespace std;

int arr[1001];
int check[1001];
int ans[1001];
int v[1001];

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i];

    check[1] = 0;
    for(int i = 2; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            if(arr[i] > arr[j]) {
                if(check[i] <= check[j]) {
                    check[i] = check[j] + 1;
                    v[i] = j;
                }
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << arr[i] << "\t";
    }cout << "\n";

    for(int i = 1; i <= n; i++) {
        cout << check[i] << "\t";
    }cout << "\n";

    for(int i = 1; i <= n; i++) {
        cout << v[i] << "\t";
    }cout << "\n";

    int max = 0;
    int maxLoc = 0;
    for(int i = 1; i <= n; i++) {
        if(max < check[i]) {
            max = check[i];
            maxLoc = i;
        }
    }

    int d = max;
    while(d >= 0) {
        ans[d] = arr[maxLoc];
        maxLoc = v[maxLoc];
        d--;
    }

    cout << max << "\n";
    for(int i = 0; i <= max; i++) {
        cout << ans[i] << " ";
    }cout << "\n";

    return 0;
}
