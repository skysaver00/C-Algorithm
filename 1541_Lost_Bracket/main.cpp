#include <bits/stdc++.h>
using namespace std;

string str;
int main() {
    cin >> str;
    str += '-';

    int len = str.length();

    int at = 0;
    for(int i = 0; i < len; i++) {
        if(str.at(i) == '-') {
            at = i;
            break;
        }
    }

    int sum = 0;
    int sub = 0;

    int start = 0;
    for(int i = 0; i <= at; i++) {
        if(str.at(i) == '+' || str.at(i) == '-') {
            sum += stoi(str.substr(start, i - start));
            start = i + 1;
        }
    }

    for(int i = at + 1; i < len; i++) {
        if(str.at(i) == '+' || str.at(i) == '-') {
            sub += stoi(str.substr(start, i - start));
            start = i + 1;
        }
    }

    cout << sum - sub << "\n";
    return 0;
}