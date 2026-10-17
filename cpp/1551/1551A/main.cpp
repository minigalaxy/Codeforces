#include <iostream>

using namespace std;

int t;

int n;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        cout << n / 3 + (n % 3) % 2 << ' ' << n / 3 + (n % 3) / 2 << '\n';
    }

    return 0;
}