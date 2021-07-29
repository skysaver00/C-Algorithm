#include <iostream>
#include <stack>
using namespace std;

int arr[1000001];
int cnt[1000001];
int ans[1000001];
stack<int> st;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        cnt[arr[i]]++;
    }

    st.push(1e9);

    for(int i = n - 1; i >= 0; i--) {

        while(st.top() <= 1000000 && cnt[st.top()] <= cnt[arr[i]]) st.pop();

        if(st.top() == 1e9) ans[i] = -1;
        else {
            ans[i] = st.top();
        }

        st.push(arr[i]);
    }

    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << "\n";

    return 0;
}