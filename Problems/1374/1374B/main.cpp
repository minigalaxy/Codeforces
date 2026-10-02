#include <iostream>

using namespace std;

int t;

int n;

int main(){
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;

        int res = 0;

        while(n > 1){
            if(n % 6 == 0) n /= 6;
            else if(n % 3 == 0) n = n << 1;
            else break;

            res++;
        }

        if(n > 1) cout << -1;
        else cout << res;

        cout << '\n';
    }
}