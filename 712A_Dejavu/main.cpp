#include <bits/stdc++.h>
using namespace std;

string str;

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> str;

        int len = str.length();
        for(int i = 0; i <= len; i++) {
            string str2 = str;
            str2.insert(i, "a");

            int len2 = str2.length();
            int dvd = len2 / 2;

            for(int j = 0; j < dvd; j++) {

            }
        }
    }
}