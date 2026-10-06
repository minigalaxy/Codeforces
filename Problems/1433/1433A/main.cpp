#include <iostream>

using namespace std;

int t;

string x;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> x;

        cout << (x[0] - '1') * 10 + x.size() * (x.size() + 1) / 2 << '\n';
    }

    return 0;
}