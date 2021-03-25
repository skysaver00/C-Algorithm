#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;
queue<pair<int, string>> bfs;
int A, B;

void startBFS(int num) {
    int numAlt = (num * 2) % 10000;
    bfs.push(make_pair(numAlt, "D"));

    numAlt = num - 1;
    if(num == 0) numAlt = 9999;
    bfs.push(make_pair(numAlt, "S"));

    numAlt = num % 1000;
    numAlt *= 10;
    numAlt += num / 1000;
    bfs.push(make_pair(numAlt, "L"));

    numAlt = num / 10;
    numAlt += (num % 10) * 1000;
    bfs.push(make_pair(numAlt, "R"));

    while(!bfs.empty()) {
        int number = bfs.front().first;
        string ins = bfs.front().second;
        bfs.pop();

        for(int i = 0; i < 4; i++) {
            if(i == 0) {
                
            }
            else if(i == 1) {

            }
            else if(i == 2) {

            }
            else {

            }
        }
    }
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        cin >> A >> B;

        startBFS(A);
    }
}