#include <iostream>

using namespace std;

int t;

int n;

int a[40];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        int d[2] = { 0, 0 };

        for(int j = 0; j < n; j++){
            if(a[j] % 2 != j % 2) d[a[j] % 2]++;
        }

        cout << ((d[0] != d[1]) ? -1 : d[0]) << '\n';
    }

    return 0;
}