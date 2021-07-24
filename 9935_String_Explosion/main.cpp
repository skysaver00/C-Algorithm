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

    int now = 0;
    for(int i = 0; i < len; i++) {
        realStr[now++] = str[i];
        int blen = bomb.length();
        if(str[i] == bomb[--blen]) {
            bool check = false;
            int size = now - bomb.length();

            for(int j = now - 1; j >= size; j--) {
                if(realStr[j] == bomb[blen--]) check = true;
                else {
                    check = false;
                    break;
                }
            }

            if(check) now -= bomb.size();
        }
    }

    if(now==0)
        cout << "FRULA\n";
    else {
        for(int i = 0; i < now; i++)
            cout << realStr[i];
    }
    cout << "\n";
    return 0;
}