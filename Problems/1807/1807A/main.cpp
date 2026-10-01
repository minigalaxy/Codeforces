#include <iostream>

using namespace std;

int t;

int a, b, c;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b >> c;

        if(a + b == c) cout << '+';
        else cout << '-';

        cout << '\n';
    }

    return 0;
}