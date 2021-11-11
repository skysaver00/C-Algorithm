#include <stdio.h>
int queue[100001];

int main() {
    int front = 0;
    int rear = 0;

    while(1) {
        char str[10];
        printf("Push, Pop, Front, Exit: ");
        scanf("%s", str);

        if(str[0] == 'P' && str[1] == 'u') {
            int value;
            scanf("%d", &value);
            if(front > 100000 || rear > 100000) printf("Queue is full!\n");
            else {
                queue[rear++] = value;
            }
        } else if(str[0] == 'P' && str[1] == 'o') {
            if(front == rear) printf("Queue is empty!\n");
            else {
                printf("%d popped.\n", queue[front++]);
            }
        } else if(str[0] == 'F' && str[1] == 'r') {
            if(front == rear) printf("Queue is empty!\n");
            else {
                printf("%d\n", queue[front]);
            }
        } else if(str[0] == 'E' && str[1] == 'x') {
            break;
        } else {
            printf("Cannot understand Formula.\n");
        }
    }
}