#include <stdio.h>

int main() {
    int E, S, M;
    scanf("%d %d %d", &E, &S, &M);

    int vE = 1, vS = 1, vM = 1;

    int count = 0;
    while(E != vE || S != vS || M != vM) {
        if(vE == 15) vE = 1;
        if(vS == 28) vS = 1;
        if(vM == 19) vM = 1;

        
    }

    return 0;
}