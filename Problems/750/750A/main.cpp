#include <iostream>

using namespace std;

int n, k;

int res = 0;

int main(){
    cin >> n >> k;

    for(int i = 1, t = k; i <= n; i++){
        if(t + 5 * i <= 240){
            t += 5 * i;
            res++;
        }
        else break;
    }

    cout << res;

    return 0;
}