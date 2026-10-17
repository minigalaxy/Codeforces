#include <iostream>

using namespace std;

int n;

int d[4] = { 100, 20, 10, 5};

int res = 0;

int main(){
    cin >> n;

    for(int i = 0; i < 4; i++){
        res += n / d[i];
        n %= d[i];
    }

    cout << res + n;

    return 0;
}