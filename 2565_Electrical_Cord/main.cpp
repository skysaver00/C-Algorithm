#include <iostream>
using namespace std;

int arr[501];
int line[501];

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        arr[a] = b;
    }

    int value = 0;
    for(int i = 1; i <= 500; i++) {
        for(int j = 1; j < i; j++) {
            if(arr[j] > arr[i]) value++;
        }

        for(int j = i + 1; j <= 500; j++) {
            if(arr[j] < arr[i] && arr[j] != 0) value++;
        }

        cout << value << endl;
        line[i] = value;
    }

    return 0;
}