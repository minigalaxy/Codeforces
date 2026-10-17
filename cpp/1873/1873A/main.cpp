#include <iostream>

using namespace std;

int t;

string s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> s;

        cout << ((s == "bac" || s == "acb" || s == "cba" || s == "abc") ? "YES" : "NO") << '\n';
    }

    return 0;
}