#include <stdio.h>
int arr[101][101];

bool vertical(int n) {

}

bool horizontal(int n) {

}

bool diagonal(int n) {

}

int main() {
    int t; scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        for(int j = 0; j < t; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    bool first = vertical(t);
    bool second = horizontal(t);
    bool third = diagonal(t);
}