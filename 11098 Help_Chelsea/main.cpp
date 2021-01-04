#include <stdio.h>
#include <string.h>

int value[101];
char name[101][21];

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int p;
        scanf("%d", &p);

        for(int j = 0; j < p; j++) scanf("%d %s", &value[j], name[j]);

        int transfer = -99999999;
        char transfer_name[21];
        for(int j = 0; j < p; j++) {
            if(value[j] > transfer) {
                transfer = value[j];
                strcpy(transfer_name, name[j]);
            }
        }

        printf("%s\n", transfer_name);
    }


    return 0;
}