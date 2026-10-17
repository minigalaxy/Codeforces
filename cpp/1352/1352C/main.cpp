#include <iostream>

using namespace std;

int t;

int n, k;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k;

        cout << k + ((k - 1) / (n - 1)) << '\n';
    }

    return 0;
}