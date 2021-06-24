#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    int val = 0;
    int all = 0;
    int len = s.length();

    while(len != 1) {
        string t;
        for(int i = 0; i < len; i++) {
            if(s.at(i) == '0') all++;
            else {
                t.push_back(s.at(i));
            }
        }
        int sz = t.size();
        s.clear();
        while(sz != 0) {
            int v = sz % 2;
            if(v == 0) s.push_back('0');
            else s.push_back('1');
            sz /= 2;
        }

        len = s.length();
        for(int i = 0; i < len / 2; i ++) {
            swap(s[i], s[len - i - 1]);
        }
        val++;
    }

    cout << val << all << "\n";

    vector<int> answer;
    answer.push_back(val);
    answer.push_back(all);
    return answer;
}