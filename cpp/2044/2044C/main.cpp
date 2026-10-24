#include <iostream>

using namespace std;

int t;

int m, a, b, c;

int main(){
    cin >> t;

    while(t--){
        cin >> m >> a >> b >> c;

        cout << min(m, a) + min(m, b) + min(2 * m - min(m, a) - min(m, b), c) << '\n';
    }

    return 0;
}