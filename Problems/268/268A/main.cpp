#include <iostream>

using namespace std;

int n;

int h[30], a[30];

int res = 0;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++) cin >> h[i] >> a[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                if(h[i] == a[j]) res++;
            }
        }
    }

    cout << res;

    return 0;
}