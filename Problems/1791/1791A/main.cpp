#include <iostream>
#include <algorithm>

using namespace std;

int t;

char c;

string s = "codeforces";

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> c;

        cout << ((count(s.begin(), s.end(), c) > 0) ? "YES" : "NO") << '\n';
    }

    return 0;
}