#include <iostream>

using namespace std;

int t;

int a, b, c;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b >> c;

        cout << ((a + b >= 10 || a + c >= 10 || b + c >= 10) ? "YES" : "NO") << '\n';
    }

    return 0;
}