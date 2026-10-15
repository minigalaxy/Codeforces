#include <iostream>

using namespace std;

int t;

int a;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a;

        cout << ((a >= 60 && 360 % (180 - a) == 0) ? "YES" : "NO") << '\n';
    }

    return 0;
}