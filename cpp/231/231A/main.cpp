#include <iostream>

using namespace std;

int n;

int p, v, t;

int res = 0;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> p >> v >> t;

        if(p + v + t >= 2) res++;
    }

    cout << res;

    return 0;
}