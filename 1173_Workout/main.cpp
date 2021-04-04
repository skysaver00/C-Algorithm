#include <iostream>
using namespace std;

int main() {
    int N, min, max, T, R;
    cin >> N >> min >> max >> T >> R;

    int cnt = 0;
    int work = 0;
    int pulse = min;
    while(work < N) {
        if(max - min < T) {
            cout << -1 << endl;
            return 0;
        }

        if(pulse + T > max) {
            if(pulse - R < min) pulse = min;
            else pulse -= R;
            cnt++;
        }
        else {
            pulse += T;
            cnt++;
            work++;
        }
    }
    cout << cnt << endl;

    return 0;
}
