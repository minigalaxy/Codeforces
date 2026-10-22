#include <iostream>

using namespace std;

int n;

int res = 0;

int main(){
    cin >> n;

    for(int i = 2; i <= n; i++){
        if(n % i == 0) res++;
    }

    cout << res;

    return 0;
}