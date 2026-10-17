#include <iostream>

using namespace std;

int t;

int a, b, c, n;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b >> c >> n;

        int ex = n - (max(a, max(b, c)) * 3 - a - b - c);

        cout << ((ex >= 0 && ex % 3 == 0) ? "YES" : "NO") << '\n';
    }

    return 0;
}