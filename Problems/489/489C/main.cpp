#include <iostream>

using namespace std;

int m, s;

int main(){
    cin >> m >> s;

    if(s == 0 || s > 9 * m) cout << "-1 -1";
    else {
        if(s < m){
            cout << 1;

            for(int i = 1; i < m; i++){
                cout << ((m - i <= s - 1) ? 1 : 0);
            }
        } else {
            for(int i = 0, tmp = s; i < m; i++){
                int digit = max(1, tmp - (m - i - 1) * 9);

                cout << digit;

                tmp -= digit;
            }
        }

        cout << ' ';

        for(int i = 0, tmp = s; i < m; i++){
            int digit = min(9, tmp);

            cout << digit;

            tmp -= digit;
        }
    }

    return 0;
}