/*#include <iostream>
#include <stdio.h>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    priority_queue<double> queue;

    double score;
    while(N--) {
        cin >> score;

        if(queue.empty() || queue.top() >= score || queue.size() <= 7) {
            queue.push(score);

        }

        if(queue.size() > 7) {
            queue.pop();
        }
    }

    double arr[7];
    for(int i = 6; i >= 0; i--) {
        arr[i] = queue.top();
        queue.pop();
    }

    for(int i = 0; i < 7; i++) {
        printf("%.3lf\n", arr[i]);
    }

    return 0;
}*/ //priority queue 6452ms

#include <stdio.h>

short arr[100005];
int main() {
    int t;
    scanf("%d", &t);

    double score;
    while(t--) {
        scanf("%lf", &score);

        int intScore = (int)(score * 1000);

        arr[intScore]++;
    }

    int cnt = 0;
    for(int i = 0; i <= 100000; i++) {
        if(arr[i] != 0) {
            for(int j = 0; j < arr[i]; j++) {
                if(cnt == 7) return 0;

                double dbScore = i / (double)1000;
                printf("%.3lf\n", dbScore);
                cnt++;
            }
        }
        else continue;
    }

    return 0;
} //Radix Sort 2608ms