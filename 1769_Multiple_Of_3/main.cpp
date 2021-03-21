#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int sum[5];
int main() {
    string str1;
    cin >> str1;

    if(str1.length() < 2) {
        sum[0] = str1.at(0) - 0x30;

        if(sum[0] % 3 == 0) cout << "\nYES\n";
        else cout << 0 << "\nNO\n";

        return 0;
    }

    for(int i = 0; i < str1.length(); i++) {
        sum[0] += str1.at(i) - 0x30;
    }

    int cnt = 0;
    if(sum[0] < 10) {
        if(sum[0] % 3 == 0) cout << "\nYES\n";
        else cout << 1 << "\nNO\n";

        return 0;
    } else {
        cnt++;

        while(1) {
            while(sum[cnt - 1] != 0) {
                sum[cnt] += sum[cnt - 1] % 10;
                sum[cnt - 1] /= 10;
            }

            if(sum[cnt] < 10) break;
            else cnt++;
        }
    }
    if(sum[cnt] % 3 == 0) cout << cnt + 1 << "\nYES\n";
    else cout << cnt + 1 << "\nNO\n";

    return 0;
}