#include <stdio.h>
int stack[100001];

int main() {
    int now = -1;

    while(1) {
        char str[10];
        printf("Push, Pop, Top, Exit: ");
        scanf("%s", str);

        if (str[0] == 'P' && str[1] == 'u') {
            int value;
            scanf("%d", &value);
            if(now > 99999) printf("You cannot push. it's full\n");
            else {
                stack[++now] = value;
            }
        } else if (str[0] == 'P' && str[1] == 'o') {
            if(now == -1) printf("You cannot pop. its empty\n");
            else {
                printf("%d popped.\n", stack[now--]);
            }
        } else if (str[0] == 'T' && str[1] == 'o') {
            if(now == -1) printf("Empty\n");
            else {
                printf("%d\n", stack[now]);
            }
        } else if (str[0] == 'E' && str[1] == 'x') {
            break;
        } else {
            printf("Cannot understand the formula.\n");
        }
    }
    return 0;
}