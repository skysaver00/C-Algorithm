#include <iostream>
using namespace std;

int num[10];
int perArr[10];

void print() {

}

void Permutation(int now, int size, int at) {
    if(now == size) print();

    for(int i = now; i < size; i++) {
        
    }
}

int main() {
    int m, n;
    cin >> m >> n;

    for(int i = 0; i < m; i++)
        num[i] = i + 1;

    Permutation(0, n, 0);

    return 0l;
}