#include <iostream>
#include <cmath>
using namespace std;
int arr[1000000];

int main() {
    int a, p;
    cin >> a >> p;

    int out;
    int count = 1;

    if(a == 1) {
        cout << 0 << endl;
        return 0;
    }

    while(1) {
        int sum = 0;
        while(a != 0) {
            int val = a % 10;
            sum += (int)pow((double)val, (double)p);
            a /= 10;
        }

        if(arr[sum] != 0) {
            out = arr[sum];
            cout << sum << endl;
            break;
        } else {
            arr[sum] = count;
        }
        a = sum;
        count++;
        //if() break;

        cout << sum << endl;
    }

    cout << out << endl;
    return 0;
}