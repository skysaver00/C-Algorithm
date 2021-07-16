#include <iostream>
using namespace std;

int binA[66];
int binB[66];
long long val[66];

int makeBin(long long i, int ck) {
    int cnt = 0;
    while(i != 0 && ck == 1) {
        if(i % 2 == 1) binA[cnt] = 1;
        cnt++;
        i /= 2;
    }
    while(i != 0 && ck == 2) {
        if(i % 2 == 1) binB[cnt] = 1;
        cnt++;
        i /= 2;
    }
    return cnt;
}

void makeVal() {
    val[0] = 1;
    long long pow = 1;
    for(int i = 1; i < 66; i++) {
        pow = pow << 1;
        val[i] = val[i - 1] * 2 + pow;
    }
}

int main() {
    makeVal();
    long long A, B; cin >> A >> B;
    int lenA = makeBin(A, 1);
    int lenB = makeBin(B, 2);

    cout << lenA << " " << lenB << "\n";
    for(int i = 0; i < lenA; i++)
        cout << binA[i] << " ";
    cout<<"\n";

    for(int i = 0; i < lenB; i++)
        cout << binB[i] << " ";
    cout<<"\n";

    for(int i = 0; i < 64; i++) {
        cout << val[i] << "\n";
    }

    long long solve1 = ;
    long long solve2;

    for(int i = 63; i > 0; i--) {

    }

    return 0;
}