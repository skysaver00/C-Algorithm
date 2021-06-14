#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string str[11];
int arr[26];

bool compare(int i, int j) {
    return i > j;
}

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> str[i];

    for(int i = 0; i < n; i++) {
        int len = str[i].length();
        int sum = 1;
        for(int j = len - 1; j >= 0; j--) {
            int val = str[i].at(j) - 0x41;
            arr[val] += sum;
            sum *= 10;
        }
    }
    sort(arr, arr + 26, compare);

    int sum = 0;
    int num = 9;
    for(int i = 0; i < 10; i++) {
        sum += arr[i] * num;
        num--;
    }
    cout << sum << "\n";

    return 0;
}