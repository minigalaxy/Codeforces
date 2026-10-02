#include <iostream>

using namespace std;

int n, m, a, b;

int main(){
    cin >> n >> m >> a >> b;

    cout << min(n * a, min(((n + m - 1) / m) * b, (n / m) * b + (n % m) * a));

    return 0;
}