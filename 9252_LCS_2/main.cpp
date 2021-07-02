#include <iostream>
#include <string>
using namespace std;

int lcs[1002][1002];
bool str1Ck[1002];
bool str2Ck[1002];
string str1;
string str2;
string overall;

int MAX(int i, int j) {
    return i > j ? i : j;
}

int main() {
    cin >> str1 >> str2;
    int len1 = str1.length(), len2 = str2.length();

    for(int i = 1; i <= len2; i++) {
        for(int j = 1; j <= len1; j++) {
            if(str1.at(j - 1) == str2.at(i - 1)) {
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            } else {
                lcs[i][j] = MAX(lcs[i - 1][j], lcs[i][j - 1]);
            }
        }
    }

    int i = len2, j = len1;
    while(i != 0 && j != 0) {
        if(lcs[i][j] == lcs[i][j - 1]) {
            j -= 1;
        } else if(lcs[i][j] == lcs[i - 1][j]) {
            i -= 1;
        } else {
            overall += str2.at(i - 1);
            i -= 1, j -= 1;
        }
    }

    cout << lcs[len2][len1] << "\n";
    i = overall.length();
    for(j = i - 1; j >= 0 ; j--) cout << overall.at(j);

    return 0;
}
