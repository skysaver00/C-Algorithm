#include <iostream>
#include <string>
using namespace std;
int A[27];

int main() {
    int t; cin >> t;
    string mes;
    while(t--) {
        cin >> mes;
        int len = mes.size();

        int flag = 0;
        for(int i = 0; i < len; i++) {
            char t = mes.at(i);
            A[t - 0x41]++;
            if(A[t - 0x41] % 3 == 0 && A[t - 0x41] != 0) {
                if (i == len - 1) {
                    cout << "FAKE\n";
                    flag = 1;
                    break;
                } else if (t != mes.at(i + 1)) {
                    cout << "FAKE\n";
                    flag = 1;
                    break;
                } else {
                    A[t - 0x41] = 0;
                    i++;
                }
            }
        }

        if(flag == 0) cout << "OK\n";
        for(int i = 0; i < 26; i++) A[i] = 0;
    }

    return 0;
}