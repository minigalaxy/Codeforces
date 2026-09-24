#include <iostream>

using namespace std;

int a, b, res = 0;

int main(){
    cin >> a >> b;

    while(a <= b) res++, a *= 3, b *= 2;

    cout << res;

    return 0;
}