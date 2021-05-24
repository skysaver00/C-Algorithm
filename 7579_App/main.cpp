#include <cstdio>

int mem[101];
int off[101];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        scanf("%d", &mem[i]);
    }

    for(int i = 0; i < n; i++) {
        scanf("%d", &off[i]);
    }
}