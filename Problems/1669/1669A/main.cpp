#include <iostream>

using namespace std;

int t;

int r;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> r;

        cout << "Division ";

        if(r >= 1900) cout << 1;
        else if(r >= 1600) cout << 2;
        else if(r >= 1400) cout << 3;
        else cout << 4;

        cout << '\n';
    }

    return 0;
}