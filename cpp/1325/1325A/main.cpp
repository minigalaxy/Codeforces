#include <iostream>

using namespace std;

int t;

int x;

int main(){
    cin >> t;

    while(t--){
        cin >> x;

        cout << 1 << ' ' << x - 1 << '\n';
    }

    return 0;
}