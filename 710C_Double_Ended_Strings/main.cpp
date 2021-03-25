#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string str1;
        string str2;

        cin >> str1 >> str2;

        if(str1.length() > str2.length()) swap(str1, str2);

        int len1 = str1.length();
        int max = -1;
        for(int i = 0; i < len1; i++) {
            for(int j = 1; j <= len1  - i; j++) {
                string subStr;
                if(max < j) {
                    subStr = str1.substr(i, j);
                }
                
            }
        }
    }
}