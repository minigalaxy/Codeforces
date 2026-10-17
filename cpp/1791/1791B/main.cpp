#include <iostream>

using namespace std;

int t;

int n;

string s;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        cin >> s;

        int x = 0, y = 0;

        bool res = false;

        for(int j = 0; j < n; j++){
            if(s[j] == 'L') x--;
            else if(s[j] == 'R') x++;
            else if(s[j] == 'D') y--;
            else y++;

            if(x == 1 && y == 1) res = true;
        }

        cout << ((res) ? "YES" : "NO") << '\n';
    }

    return 0;
}