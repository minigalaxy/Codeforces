#include <iostream>

using namespace std;

int n;

int res = 1;

int main(){
    cin >> n;

    while(n - (res * (res + 1) / 2) >= 0) n -= res * (res + 1) / 2, res++;

    cout << res - 1;

    return 0;
}