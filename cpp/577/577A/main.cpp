#include <iostream>
#include <vector>

using namespace std;

int n, x;

vector<int> d;

int res = 0;

int main(){
    cin >> n >> x;

    for(int i = 1; i <= n; i++){
        if(x % i == 0 && x / i <= n) res++;
    }

    cout << res;

    return 0;
}