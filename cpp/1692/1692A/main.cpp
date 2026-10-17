#include <iostream>

using namespace std;

int t;

int a, b, c, d;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b >> c >> d;

        int res = 0;

        if(b > a) res++;
        if(c > a) res++;
        if(d > a) res++;

        cout << res << '\n';
    }

    return 0;
}