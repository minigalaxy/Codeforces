#include <iostream>

using namespace std;

int n;

string s;

bool a[26] = { false, };

int res = 0;

int main(){
    cin >> n >> s;

    for(int i = 0; i < n; i++){
        if(s[i] >= 'a') s[i] -= 'a';
        else s[i] -= 'A';

        if(!a[s[i]]){
            a[s[i]] = true;
            res++;
        }
    }

    cout << ((res == 26) ? "YES" : "NO");

    return 0;
}