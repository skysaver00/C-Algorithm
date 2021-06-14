#include <iostream>
#include <string>
using namespace std;
string str[11];
int arr[11];

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> str[i];


    for(int i = 0; i < n; i++) {
        int len = str[i].length();
        int sum = 1;
        for(int j = len - 1; j >= 0; j--) {
            arr[str[i].at(j) - 0x41] += sum;
            sum *= 10;
        }

        for(int j = 0; j < 10; j++) {
            cout << arr[j] << " ";
        }cout << "\n";
    }
}