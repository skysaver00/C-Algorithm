#include <iostream>
using namespace std;

int num[10];
bool t_f[10];
int perArr[10];

void print(int max) {
    for(int i = 0; i < max; i++) {
        cout << perArr[i] << " ";
    }cout << "\n";
}

void Permutation(int max, int size, int at) {
    if(max == at) print(max);

    for(int i = 0; i < size; i++) {
        if(t_f[i]) continue;
        perArr[at] = num[i];
        t_f[i] = true;
        Permutation(max, size, at);
        t_f[i] = false;
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