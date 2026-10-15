#include <iostream>

using namespace std;

int m, s;

int main(){
    cin >> m >> s;

    if(s == 0 && m == 1) cout << "0 0";
    else if(s == 0 || s > 9 * m) cout << "-1 -1";
    else {
        if(s - 1 < (m - 1) * 9){
            cout << 1;

            for(int i = 1, tmp = s - 1; i < m; i++){
                int digit = max(0, tmp - (m - i - 1) * 9);

                cout << digit;

                tmp -= digit;
            }
        } else {
            for(int i = 0, tmp = s; i < m; i++){
                int digit = max(0, tmp - (m - i - 1) * 9);

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