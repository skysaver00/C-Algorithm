#include <iostream>
#include <stack>
using namespace std;

int arr[1000001];
int check[1000001];
stack<int> stk;

int main() {
    stk.push(1e8);
    int n; cin >> n;

    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = n - 1; i >= 0; i--) {
        while(stk.top() <= arr[i]) stk.pop();

        if(stk.top() == 1e8) check[i] = -1;
        else check[i] = stk.top();

        stk.push(arr[i]);
    }

    for(int i = 0; i < n; i++) cout << check[i] << " ";
    cout << "\n";

    return 0;
}
