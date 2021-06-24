#include <iostream>
#include <string>
#include <vector>
using namespace std;

int arr[21];
bool check[21];

int min(int i, int j) {
    return (i < j) ? i : j;
}

int main() {
    string nam;
    cin >> nam;

    int len = nam.length();
    for(int i = 0; i < len; i++) {
        arr[i] = nam.at(i) - 'A';
        arr[i] = min(arr[i], abs('Z' + 1 - nam.at(i)));
    }

    int val = 0;
    int border = nam.length() / 2 + 1;

    int right = 0;
    for(int i = 0; i < border; i++) {
        if(nam.at(i) != 'A') right = i;
    }
    int left = 0;
    for(int i = len - 1; i >= border; i--) {
        if(nam.at(i) != 'A') left = i;
    }

    int cursor = min(len - 1, 2 * right + len - left);

    for(int i = 0; i < len; i++) {
        val += arr[i];
    }
    cout << val + cursor << "\n";

    return 0;
}