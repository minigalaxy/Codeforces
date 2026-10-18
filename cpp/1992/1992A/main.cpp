#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n[3];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n[0] >> n[1] >> n[2];

        for(int j = 0; j < 5; j++) (*min_element(n, n + 3))++;

        cout << n[0] * n[1] * n[2] << '\n';
    }

    return 0;
}