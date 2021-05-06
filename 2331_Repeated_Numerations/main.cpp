#include <iostream>
#include <cmath>
using namespace std;
int arr[1000000];

int main() {
    int a, p;
    cin >> a >> p;

    int out;
    int count = 1;

    int mir_a = a;
    while(1) {
        int sum = 0;
        while(a != 0) {
            int val = a % 10;
            sum += floor(pow((double)val, (double)p) + 0.4);
            a /= 10;
        }

        if(arr[sum] != 0) {
            out = arr[sum];
            if(mir_a == sum) out--;
            //cout << sum << endl;
            break;
        } else {
            arr[sum] = count;
        }

        a = sum;
        count++;
        //if() break;

        //cout << sum << endl;
    }

    cout << out << endl;
    return 0;
}