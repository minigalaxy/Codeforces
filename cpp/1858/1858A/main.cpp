#include <iostream>

using namespace std;

int t;

int a, b, c;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b >> c;

        if(c % 2 == 0) cout << ((a > b) ? "First" : "Second");
        else cout << ((a >= b) ? "First" : "Second");

        cout << '\n';
    }

    return 0;
}