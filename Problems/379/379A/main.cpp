#include <iostream>

using namespace std;

int a, b;

int res = 0;

int main(){
    cin >> a >> b;

    res += a;

    while(a >= b){
        res += a / b;
        a = a / b + a % b;
    }

    cout << res;

    return 0;
}