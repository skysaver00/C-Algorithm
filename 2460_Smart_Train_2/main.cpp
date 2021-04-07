#include <iostream>
using namespace std;

int main() {
    int t = 10;

    int sum = 0;
    int max = 0;
    while(t--) {
        int down, up;
        cin >> down >> up;

        sum += (up - down);
        if(max < sum) max = sum;
    }
    cout << max << endl;
    return 0;
}