#include <iostream>

using namespace std;

int t;

int a, b, c;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b >> c;

        if(a == b) cout << c;
        else if(b == c) cout << a;
        else cout << b;

        cout << '\n';
    }

    return 0;
}