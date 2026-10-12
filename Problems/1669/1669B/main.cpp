#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

int a[200'000];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        sort(a, a + n);

        int res = -1;

        for(int j = 0; j < n - 2; j++){
            if(a[j] == a[j + 2]){
                res = a[j];

                break;
            }
        }
        
        cout << res << '\n';
    }

    return 0;
}