#include <stdio.h>
#include <string.h>
int queue[2000002];
int fr = 0;
int ba = 0;

void push(int a) {
    queue[ba] = a;
    ba++;
}

int pop() {
    if(fr == ba) return -1;
    else {
        fr++;
        return queue[fr - 1];
    }
}

int front() {
    if(fr == ba) return -1;
    else {
        return queue[fr];
    }
}

int back() {
    if(fr == ba) return -1;
    else {
        return queue[ba - 1];
    }
}

int size() {
    return ba - fr;
}

int empty() {
    if(ba - fr > 0) {
        return 0;
    }
    else return 1;
}

int main() {
    int t;
    scanf("%d", &t);

    char order[7];
    int num;

    int val;
    for(int i = 0; i < t; i++) {
        scanf("%s", order);

        if(strcmp(order, "push") == 0) {
            scanf("%d", &num);
            push(num);
        }
        else if(strcmp(order, "pop") == 0) {
            val = pop();
            printf("%d\n", val);
        }
        else if(strcmp(order, "front") == 0 ) {
            val = front();
            printf("%d\n", val);
        }
        else if(strcmp(order, "back") == 0) {
            val = back();
            printf("%d\n", val);
        }
        else if(strcmp(order, "size") == 0) {
            val = size();
            printf("%d\n", val);
        }
        else if(strcmp(order, "empty") == 0) {
            val = empty();
            printf("%d\n", val);
        }
    }

    return 0;
}