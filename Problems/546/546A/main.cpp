#include <iostream>

using namespace std;

int k, n, w;

int main(){
    cin >> k >> n >> w;

    cout << max(0, w * (w + 1) / 2 * k - n);

    return 0;
}