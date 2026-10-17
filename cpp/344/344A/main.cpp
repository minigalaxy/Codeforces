#include <iostream>

using namespace std;

int n;

string m, t;

int res = 0;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> t;

        m += t;
    }

    for(int i = 0; i < n * 2 - 1; i++){
        if(m[i] == m[i + 1]) res++;
    }

    cout << res + 1;

    return 0;
}