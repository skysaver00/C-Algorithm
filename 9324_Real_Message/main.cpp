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
                cout << t << " " << len - 1 << "\n";
                if (t == len - 1) {
                    cout << "FAKE\n";
                    flag = 1;
                    break;
                } else if (t != mes.at(i + 1)) {
                    cout << "FAKE\n";
                    flag = 1;
                    break;
                }
            }

            for(int j = 0; j < 26; j++) {
                cout << A[j] << " ";
            }cout << "\n";
        }

        if(flag == 0) cout << "OK\n";
        for(int i = 0; i < 26; i++) A[i] = 0;
    }

    return 0;
}