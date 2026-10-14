#include <iostream>

using namespace std;

int n, t;

int main(){
    cin >> n >> t;

    if(n == 1 && t == 10) cout << -1;
    else {
        cout << t;

        for(int i = 1 + t / 10; i < n; i++) cout << '0';
    }

    return 0;
}