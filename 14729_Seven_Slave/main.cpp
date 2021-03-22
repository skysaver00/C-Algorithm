#include <iostream>
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
} //