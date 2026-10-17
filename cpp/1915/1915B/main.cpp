#include <iostream>

using namespace std;

int t;

string s[3];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < 3; j++) cin >> s[j];

        for(int j = 0; j < 3; j++){
            if(s[j].find('?') != string::npos) cout << char('A' + 'B' + 'C' - (s[j][0] + s[j][1] + s[j][2] - '?')) << '\n';
        }
    }

    return 0;
}