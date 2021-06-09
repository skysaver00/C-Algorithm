#include <iostream>
#include <deque>
#include <string>
using namespace std;

string P;
deque<int> deq;
string str;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--) {
        cin >> P;
        int n; cin >> n;
        cin >> str;

        int len = str.length();
        int val = 0;
        for(int i = 0; i < len; i++) {
            if(str.at(i) == ',' || str.at(i) == ']') {
                deq.push_back(val);
                val = 0;
            } else if(str.at(i) == '[') {} else {
                val *= 10;
                val += str.at(i) - 0x30;
            }
        }

        len = P.length();
        int fb = 0;
        for(int i = 0; i < len; i++) {
            if(P.at(i) == 'R') {
                if(fb == 0) fb = 1;
                else fb = 0;
            } else {
                int sz = deq.size();

                if(sz > 0) {
                    if (fb == 0) deq.pop_front();
                    else deq.pop_back();
                }
            }
        }

        int sz = deq.size();
        if(sz == 0) {
            cout << "error\n";
            continue;
        }

        cout << "[";
        for(int i = 0; i < sz; i++) {
            if(fb == 0) {
                cout << deq.front();
                deq.pop_front();
            } else {
                cout << deq.back();
                deq.pop_back();
            }
            if(i != sz - 1) cout << ",";
        }
        cout << "]\n";
        P.clear();
        str.clear();
    }
    return 0;
}