#include <iostream>

using namespace std;

int t;

int h, m;

int main(){
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> h >> m;

        cout << (23 - h) * 60 + (60 - m) << '\n';
    }

    return 0;
}