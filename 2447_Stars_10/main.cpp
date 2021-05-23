#include <stdio.h>
#include <math.h>
void print(int n, int t) {
    if(t == 5) {
        int k = pow(3, n);
        for(int i = 0; i < k; i++) {
            for(int j = 0; j < k; j++) {
                
            }
        }
    }
    if(n == 1) {
    }
    else {
        for(int i = 0; i < 3; i++) {
            for(int j = 1; j <= 3; j++) {
                print(n - 1, (i * 3) + j);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    print(n, 1);
}