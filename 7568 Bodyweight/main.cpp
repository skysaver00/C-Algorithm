#include <stdio.h>

struct body {
    int weight;
    int height;
};

int rank[1001];

int main() {
    struct body body[1001];


    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) scanf("%d %d", &body[i].weight, &body[i].height);
    for(int i = 0; i < N; i++) {
        int count = 0;

        for(int j = 0; j < N; j++) {
            if(body[i].weight < body[j].weight && body[i].height < body[j].height) count++;
        }
        rank[i] = count;
    }

    for(int i = 0; i < N; i++) {
        printf("%d ", rank[i] + 1);
    }
    printf("\n");

    return 0;
}