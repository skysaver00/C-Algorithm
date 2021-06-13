#include <iostream>
#include <string>
#include <stack>
using namespace std;
stack<int> st;
string str;
string bomb;
int arr[40];

int main() {
    cin >> str;
    cin >> bomb;

    int len = str.length();
    int bLen = bomb.length();

    int now = 0;
    for(int i = 0; i < len; i++) {
        if(str.at(i) == bomb.at(now)) {
            cout << now << " " << bLen << "\n";
            arr[now]++;
            now++;
        } else {
            for(int j = 0; j < bLen; j++) {
                arr[j] = 0;
            }
            now = 0;
        }

        for(int j = 0; j < bLen; j++) {
            printf("%d ", arr[j]);
        }printf("\n");

        if(now == bLen) {
            for(int j = 0; j < bLen; j++) {
                arr[j]--;
            }

            for(int j = 0; j < bLen; j++) {
                if(arr[j] == 0) {
                    now = j - 1;
                    break;
                }
            }
        }
    }
    return 0;
}