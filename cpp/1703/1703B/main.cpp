#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

string s;

bool b[26];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        fill(b, b + 26, false);

        cin >> n;

        cin >> s;

        int res = n;

        for(char c: s){
            if(!b[c - 'A']){
                res++;
                b[c - 'A'] = true;
            }
        }

        cout << res << '\n';
    }

    return 0;
}