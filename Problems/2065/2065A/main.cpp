#include <iostream>

using namespace std;

int t;

string W;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> W;

        cout << W.substr(0, W.size() - 2) << 'i' << '\n';
    }

    return 0;
}