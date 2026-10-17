#include <iostream>

using namespace std;

int t;

string s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> s;

        cout << ((s.size() % 2 == 0 && s.substr(0, s.size() / 2) == s.substr(s.size() / 2, s.size() / 2)) ? "YES" : "NO") << '\n';
    }

    return 0;
}