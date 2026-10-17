#include <iostream>

using namespace std;

int t;

int n;

int a[100];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        for(int j = 0; j < n; j++) cout << n + 1 - a[j] << ' ';

        cout << '\n';
    }

    return 0;
}