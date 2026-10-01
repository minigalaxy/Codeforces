#include <iostream>

using namespace std;

int n;

int p;

int res = 0;

int main(){
    cin >> n;

    cin >> p;

    for(int i = 1, h = p, l = p; i < n; i++){
        cin >> p;

        if(p > h){
            h = p;
            res++;
        }
        if(p < l){
            l = p;
            res++;
        }
    }

    cout << res;

    return 0;
}