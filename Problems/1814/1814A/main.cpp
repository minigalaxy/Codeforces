#include <iostream>

using namespace std;

int t;

long long n, k;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k;

        if(n % 2 == 0) cout << "YES" << '\n';
        else cout << ((k % 2 == 1 && n >= k) ? "YES" : "NO") << '\n';
    }

    return 0;
}