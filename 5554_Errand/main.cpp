#include <iostream>
using namespace std;
int main() {
    int sec;
    int time = 0;
    for(int i = 0; i < 4; i++) {
        cin >> sec;
        time += sec;
    }

    printf("%d\n%d\n", time / 60, time % 60);
}