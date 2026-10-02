#include <iostream>

using namespace std;

int t;

string s[10];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < 10; j++) cin >> s[j];

        int res = 0;

        for(int j = 0; j < 5; j++){
            for(int k = j; k < 10 - j; k++){
                if(s[j][k] == 'X') res += j + 1;
                if(s[9 - j][k] == 'X') res += j + 1;
            }
            for(int k = j + 1; k < 9 - j; k++){
                if(s[k][j] == 'X') res += j + 1;
                if(s[k][9 - j] == 'X') res += j + 1;
            }
        }

        cout << res << '\n';
    }
}