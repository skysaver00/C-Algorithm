#include <iostream>
#include <stack>
using namespace std;

int arr[1000001];
int count[1000001];
int ans[1000001];
stack<int> stk;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        count[arr[i]]++;
    }

    stk.push(1e8);
    for(int i = n - 1; i > 0; i--) {
        while(count[stk.top()] <= count[arr[i]]) stk.pop();

        if(stk.top() == 1e8) ans[i] = -1;
        else ans[i] = stk.top();

        stk.push(arr[i]);
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }cout << "\n";

    return 0;
}