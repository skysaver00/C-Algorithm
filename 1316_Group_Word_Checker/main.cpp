#include <iostream>
#include <cstring>
#include <memory.h>
using namespace std;

char arr[101];
bool check[26];

int main() {
    int t;
    cin >> t;

    int cnt = 0;
    while(t--) {
        cin >> arr;

        bool flag = true;
        int len = strlen(arr);
        char now = arr[0];
        for(int i = 1; i < len; i++) {
            if(now == arr[i]);
            else {
                if(check[arr[i] - 0x61]) {
                    flag = false;
                    break;
                }
                else {
                    check[now - 0x61] = true;
                    now = arr[i];
                }
            }
        }
        if(flag) cnt++;
        memset(check, false, 26 * sizeof(bool));
    }
    cout << cnt << endl;

    return 0;
}