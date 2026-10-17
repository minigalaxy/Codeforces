#include <iostream>

using namespace std;

int n;

string s;

int res = 0;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;

        if(s[0] == 'T') res += 4;
        else if(s[0] == 'C') res += 6;
        else if(s[0] == 'O') res += 8;
        else if(s[0] == 'D') res += 12;
        else res += 20;
    }

    cout << res;

    return 0;
}