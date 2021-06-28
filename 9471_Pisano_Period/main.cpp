#include <iostream>
using namespace std;

int pisano(int n, int m) {
    int per = 0;
    int o1 = 0, o2 = 1;
    do {
        int temp = o1;
        o1 = o2;
        o2 = (temp + o1) % m;
        per++;
    } while(o1 != 0 || o2 != 1);
    return per;
}

int main() {
    int p;
    cin >> p;

    int n, m;
    for(int i = 0; i < p; i++) {
        cin >> n >> m;
        int val = pisano(n, m);
        cout << n << " " << val << "\n";
    }
    return 0;
}