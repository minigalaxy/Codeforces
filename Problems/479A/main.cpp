#include <iostream>

using namespace std;

int a, b, c;

int main(){
    cin >> a >> b >> c;

    if(a == 1) cout << max((a + b) * c, a + b + c);
    else if(b == 1) cout << max((a + b) * c, a * (b + c));
    else cout << max(a * (b + c), a * b * c);

    return 0;
}