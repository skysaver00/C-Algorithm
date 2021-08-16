#include <iostream>
#include <algorithm>
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

int main() {
    string str;
    cin >> str;

    int ans = 0;
    for(int i = 0; i < str.length(); i++) {
        string str2 = str.substr(i, str.length());
        vector<int> table = makeTable(str2);

        sort(table.begin(), table.end(), greater<int>());
        ans = max(ans, table[0]);
    }

    cout << ans << "\n";
    return 0;
}