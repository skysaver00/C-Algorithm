#include <stdio.h>
#include <string.h>

struct profile {
    char name[21];
    short day;
    short month;
    short year;
};

int main() {
    int t;
    struct profile birthday[101];

    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        scanf("%s %d %d %d", birthday[i].name, &birthday[i].day, &birthday[i].month, &birthday[i].year);
    }
    struct profile oldest;
    struct profile youngest;

    oldest.year = 9999, oldest.month = 99, oldest.day = 99;
    youngest.year = -9999, youngest.month = -99, youngest.day = -99;

    for(int i = 0; i < t; i++) {
        if(oldest.year > birthday[i].year) {
            memcpy(&oldest, &birthday[i], sizeof(struct profile));
        }
        else if(oldest.year == birthday[i].year) {
            if(oldest.month > birthday[i].month) {
                memcpy(&oldest, &birthday[i], sizeof(struct profile));
            }
            else if(oldest.month == birthday[i].month) {
                if(oldest.day > birthday[i].day) memcpy(&oldest, &birthday[i], sizeof(struct profile));
            }
        }

        if(youngest.year < birthday[i].year) {
            memcpy(&youngest, &birthday[i], sizeof(struct profile));
        }
        else if(youngest.year == birthday[i].year) {
            if(youngest.month < birthday[i].month) {
                memcpy(&youngest, &birthday[i], sizeof(struct profile));
            }
            else if(youngest.month == birthday[i].month) {
                if(youngest.day > birthday[i].day) memcpy(&youngest, &birthday[i], sizeof(struct profile));
            }
        }
    }

    printf("%s\n%s\n", youngest.name, oldest.name);
    return 0;
}