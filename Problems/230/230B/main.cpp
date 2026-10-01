#include <iostream>
#include <cmath>

using namespace std;

int n;

long long x;

bool not_prime[1'000'001] = { true, true, };

int main(){
    for(long long i = 2; i <= 1'000'000; i++){
        for(long long j = 2; i * j <= 1'000'000; j++){
            not_prime[i * j] = true;
        }
    }

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        
        cout << ((int(sqrt(x)) == sqrt(x) && !not_prime[int(sqrt(x))]) ? "YES" : "NO") << '\n';
    }

    return 0;
}