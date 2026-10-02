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

        for(int l = 0, r = n - 1; l < r; l++, r--){
            if(s[l] != s[r]) n -= 2;
            else break;
        }

        cout << n << '\n';
    }

    return 0;
}