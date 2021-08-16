#include <iostream>
#include <vector>
using namespace std;

string str;
string cmpStr;

vector<int> makeTable(string cmpStr) {
    int cmpSize = cmpStr.length();
    vector<int> table(cmpSize, 0);

    int j = 0;
    for(int i = 1; i < cmpSize; i++) {
        while(j > 0 && cmpStr[i] != cmpStr[j]) {
            j = table[j - 1];
        }

        if(cmpStr[i] == cmpStr[j]) table[i] = ++j;
    }

    return table;
}

bool KMP(string str, string cmpStr) {
    vector<int> table = makeTable(cmpStr);
    int strSize = str.length();
    int cmpSize = cmpStr.length();

    int j = 0;
    for(int i = 0; i < strSize; i++) {
        while(j > 0 && str[i] != cmpStr[j]) {
            j = table[j - 1];
        }

        if(str[i] == cmpStr[j]) {
            cout << j << "\n";
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