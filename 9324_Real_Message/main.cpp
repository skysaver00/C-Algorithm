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
            if(A[t - 0x41] % 3 == 0 && A[t - 0x41] != 0) {
                if(t == len - 1) {
                    cout << "FAKE\n";
                    flag = 1;
                    break;
                } else if(t != mes.at(i + 1)) {
                    cout << "FAKE\n";
                    flag = 1;
                    break;
                }
            }
            A[t - 0x41]++;

            for(int j = 0; j < 26; j++) {
                cout << A[j] << " ";
            }cout << "\n";
        }
    }
}