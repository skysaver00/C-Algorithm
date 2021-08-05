#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> stk;
string str;
string postStr;

int main() {
    cin >> str;
    int len = str.length();
    int now = 0;

    for(int i = 0; i < len; i++) {
        if(str.at(i) >= 'A' && str.at(i) <= 'Z') postStr += str.at(i);
        else {
            if(str.at(i) == '(') {
                stk.push(str.at(i));
            } else if(str.at(i) == '*' || str.at(i) == '/') {
                if(!stk.empty()) {
                    while(stk.top() == '*' || stk.top() == '/') {
                        postStr += stk.top();
                        stk.pop();
                    }
                }
                stk.push(str.at(i));
            } else if(str.at(i) == '+' || str.at(i) == '-') {
                if(!stk.empty()) {
                    while(stk.top() != '(') {
                        postStr += stk.top();
                        stk.pop();
                    }
                }
                stk.push(str.at(i));
            } else if(str.at(i) == ')') {
                if(!stk.empty()) {
                    while(stk.top() == '(') {
                        postStr += stk.top();
                        stk.pop();
                    }
                    now--;
                }
            }
        }
        cout << postStr << "\n";
    }
    while(!stk.empty()) {
        postStr += stk.top();
        stk.pop();
    }
    cout << postStr << "\n";
    return 0;
}