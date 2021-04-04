#include <iostream>
#include <string>
using namespace std;

int alphabet[27];
string letter[27];

int main() {
    for(int i = 0; i < 26; i++) {
        letter[i] = (char) (0x41 + i);
        letter[i] += (char) (0x41 + i);
    }

    string str;
    cin >> str;

    int len = str.length();
    for(int i = 0; i < len; i++) {
        alphabet[str.at(i) - 0x41]++;
    }

    int check = 0;
    for(int i = 0 ; i < 26; i++) {
        if(alphabet[i] % 2 != 0) check++;
        if(check == 2) {
            cout << "I'm Sorry Hansoo" << "\n";
            return 0;
        }
    }

    string make;
    int ins = 0;
    for(int i = 0; i < 26; i++) {
        if(alphabet[i] >= 2) {
            make.insert(ins, letter[i]);
            alphabet[i] -= 2;
            ins++;
            i--;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(alphabet[i] == 1) {
            string str2;
            str2 = (char) (0x41 + i);
            make.insert(ins, str2);
        }
    }

    cout << make << endl;
    return 0;
}