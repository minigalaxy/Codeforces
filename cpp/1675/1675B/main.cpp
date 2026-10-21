#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

int a[30];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        int res = 0;

        for(int j = 0; j < n - 1; j++){
            for(int k = j; k > -1; k--){
                while(a[k] >= a[k + 1] && a[k] > 0) a[k] = (a[k] >> 1), res++;
            }
        }

        cout << ((count(a, a + n, 0) < 2) ? res : -1) << '\n';
    }

    return 0;
}