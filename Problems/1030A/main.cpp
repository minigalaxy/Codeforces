#include <iostream>

using namespace std;

int n;

int o;

bool res = true;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> o;

        if(o == 1) res = false;
    }

    cout << ((res) ? "EASY" : "HARD");

    return 0;
}