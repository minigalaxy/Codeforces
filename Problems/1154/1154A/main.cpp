#include <iostream>
#include <algorithm>

using namespace std;

int x[4];

int main(){
    cin >> x[0] >> x[1] >> x[2] >> x[3];

    sort(x, x + 4);

    cout << x[3] - x[0] << ' ' << x[3] - x[1] << ' ' << x[3] - x[2];

    return 0;
}