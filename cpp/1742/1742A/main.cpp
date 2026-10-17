#include <iostream>

using namespace std;

int t;

int a, b, c;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b >> c;

        if(max(max(a, b), c) * 2 == a + b + c) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}