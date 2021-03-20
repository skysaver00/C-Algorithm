#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    string str1;
    string str2;
    cin >> str1 >> str2;

    int sub = str2.length() - str1.length();
    int min = 9999999;
    int cnt = 0;
    for(int i = 0; i <= sub; i++) {
        for(int j = 0; j < str1.length(); j++) {
            if(str1.at(j) != str2.at(j + i)) {
                cnt++;
            }
        }
        if(cnt < min) min = cnt;
        cnt = 0;
    }

    printf("%d\n", min);
}