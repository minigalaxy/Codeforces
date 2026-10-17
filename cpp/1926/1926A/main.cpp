#include <iostream>
#include <algorithm>

using namespace std;

int t;

string s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> s;

        sort(s.begin(), s.end());

        cout << s[2] << '\n';
    }

    return 0;
}