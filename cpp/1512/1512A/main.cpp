#include <iostream>

using namespace std;

int t;

int n;

int a[100];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        if(a[0] != a[1] && a[0] != a[n - 1]) cout << 1;
        else if(a[n - 1] != a[0] && a[n - 1] != a[n - 2]) cout << n;
        else {
            for(int j = 1; j < n - 1; j++){
                if(a[j] != a[j - 1] && a[j] != a[j + 1]){
                    cout << j + 1;

                    break;
                }
            }
        }
        
        cout << '\n';
    }

    return 0;
}