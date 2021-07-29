#include <iostream>
#include <stack>
using namespace std;

int arr[1000001];
int check[1000001];
stack<int> st;

int main() {
    st.push(1e9);

    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = n - 1; i >= 0; i--) {
        while(st.top() <= arr[i]) st.pop();

        if(st.top() == 1e9) check[i] = -1;
        else check[i] = st.top();

        st.push(arr[i]);
    }

    for(int i = 0; i < n; i++) cout << check[i] << " ";

    return 0;
}