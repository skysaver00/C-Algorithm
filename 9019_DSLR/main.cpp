#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <string>

using namespace std;
queue<pair<int, string>> bfs;
int A, B;

void ClearQueue(queue<pair<int, string>> &queue) {
    std::queue<pair<int, string>> empty;
    std::swap(queue, empty);
}

int startBFS(int num) {
    int numAlt = (num * 2) % 10000;
    if(numAlt == B) {
        cout << "D" << "\n";
        return 0;
    } else {
        bfs.push(make_pair(numAlt, "D"));
    }


    numAlt = num - 1;
    if(num == 0) numAlt = 9999;
    if(numAlt == B) {
        cout << "S" << "\n";
        return 0;
    } else {
        bfs.push(make_pair(numAlt, "S"));
    }

    numAlt = num % 1000;
    numAlt *= 10;
    numAlt += num / 1000;
    if(numAlt == B) {
        cout << "L" << "\n";
        return 0;
    } else {
        bfs.push(make_pair(numAlt, "L"));
    }

    numAlt = num / 10;
    numAlt += (num % 10) * 1000;
    if(numAlt == B) {
        cout << "R" << "\n";
        return 0;
    } else {
        bfs.push(make_pair(numAlt, "R"));
    }

    while(!bfs.empty()) {
        int number = bfs.front().first;
        string ins = bfs.front().second;
        bfs.pop();

        for(int i = 0; i < 4; i++) {
            int altNumber;
            if(i == 0) {
                string newIns = ins + "D";
                altNumber = (number * 2) % 10000;

                if(altNumber == B) {
                    cout << newIns << "\n";
                    return 0;
                } else {
                    bfs.push(make_pair(altNumber, newIns));
                }
            }
            else if(i == 1) {
                string newIns = ins + "S";
                altNumber = number - 1;
                if(number == 0) altNumber = 9999;

                if(altNumber == B) {
                    cout << newIns << "\n";
                    return 0;
                } else {
                    bfs.push(make_pair(altNumber, newIns));
                }
            }
            else if(i == 2) {
                string newIns = ins + "L";
                altNumber = number % 1000;
                altNumber *= 10;
                altNumber += number / 1000;

                if(altNumber == B) {
                    cout << newIns << "\n";
                    return 0;
                } else {
                    bfs.push(make_pair(altNumber, newIns));
                }
            }
            else {
                string newIns = ins + "R";
                altNumber = number / 10;
                altNumber += (number % 10) * 1000;

                if(altNumber == B) {
                    cout << newIns << "\n";
                    return 0;
                } else {
                    bfs.push(make_pair(altNumber, newIns));
                }
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

        ClearQueue(bfs);
    }
}