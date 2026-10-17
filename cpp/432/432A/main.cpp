#include <iostream>

using namespace std;

int n, k;

int y;

int res = 0;

int main(){
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> y;

        if(y + k <= 5) res++;
    }

    cout << res / 3;

    return 0;
}