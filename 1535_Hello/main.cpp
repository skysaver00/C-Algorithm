#include <iostream>
using namespace std;
int hello[21][100];

int health[21];
int happy[21];

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> health[i];
    }

    for(int i = 1; i <= n; i++) {
        cin >> happy[i];
    }

    hello[1][health[1]] = happy[1];

    for(int i = 2; i <= n; i++) {
        
    }

    return 0;
}
