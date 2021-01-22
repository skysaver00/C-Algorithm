#include <stdio.h>
#include <math.h>

int arr[6][6];

int main() {
    char loc[2];
    scanf("%s", loc);

    int firstx, firsty;
    firstx = loc[0];
    firsty = loc[1];
    int prex, prey;
    int x, y;
    prex = loc[0];
    prey = loc[1];

    arr[prex - 65][prey - 49]++;

    int flag = 0;

    for(int i = 1; i <= 35; i++) {
        scanf("%s", loc);

        x = loc[0];
        y = loc[1];

        if(arr[x - 65][y - 49] != 0) flag = 1;
        else arr[x - 65][y - 49]++;

        int _x = abs(x - prex);
        int _y = abs(y - prey);

        if(_x + _y == 3 || (_x != 3 || _y != 3)) {
            prex = x;
            prey = y;
        }
        else {
            flag = 1;
        }

        printf("%d\n", flag);
    }

    firstx = abs(x - firstx);
    firsty = abs(y - firsty);
    if(firstx + firsty != 3 || (firstx == 3 || firsty == 3)) flag = 1;

    if(flag == 0) printf("Valid\n");
    else printf("Invalid\n");

    return 0;
}