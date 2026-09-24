#include <iostream>

using namespace std;

int n;

string s;

int res = 0;

int main(){
    cin >> n >> s;

    for(int i = 1; i < n; i++){
        if(s[i] == s[i - 1]) res++;
    }

    cout << res;

    return 0;
}