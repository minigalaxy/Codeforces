#include <iostream>

using namespace std;

int n;

int a;

int res = 0;

int main(){
    cin >> n;

    for(int i = 0, p = 0, c = 0; i < n; i++){
        cin >> a;

        if(a > p) res = max(res, ++c);
        else c = 1;

        p = a;
    }

    cout << res;

    return 0;
}