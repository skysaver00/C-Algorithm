#include <iostream>
#include <stack>
using namespace std;

int arr[1000001];
int cnt[1000001];
int ans[1000001];
stack<int> st;

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        cnt[arr[i]]++;
    }

    st.push(1e9);
    cout << st.top() << "\n";

    for(int i = n - 1; i >= 0; i--) {
        while(cnt[st.top()] < cnt[arr[i]] && st.top() <= 1000000) st.pop();

        if(st.top() == 1e9) ans[i] = -1;
        else ans[i] = cnt[st.top()];

        st.push(arr[i]);
        cout << st.top() << "\n";
    }

    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << "\n";

    return 0;
}