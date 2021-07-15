#include <iostream>
using namespace std;

int binA[66];
int binB[66];

int makeBin(long long i) {
    int cnt = 0;
    while(i != 0) {
        if(i % 2 == 1) binA[cnt] = 1;
        cnt++;
        i /= 2;
    }

    return cnt;
}

int main() {
    long long A, B; cin >> A >> B;
    int lenA = makeBin(A);
    int lenB = makeBin(B);

    cout << lenA << " " << lenB << "\n";
    for(int i = 0; i < lenA; i++)
        cout << binA[i] << " ";
    cout<<"\n";

    for(int i = 0; i < lenA; i++)
        cout << binB[i] << " ";
    cout<<"\n";

    return 0;
}