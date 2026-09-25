#include <iostream>

using namespace std;

int n;

int a, b;

int res = 0;

int main(){
    cin >> n;

    for(int i = 0, c = 0; i < n; i++){
        cin >> a >> b;

        c = c - a + b;

        res = max(res, c);
    }

    cout << res;

    return 0;
}