#include <iostream>

using namespace std;

int t;

int a, b;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b;

        if(a % b == 0) cout << 0 << '\n';
        else cout << b - (a % b) << '\n';
    }

    return 0;
}

