#include <iostream>

using namespace std;

int t;

int a, b;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b;

        cout << (abs(a - b) + 9) / 10 << '\n';
    }

    return 0;
}