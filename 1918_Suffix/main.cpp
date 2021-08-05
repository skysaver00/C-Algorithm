#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<char> stk[1001];
string str;
string postStr;

int main() {
    cin >> str;
    int len = str.length();
    int now = 0;

    for (int i = 0; i < len; i++) {
        if (str.at(i) >= 'A' && str.at(i) <= 'Z') postStr += str.at(i);

        if (str.at(i) == '(') {
            now++;
        } else if (str.at(i) == '*' || str.at(i) == '/') {
            while (!stk[now].empty() && (stk[now].top() == '*' || stk[now].top() == '/')) {
                postStr += stk[now].top();
                stk[now].pop();
            }
            stk[now].push(str.at(i));
        } else if (str.at(i) == '+' || str.at(i) == '-') {
            while (!stk[now].empty()) {
                postStr += stk[now].top();
                stk[now].pop();
            }
            stk[now].push(str.at(i));
        } else if (str.at(i) == ')') {
            while (!stk[now].empty()) {
                postStr += stk[now].top();
                stk[now].pop();
            }
            now--;
        }
    }
    while (!stk[now].empty()) {
        postStr += stk[now].top();
        stk[now].pop();
    }
    cout << postStr << "\n";
    return 0;
}