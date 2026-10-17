#include <iostream>

using namespace std;

int t;

int n, a, b;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> a >> b;

        cout << min(a * n, a * (n % 2) + b * (n / 2)) << '\n';
    }

    return 0;
}