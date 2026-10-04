#include <iostream>

using namespace std;

int t;

string b;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> b;

        for(int j = 0; j < b.size() - 2; j += 2) cout << b[j];

        cout << b.substr(b.size() - 2, 2) << '\n';
    }

    return 0;
}