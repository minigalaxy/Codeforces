#include <iostream>

using namespace std;

int t;

int n;

int a;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        int res = 2147483647;

        for(int j = 0; j < n; j++){
            cin >> a;
            
            res &= a;
        }

        cout << res << '\n';
    }

    return 0;
}