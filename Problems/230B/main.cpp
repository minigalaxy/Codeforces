#include <iostream>
#include <cmath>

using namespace std;

int n;

long long x;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;

        cout << ((sqrt(x) == int(sqrt(x)) && x > 1) ? "YES" : "NO") << '\n';
    }

    return 0;
}