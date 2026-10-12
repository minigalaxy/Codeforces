#include <iostream>

using namespace std;

int t;

int n, k;

int a;

int c[10];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < 10; j++) c[j] = 0;

        cin >> n >> k;

        for(int j = 0; j < n; j++){
            cin >> a;

            c[a - 1]++;
        }

        if(k == 2) cout << ((c[1] + c[3] + c[5] + c[7] + c[9]) == 0);
        else if(k == 3){
            if(c[2] + c[5] + c[8] > 0) cout << 0;
            else if(c[1] + c[4] + c[7] > 0) cout << 1;
            else cout << 2;
        } else if(k == 4) {
            if(c[3] + c[7] > 0) cout << 0;
            else if(c[1] + c[5] + c[9] >= 2) cout << 0;
            else if(c[2] + c[6] > 0 || (c[1] + c[5] + c[9] == 1 && c[0] + c[4] + c[8] > 0)) cout << 1;
            else if(c[1] + c[5] + c[9] == 1 || c[0] + c[4] + c[8] >= 2) cout << 2;
            else cout << 3;
        } else {
            if(c[4] + c[9] > 0) cout << 0;
            else if(c[3] + c[8] > 0) cout << 1;
            else if(c[2] + c[7] > 0) cout << 2;
            else if(c[1] + c[6] > 0) cout << 3;
            else cout << 4;
        }
        
        cout << '\n';
    }

    return 0;
}