#include <stdio.h>
#include <string.h>
char arr[51];

int main() {
    int n;
    scanf("%d", &n);
    scanf("%s", arr);

    int len = strlen(arr);

    int ns = 0;
    int nl = 0;
    for(int i = 0; i < len; i++) {
        if(arr[i] == 'S') ns++;
        else if(arr[i] == 'L') nl++;
    }
    nl /= 2;

    printf("%d\n", ns + nl + );

    return 0;
}