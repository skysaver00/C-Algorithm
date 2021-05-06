#include <iostream>
#include <cmath>
using namespace std;
int arr[400000];

int main() {
    int a, p;
    cin >> a >> p;

    while(1) {
        int sum = 0;
        while(a != 0) {
            sum += pow(a % 10, p);
            a /= 10;
        }

        cout << sum << endl;
        a = sum;
        //if() break;


    }
}