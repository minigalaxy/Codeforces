#include <iostream>

using namespace std;

int n, k, l, c, d, p, nl, np;

int main(){
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    cout << min(min(k * l / n / nl, c * d / n), p / n / np);

    return 0;
}