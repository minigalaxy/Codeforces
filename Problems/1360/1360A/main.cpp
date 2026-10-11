#include <iostream>

using namespace std;

int t;

int a, b;

int sq(int x) { return x * x; }

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b;

        cout << sq(max(min(a, b) * 2, max(a, b))) << '\n';
    }

    return 0;
}