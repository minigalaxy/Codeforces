#include <iostream>

using namespace std;

int n, m;

int main(){
    cin >> n >> m;

    int res = 0;

    while(n > 0){
        n--;
        res++;

        if(res % m == 0) n++;
    }

    cout << res;
}