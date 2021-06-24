#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int arr[21];

int min(int i, int j) {
    return (i < j) ? i : j;
}

int main() {
    string name;
    cin >> name;

    int len = name.length();
    for(int i = 0; i < len; i++) {
        arr[i] = name.at(i) - 'A';
        arr[i] = min(arr[i], abs('A' - name.at(i)));
    }

    int val = 0;
    for(int i = 0; i < len; i++) {
        val += arr[i];
        cout << arr[i] << " ";
    }
    cout << "\n" << val << "\n";

    return 0;
}