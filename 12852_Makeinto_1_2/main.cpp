#include <iostream>
#include <stack>
using namespace std;

int val[1000001];
int track[1000001];
stack<int> st;

int MIN(int i, int j) {
    return i < j ? i : j;
}

void solve(int n) {
    for(int i = n - 1; i >= 1; i--) {
        if(i * 3 <= n) {
            val[i] = MIN(val[i * 3], val[i]);
            if(val[i * 3] == val[i]) track[i] = i * 3;
        }

        if(i * 2 <= n) {
            val[i] = MIN(val[i * 2], val[i]);
            if(val[i * 2] == val[i]) track[i] = i * 2;
        }

        val[i] = MIN(val[i + 1], val[i]);
        if(val[i + 1] == val[i]) track[i] = i + 1;
        val[i] += 1;
    }
}

int main() {
    int n; cin >> n;
    for(int i = 0; i <= n; i++) val[i] = 999999999;
    val[n] = 0, track[n] = -1;
    solve(n);

    cout << val[1] << "\n";
    st.push(1);
    int find = track[1];
    while(find != -1) {
        st.push(find);
        find = track[find];
    }
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }cout << "\n";
}