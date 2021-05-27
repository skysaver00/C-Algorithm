#include <iostream>
using namespace std;
int arr[1001];
int check[1001];

void dfs(int n, int val) {
    if(check[n] != 0) return;
    check[n] = val;
    dfs(arr[n], val);
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        for(int i = 1; i <= n; i++) cin >> arr[i];

        int t = 0;
        for(int i = 1; i <= n; i++) {
            if(check[i] == 0) t++;
            dfs(i, t);
        }

        cout << t << "\n";
        for(int i = 1; i <= n; i++) check[i] = 0;
    }
    return 0;
}