#include <iostream>
#include <cmath>

using namespace std;

int t;

int n;

int a;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        long long sum = 0;

        for(int j = 0; j < n; j++){
            cin >> a;

            sum += a;
        }

        cout << ((sqrt(sum) == floor(sqrt(sum))) ? "YES" : "NO") << '\n';
    }

    return 0;
}