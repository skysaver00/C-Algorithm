#include <iostream>
#include <string>
using namespace std;
string str[11];
int arr[11];

void insertion(int n) {
    int i, j;
    for(i = 1; i < n; i++) {
        int key = arr[i];
        for(j = i - 1; j >= 0; j--) {
            if(key > arr[j]) {
                arr[j + 1] = arr[j];
            } else break;

            for(int k = 0; k < 10; k++) {
                cout << arr[k] << " ";
            }cout << "\n";
            arr[j + 1] = key;
        }
    }
}

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

    insertion(n);

    for(int j = 0; j < 10; j++) {
        cout << arr[j] << " ";
    }cout << "\n";

    return 0;
}