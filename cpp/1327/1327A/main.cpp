#include <iostream>

using namespace std;

int t;

long long n, k;

int main(){
    cin >> t;

    while(t--){
        cin >> n >> k;

        cout << ((n >= k * k && k % 2 == n % 2) ? "YES" : "NO") << '\n';
    }

    return 0;
}