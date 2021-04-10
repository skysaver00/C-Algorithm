#include <bits/stdc++.h>
using namespace std;

string str;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        cin >> str;

        int len = str.length();
        bool questionFlag = false;
        for(int i = 0; i < len; i++) {
            if(str.at(i) == '?') {
                questionFlag = true;
                break;
            }
        }

        int len2 = ceil(len / 2.0);
        if(questionFlag) {
            for(int i = 0; i < len2; i++) {
                if(str.at(i) == '0' && str.at(len - i - 1) == '?') {
                    str.at(len - i - 1) = '0';
                }
                else if(str.at(i) == '1' && str.at(len - i - 1) == '?') {
                    str.at(len - i - 1) = '1';
                }
                else if(str.at(len - i - 1) == '0' && str.at(i) == '?') {
                    str.at(i) = '0';
                }
                else if(str.at(len - i - 1) == '1' && str.at(i) == '?') {
                    str.at(i) = '1';
                }
            }
        }

        for(int i = 0; i < len; i++) {
            if(str.at(i) == '0') a--;
            else if(str.at(i) == '1') b--;
        }

        bool minusFlag = false;

        for(int i = 0; i < len2; i++) {
            if(str.at(i) != str.at(len - i - 1)) {
                cout << -1 << endl;
                minusFlag = true;
                break;
            }
        }

        if(minusFlag) continue;

        for(int i = 0 ; i < len2; i++) {
            if(a == 0 && b == 0) break;

            if(a < 0 || b < 0) {
                cout << -1 << endl;
                minusFlag = true;
                break;
            }

            if(str.at(i) == '?') {
                if(a > 0) {
                    str.at(i) = '0';
                    str.at(len - i - 1) = '0';
                    a -= 2;

                    if(i == len - i - 1) a++;
                } else {
                    str.at(i) = '1';
                    str.at(len - i - 1) = '1';
                    b -= 2;

                    if(i == len - i - 1) b++;
                }
            }
        }

        if(minusFlag) continue;

        if(a < 0 || b < 0) {
            cout << -1 << endl;
            minusFlag = true;
        }

        if(minusFlag) continue;

        cout << str << endl;
    }
    return 0;
}