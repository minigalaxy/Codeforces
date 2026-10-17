#include <iostream>

using namespace std;

int t;

string s;

string a = "codeforces";

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> s;

        int res = 0;

        for(int j = 0; j < 10; j++){
            if(s[j] != a[j]) res++;
        }

        cout << res << '\n';
    }

    return 0;
}