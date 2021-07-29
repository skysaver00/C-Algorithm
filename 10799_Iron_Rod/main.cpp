#include <iostream>
#include <stack>
using namespace std;

stack<char> stk;

int main() {
    string str; cin >> str;
    int len = str.length();

    int ans = 0;
    int value = 0;
    for(int i = 0; i < len; i++) {
        if(i == 0) {
            stk.push(str.at(i));
            continue;
        }

        if(str.at(i) == '(') {
            if(stk.empty()) stk.push(str.at(i));
            else if(stk.top() == '(') {
                value += 1;
            }
        } else if(str.at(i) == ')') {
            if(str.at(i - 1) == ')') {
                ans += 1;
                value -=1;
            }
            if(stk.top() == '(') {
                ans += value;
                stk.pop();
            }
        }

        cout << str.at(i) << " " << value << " " << ans << "\n";
    }

    return 0;
}