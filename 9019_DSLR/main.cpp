#include <iostream>
#include <queue>
#include <cstring>
#include <string>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        int A, B;
        cin >> A >> B;

        queue<pair<int, string>> bfs;
        bool visit[10000] = {false};
        visit[A] = true;

        bfs.push(make_pair(A, ""));
        while(!bfs.empty()) {
            int num = bfs.front().first;
            string ins = bfs.front().second;
            bfs.pop();

            if(num == B) {
                cout << ins;
                break;
            }

            int numAlt;
            numAlt = (num * 2) % 10000; //D
            if(!visit[numAlt]) {
                bfs.push(make_pair(numAlt, ins + "D"));
                visit[numAlt] = true;
            }

            numAlt = num - 1; //S
            if(num == 0) numAlt = 9999;
            if(!visit[numAlt]) {
                bfs.push(make_pair(numAlt, ins + "S"));
                visit[numAlt] = true;
            }

            numAlt = (num % 1000) * 10 + num / 1000;
            if(!visit[numAlt]) {
                bfs.push(make_pair(numAlt, ins + "L"));
                visit[numAlt] = true;
            }

            numAlt = (num / 10) + (num % 10) * 1000;
            if(!visit[numAlt]) {
                bfs.push(make_pair(numAlt, ins + "R"));
                visit[numAlt] = true;
            }
        }

        cout << "\n";
    }
}