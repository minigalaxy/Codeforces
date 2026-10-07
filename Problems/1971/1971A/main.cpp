#include <iostream>

using namespace std;

int t;

int x, y;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> x >> y;

        cout << min(x, y) << ' ' << max(x, y) << '\n';
    }

    return 0;
}