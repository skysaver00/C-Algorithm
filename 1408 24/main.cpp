#include <stdio.h>
struct time {
    int hour;
    int min;
    int sec;
};

int main() {
    struct time right_now;
    struct time mission_start;

    scanf("%d:%d:%d", &right_now.hour, &right_now.min, &right_now.sec);
    scanf("%d:%d:%d", &mission_start.hour, &mission_start.min, &mission_start.sec);

    struct time left;

    left.sec = mission_start.sec - right_now.sec;

    if(left.sec < 0) {
        left.sec += 60;
        mission_start.min--;
    }

    if(mission_start.min < 0) {
        mission_start.min += 60;
        mission_start.hour--;
    }

    left.min = mission_start.min - right_now.min;

    if(left.min < 0) {
        left.min += 60;
        mission_start.hour--;
    }

    left.hour = mission_start.hour - right_now.hour;

    if(left.hour < 0) {
        left.hour += 24;
    }

    printf("%02d:%02d:%02d\n", left.hour, left.min, left.sec);

    return 0;
}