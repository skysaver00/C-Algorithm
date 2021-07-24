#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str;
string bomb;
stack<char> st;
char realStr[1000001];
int arr[40];

int main() {
    cin >> str >> bomb;

    int len = str.length();
    int blen = bomb.length();

    int now = 0;
    for(int i = 0; i < len; i++) {
        if(str.at(i) == bomb.at(now)) {
            arr[now]++;
            now++;
            st.push(str.at(i));
        } else if(str.at(i) == bomb.at(0)) {
            arr[0]++;
            now = 1;
            st.push(str.at(i));
        } else {
            for(int j = 0; j < blen; j++) arr[j] = 0;
            now = 0;
            st.push(str.at(i));
        }

        if(now == blen) {
            for(int j = 0; j < now; j++) {
                st.pop();
                arr[j]--;
            }
            now = 0;
            for(int j = 0; j < blen; j++) {
                if(arr[j] == 0) break;
                now++;
            }
        }
    }

    if(st.empty()) {
        cout << "FRULA" << "\n";
        return 0;
    }
    int sz = st.size() - 1;
    while(!st.empty()) {
        realStr[sz] = st.top();
        st.pop();
        sz--;
    }
    cout << realStr << "\n";
    return 0;
}