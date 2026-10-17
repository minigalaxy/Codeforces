#include <iostream>

using namespace std;

int n;

int res = 0;

int main(){
    cin >> n;

    for(int i = 0, c = 0, e; i < n; i++){
        cin >> e;

        if(e == -1){
            if(c == 0) res++;
            else c--;
        }
        else c += e;
    }

    cout << res;

    return 0;
}