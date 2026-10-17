#include <iostream>

using namespace std;

int n, h;

int a[1000];

int res = 0;

int main(){
    cin >> n >> h;

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++){
        if(a[i] > h) res += 2;
        else res++;
    }

    cout << res;

    return 0;
}