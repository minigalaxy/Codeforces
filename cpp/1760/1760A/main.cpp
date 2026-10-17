#include <iostream>
#include <algorithm>

using namespace std;

int t;

int x[3];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> x[0] >> x[1] >> x[2];

        sort(x, x + 3);

        cout << x[1] << '\n';
    }

    return 0;
}