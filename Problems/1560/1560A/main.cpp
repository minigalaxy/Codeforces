#include <iostream>

using namespace std;

int t;

int k;

int l[1'000];

int main(){
    for(int i = 0, n = 1; i < 1'000; n++){
        if(n % 3 != 0 && n % 10 != 3) l[i++] = n;
    }

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> k;

        cout << l[k - 1] << '\n';
    }

    return 0;
}