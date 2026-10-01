#include <iostream>

using namespace std;

int n;

int a;

int res = 0;

int main(){
    cin >> n;

    for(int i = 0, j = 0, k = 0; i < n; i++){
        cin >> a;

        if(a >= j) res = max(res, ++k);
        else k = 1;

        j = a;
    }

    cout << res;

    return 0;
}