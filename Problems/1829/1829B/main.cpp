#include <iostream>

using namespace std;

int t;

int n;

bool a;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        int res = 0;

        for(int j = 0, s = 0; j < n; j++){
            cin >> a;

            if(!a) res = max(res, ++s);
            else s = 0;
        }

        cout << res << '\n';
    }

    return 0;
}