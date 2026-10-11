#include <iostream>

using namespace std;

string s;

int m;

int l, r;

int c[100'000] = { 0, };

int main(){
    cin >> s;

    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == s[i + 1]) c[i + 1]++;
        c[i + 1] += c[i];
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> l >> r;

        cout << c[r - 1] - c[l - 1] << '\n';
    }

    return 0;
}