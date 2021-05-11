#include <stdio.h>
#include <algorithm>
using namespace std;
int nrr[1000001];
int mrr[1000001];
int sumarr[2000001];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%d", &nrr[i]);
    for(int i = 0; i < m; i++) scanf("%d", &mrr[i]);

    sort(nrr, nrr + n);
    sort(mrr, mrr + m);

    int i, j, k;
    i = j = k = 0;

    while(i < n && j < m) {
        //printf("%d %d %d\n", i, j, k);
        if(nrr[i] < mrr[j]) {
            sumarr[k] = nrr[i];
            i++, k++;
        } else if(nrr[i] > mrr[j]) {
            sumarr[k] = mrr[j];
            j++, k++;
        } else {
            sumarr[k] = nrr[i];
            i++, k++;
            sumarr[k] = mrr[j];
            j++, k++;
        }
    }

    if(i < n) {
        for(int l = i; l < n; l++) {
            sumarr[k] = nrr[l];
            k++;
        }
    } else if(j < m) {
        for(int l = j; l < m; l++) {
            sumarr[k] = mrr[l];
            k++;
        }
    }

    for(int l = 0; l < k; l++) {
        printf("%d ", sumarr[l]);
    }printf("\n");

    return 0;
}