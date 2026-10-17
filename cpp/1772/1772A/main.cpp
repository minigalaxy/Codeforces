#include <iostream>

using namespace std;

int t;

string s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> s;

        cout << s[0] - '0' + s[2] - '0' << '\n';
    }

    return 0;
}