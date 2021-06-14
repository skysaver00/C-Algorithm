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
        else if(arr[i] == 'L' && arr[i + 1] == 'L') {
            i += 1;
            nl++;
        }
    }
    if(nl != 0)printf("%d\n", ns + nl + 1);
    else printf("%d\n", ns);
    return 0;
}