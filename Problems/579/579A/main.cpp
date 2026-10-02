#include <iostream>

using namespace std;

int x;

int res = 0;

int main(){
    cin >> x;

    while(x > 0){
        if(x & 1 == 1) res++;

        x = x >> 1;
    }

    cout << res;
}