#include <iostream>

using namespace std;

int t;

string n;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        cout << (n.size() - 1) * 9 + (n[0] - '0') << '\n';
    }

    return 0;
}