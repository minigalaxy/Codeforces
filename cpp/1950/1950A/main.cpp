#include <iostream>

using namespace std;

int t;

int a, b, c;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b >> c;

        if(a < b && b < c) cout << "STAIR";
        else if(a < b && b > c) cout << "PEAK";
        else cout << "NONE";

        cout << '\n';
    }

    return 0;
}