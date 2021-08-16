#include <iostream>
#include <string>
#include <vector>
using namespace std;

int max(int i, int j) {
    return i > j ? i : j;
}

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

int KMP(string str, string cmpStr) {
    int val = 0;
    vector<int> table = makeTable(cmpStr);
    int strSize = (int)str.length();
    int cmpSize = (int)cmpStr.length();

    int j = 0;
    for(int i = 0; i < strSize; i++) {
        while(j > 0 && str[i] != cmpStr[j]) {
            j = table[j - 1];
        }

        if(str[i] == cmpStr[j]) {
            if(j == cmpSize - 1) {
                val++;
                j = table[j];
            }
            else j++;
        }
    }
    return val;
}

int main() {
    string str;
    string cmpStr;
    cin >> str;

    int len = str.length();
    int ans = 0;
    for(int i = 1; i < len; i++) {
        for(int j = 0; j < len - i; j++) {
            cmpStr = str.substr(j, j + i);
            int k = KMP(str, cmpStr);
            if(k >= 2)
        }
    }
    return 0;
}