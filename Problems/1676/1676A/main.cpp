#include <iostream>

using namespace std;

int t;

string s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> s;

        cout << ((s[0] + s[1] + s[2] == s[3] + s[4] + s[5]) ? "YES" : "NO") << '\n';
    }

    return 0;
}