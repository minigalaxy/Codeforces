#include <iostream>

using namespace std;

int t;

int x, n;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> x >> n;

        cout << (n % 2) * x << '\n';
    }

    return 0;
}