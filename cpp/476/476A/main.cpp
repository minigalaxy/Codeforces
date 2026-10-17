#include <iostream>

using namespace std;

int n, m;

int x;

int main(){
    cin >> n >> m;

    x = (n + 2 * m - 1) / (2 * m);

    cout << ((m * x <= n && n <= 2 * m * x && x > 0) ? m * x : -1);

    return 0;
}