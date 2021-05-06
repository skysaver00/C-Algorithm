#include <iostream>
using namespace std;
int hello[21][100];

int health[21];
int happy[21];

int max(int i , int j) {
    return i > j ? i : j;
}

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
        for(int j = 0; j < 100; j++) {
            if(hello[i - 1][j] != 0) {
                hello[i][j] = hello[i - 1][j];

                if(j + health[i] < 100) {
                    hello[i][j + health[i]] = hello[i - 1][j] + happy[i];
                }
            }
        }
    }

    int biggest = 0;
    for(int i = 0; i <= 20; i++) {
        for(int j = 0; j <= 100; j++) {
            if (hello[i][j] != 0) {
                if (biggest < hello[i][j]) biggest = hello[i][j];
            }
        }
    }

    printf("%d\n", biggest);

    return 0;
}
