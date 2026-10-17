#include <iostream>
#include <algorithm>

using namespace std;

int n, a, b, c;

int res = 0;

int main(){
    cin >> n >> a >> b >> c;

    for(int i = 0; i * a <= n; i++){
        n -= i * a;

        for(int j = 0; j * b <= n; j++){
            n -= j * b;

            if(n % c == 0) res = max(res, i + j + n / c);

            n += j * b;
        }

        n += i * a;
    }

    cout << res;

    return 0;
}