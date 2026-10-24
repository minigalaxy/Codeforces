#include <iostream>

using namespace std;

int t;

int n, k;

int a[50];

int main(){
    cin >> t;

    while(t--){
        cin >> n >> k;

        for(int i = 0; i < n; i++) cin >> a[i];

        int res = 0;

        for(int i = 0, gold = 0; i < n; i++){
            if(a[i] >= k) gold += a[i];
            else if(a[i] == 0 && gold > 0) gold--, res++;
        }

        cout << res << '\n';
    }

    return 0;
}