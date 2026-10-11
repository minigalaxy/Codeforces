#include <iostream>

using namespace std;

int t;

int n;

char c[2][100];

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < 2; j++){
            for(int k = 0; k < n; k++){
                cin >> c[j][k];
            }
        }

        bool res = true;

        for(int j = 0; res && j < n; j++){
            if(c[0][j] == 'R' ^ c[1][j] == 'R') res = false;
        }

        cout << ((res) ? "YES" : "NO") << '\n';
    }

    return 0;
}