#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];
int res[10];

void Multiset(int cnt, int n, int m) {
    if(cnt == m) {
        for(int i = 0; i < m; i++)
            cout << res[i] << " ";
        cout << "\n";
        return;
    }

    for(int i = 0; i < n; i++) {
        res[cnt] = arr[i];
        Multiset(cnt + 1, n, m);
    }
}

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    Multiset(0, n, m);
    return 0;
}