#include <cstdio>

int num[50];
int res[50];

void sort(int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; i < n; i++) {
            if(num[i] > num[j]) 
        }
    }
}

int main() {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%d", &num[i]);
    sort(n);
}