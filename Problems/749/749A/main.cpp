#include <iostream>

using namespace std;

int n;

int main(){
    cin >> n;

    cout << n / 2 << '\n';

    for(int i = 0; i < n / 2 - 1; i++) cout << 2 << ' ';

    cout << ((n % 2) ? 3 : 2);

    return 0;
}