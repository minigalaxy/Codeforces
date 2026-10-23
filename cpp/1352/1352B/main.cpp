#include <iostream>

using namespace std;

int t;

long long n, k;

int main(){
    cin >> t;

    while(t--){
        cin >> n >> k;

        cout << (((k % 2 == 0 && n >= k * k + k && n % 2 == 0) || (k % 2 == 1 && n >= k * k && n % 2 == 1)) ? "YES" : "NO") << '\n';
    }

    return 0;
}