#include <stdio.h>
int arr[10];
int ans[10];

//ignorant way
void combination() {
    for(int a = 0; a < 9; a++) {
        for(int b = a + 1; b < 9; b++) {
            for(int c = b + 1; c < 9; c++) {
                for(int d = c + 1; d < 9; d++) {
                    for(int e = d + 1; e < 9; e++) {
                        for(int f = e + 1; f < 9; f++) {
                            for(int g = f + 1; g < 9; g++) {
                                if(arr[a] + arr[b] + arr[c] + arr[d] + arr[e] + arr[f] + arr[g] == 100) {
                                    ans[0] = arr[a];
                                    ans[1] = arr[b];
                                    ans[2] = arr[c];
                                    ans[3] = arr[d];
                                    ans[4] = arr[e];
                                    ans[5] = arr[f];
                                    ans[6] = arr[g];

                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int main() {
    for(int i = 0; i < 9; i++) scanf("%d", &arr[i]);

    combination();

    for(int i = 0; i < 7; i++) printf("%d\n", ans[i]);

    return 0;
}