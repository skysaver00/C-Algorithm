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
            } else {
                val *= 10;
                val += str.at(i) - 0x30;
            }
        }

        int sz = deq.size();
        for(int i = 0; i < sz; i++) {
            cout << deq.front() << endl;
            deq.pop_front();
        }
    }
}