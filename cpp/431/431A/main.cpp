#include <iostream>

using namespace std;

int a[4];

string s;

int res = 0;

int main(){
    for(int i = 0; i < 4; i++) cin >> a[i];

    cin >> s;

    for(char c: s) res += a[c - '1'];

    cout << res;

    return 0;
}