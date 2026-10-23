#include <iostream>

using namespace std;

int t;

int a, b;

int main(){
    cin >> t;

    while(t--){
        cin >> a >> b;

        if(a < b) cout << (((b - a) % 2 == 0) ? 2 : 1) << '\n';
        else if(a > b) cout << (((a - b) % 2 == 0) ? 1 : 2) << '\n';
        else cout << 0 << '\n';
    }

    return 0;
}