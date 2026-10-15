#include <iostream>

using namespace std;

int t;

int l, r;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> l >> r;

        if(r / 2 >= l) cout << r / 2 << ' ' << r / 2 * 2 << '\n';
        else cout << -1 << ' ' << -1 << '\n';
    }

    return 0;
}