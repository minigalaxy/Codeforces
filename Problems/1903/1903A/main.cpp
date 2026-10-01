#include <iostream>

using namespace std;

int t;

int n, k;

int a[100];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k;

        for(int j = 0; j < n; j++) cin >> a[j];
        
        bool f = true;

        for(int j = 0; f && j < n - 1; j++){
            if(a[j + 1] < a[j]) f = false;
        }

        cout << ((!f && k == 1) ? "NO" : "YES") << '\n';
    }

    return 0;
}