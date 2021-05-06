#include <iostream>
using namespace std;

int arr[1001];
int total[1001];

int max(int i, int j) {
    return i > j ? i : j;
}

int main () {
    int n;
    cin >> n;

    for(int i = 0 ; i < n; i++) {
        cin >> arr[i];
    }

    total[0] = 1;
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(arr[i] > arr[j]) total[i] = max(total[i], total[j] + 1);
        }

        for(int j = 0; j < n; j++) {
            cout << total[j] << " ";
        }cout << endl;
    }

    return 0;
}
