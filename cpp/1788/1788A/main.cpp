#include <iostream>

using namespace std;

int t;

int n;

int a;

int c[1'000];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        cin >> a;

        c[0] = ((a == 2) ? 1 : 0);

        for(int j = 1; j < n; j++){
            cin >> a;

            c[j] = c[j - 1] + ((a == 2) ? 1 : 0);
        }

        bool f = false;

        for(int j = 0; !f && j < n; j++){
            if(c[j] == c[n - 1] - c[j]){
                cout << j + 1 << '\n';
                
                f = true;
            }
        }

        if(!f) cout << -1 << '\n';
    }

    return 0;
}