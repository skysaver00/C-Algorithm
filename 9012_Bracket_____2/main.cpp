#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str;
stack<char> stk;

int main() {
    int n; cin >> n;
    while (n--) {
        cin >> str;

        bool flag = false;
        int len = str.length();
        for(int i = 0; i < len; i++) {
            if(str.at(i) == ')' && stk.empty()) {
                flag = true;
                break;
            } else if(str.at(i) == ')') {
                stk.pop();
            } else if(str.at(i) == '(') {
                stk.push('(');
            }
        }

        if(stk.empty() && !flag) cout << "YES\n";
        else {
            cout << "NO\n";
            while(!stk.empty()) stk.pop();
        }
    }
     return 0;
}