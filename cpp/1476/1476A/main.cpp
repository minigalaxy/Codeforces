#include <iostream>

using namespace std;

int t;

long long n, k;

int main(){
    cin >> t;

    while(t--){
        cin >> n >> k;

        k *= (n + k - 1) / k;

        cout << (k + n - 1) / n << '\n';
    }

    return 0;
}