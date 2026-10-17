#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

string s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        cin >> s;

        s.erase(unique(s.begin(), s.end()), s.end());

        bool res = true;

        for(char c = 'A'; res && c <= 'Z'; c++){
            if(count(s.begin(), s.end(), c) > 1) res = false;
        }

        cout << ((res) ? "YES" : "NO") << '\n';
    }

    return 0;
}