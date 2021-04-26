#include <cstdio>

int main() {
    int month, day;
    scanf("%d %d", &month, &day);

    if(month > 2) {
        printf("After\n");
    } else if(month >= 2) {
        if(day > 18) {
            printf("After\n");
        } else if(day == 18) {
            printf("Special\n");
        } else {
            printf("Before\n");
        }
    } else {
        printf("Before\n");
    }

    return 0;
}