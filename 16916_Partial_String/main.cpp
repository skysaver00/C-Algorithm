#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> makeTable(string cmpStr) {
    int cmpSize = (int)cmpStr.length();
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
    int strSize = (int)str.length();
    int cmpSize = (int)cmpStr.length();

    int j = 0;
    for(int i = 0; i < strSize; i++) {
        while(j > 0 && str[i] != cmpStr[j]) {
            j = table[j - 1];
        }

        if(str[i] == cmpStr[j]) {
            if(j == cmpSize - 1) return true;
            else j++;
        }
    }
    return false;
}

int main() {
    string str;
    string cmpStr;
    cin >> str; cin >> cmpStr;

    cout << KMP(str, cmpStr);
    return 0;
}