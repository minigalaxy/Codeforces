#include <iostream>

using namespace std;

int t;

int s[4];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> s[0] >> s[1] >> s[2] >> s[3];

        cout << (((min(s[0], s[1]) < max(s[2], s[3])) && (min(s[2], s[3]) < max(s[0], s[1]))) ? "YES" : "NO") << '\n';
    }

    return 0;
}