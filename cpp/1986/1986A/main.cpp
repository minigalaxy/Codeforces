#include <iostream>

using namespace std;

int t;

int x[3];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> x[0] >> x[1] >> x[2];

        cout << max(x[0], max(x[1], x[2])) - min(x[0], min(x[1], x[2])) << '\n';
    }

    return 0;
}