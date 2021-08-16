#include <iostream>
#include <vector>
using namespace std;

string str;
string cmpStr;

vector<int> makeTable(string pattern) {
    int patSize = pattern.size();
    vector<int> table(patSize, 0);

    int j = 0;
    for(int i = 1; i < patSize; i++) {
        while(j > 0 && pattern[i] != pattern[j]) {
            j = table[j - 1];
        }

        if(pattern[i] == pattern[j]) table[i] = ++j;
    }

    return table;
}

bool KMP(string str, string cmpStr) {
    vector<int> table = makeTable(cmpStr);
    int strSize = str.size();
    int cmpSize = cmpStr.size();

    int j = 0;
    for(int i = 0; i < strSize; i++) {
        while(j > 0 && str[i] != cmpStr[j]) {
            j = table[j - 1];
        }

        if(str[i] == cmpStr[j]) {
            if(j == cmpSize - 1) return true;
        } else j++;
    }

    return false;
}

int main() {
    cin >> str; cin >> cmpStr;
    bool ck = KMP(str, cmpStr);

    if(ck) cout << "1\n";
    else cout << "0\n";
    return 0;
}